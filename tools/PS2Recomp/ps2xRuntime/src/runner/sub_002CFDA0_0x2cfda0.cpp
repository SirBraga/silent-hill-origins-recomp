#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFDA0
// Address: 0x2cfda0 - 0x2cff40
void sub_002CFDA0_0x2cfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFDA0_0x2cfda0");
#endif

    switch (ctx->pc) {
        case 0x2cfe04u: goto label_2cfe04;
        case 0x2cfe4cu: goto label_2cfe4c;
        case 0x2cfe64u: goto label_2cfe64;
        case 0x2cfe84u: goto label_2cfe84;
        case 0x2cfe9cu: goto label_2cfe9c;
        default: break;
    }

    ctx->pc = 0x2cfda0u;

    // 0x2cfda0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cfda4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cfda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cfda8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cfda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cfdac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cfdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cfdb4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cfdb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cfdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cfdbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cfdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cfdc4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cfdc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cfdcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cfdd0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2cfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2cfdd4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2cfdd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdd8: 0x14a4000c  bne         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CFDD8u;
    {
        const bool branch_taken_0x2cfdd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDD8u;
        // 0x2cfddc: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdd8) {
            ctx->pc = 0x2CFE0Cu;
            goto label_2cfe0c;
        }
    }
    ctx->pc = 0x2CFDE0u;
    // 0x2cfde0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2cfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cfde4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cfde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cfde8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2cfde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2cfdec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2cfdecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfdf0: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFDF0u;
    {
        const bool branch_taken_0x2cfdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cfdf0) {
            ctx->pc = 0x2CFDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFDF0u;
            // 0x2cfdf4: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE10u;
            goto label_2cfe10;
        }
    }
    ctx->pc = 0x2CFDF8u;
    // 0x2cfdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdfc: 0xc0b3b3e  jal         func_2CECF8
    ctx->pc = 0x2CFDFCu;
    SET_GPR_U32(ctx, 31, 0x2CFE04u);
    ctx->pc = 0x2CFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFDFCu;
    // 0x2cfe00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CECF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CECF8u, 0x2CFDFCu, 0x2CFE04u)) {
        return;
    }
    ctx->pc = 0x2CFE04u;
label_2cfe04:
    // 0x2cfe04: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CFE04u;
    {
        const bool branch_taken_0x2cfe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE04u;
        // 0x2cfe08: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe04) {
            ctx->pc = 0x2CFF28u;
            goto label_2cff28;
        }
    }
    ctx->pc = 0x2CFE0Cu;
label_2cfe0c:
    // 0x2cfe0c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2cfe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cfe10:
    // 0x2cfe10: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2cfe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfe14: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2cfe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfe18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cfe18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2cfe1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cfe1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2cfe20: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2cfe20u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2cfe24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2cfe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cfe28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2cfe28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cfe2c: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CFE2Cu;
    {
        const bool branch_taken_0x2cfe2c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2CFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE2Cu;
        // 0x2cfe30: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe2c) {
            ctx->pc = 0x2CFE6Cu;
            goto label_2cfe6c;
        }
    }
    ctx->pc = 0x2CFE34u;
    // 0x2cfe34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cfe38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cfe38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe3c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2cfe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfe40: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cfe44: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2CFE44u;
    SET_GPR_U32(ctx, 31, 0x2CFE4Cu);
    ctx->pc = 0x2CFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE44u;
    // 0x2cfe48: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2CFE44u, 0x2CFE4Cu)) {
        return;
    }
    ctx->pc = 0x2CFE4Cu;
label_2cfe4c:
    // 0x2cfe4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cfe50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cfe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe54: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x2cfe54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cfe58: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2cfe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cfe5c: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2CFE5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE64u);
    ctx->pc = 0x2CFE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE5Cu;
    // 0x2cfe60: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2CFE5Cu, 0x2CFE64u)) {
        return;
    }
    ctx->pc = 0x2CFE64u;
label_2cfe64:
    // 0x2cfe64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CFE64u;
    {
        const bool branch_taken_0x2cfe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE64u;
        // 0x2cfe68: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe64) {
            ctx->pc = 0x2CFEA0u;
            goto label_2cfea0;
        }
    }
    ctx->pc = 0x2CFE6Cu;
label_2cfe6c:
    // 0x2cfe6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cfe70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cfe70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe74: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2cfe74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfe78: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cfe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cfe7c: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2CFE7Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE84u);
    ctx->pc = 0x2CFE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE7Cu;
    // 0x2cfe80: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2CFE7Cu, 0x2CFE84u)) {
        return;
    }
    ctx->pc = 0x2CFE84u;
label_2cfe84:
    // 0x2cfe84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cfe88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cfe88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe8c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x2cfe8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cfe90: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cfe94: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2CFE94u;
    SET_GPR_U32(ctx, 31, 0x2CFE9Cu);
    ctx->pc = 0x2CFE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE94u;
    // 0x2cfe98: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2CFE94u, 0x2CFE9Cu)) {
        return;
    }
    ctx->pc = 0x2CFE9Cu;
label_2cfe9c:
    // 0x2cfe9c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2cfe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cfea0:
    // 0x2cfea0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2cfea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfea4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2cfea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfea8: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2cfea8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cfeac: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2cfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfeb0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2cfeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfeb4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2cfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfeb8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2cfeb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2cfebc: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2cfebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cfec0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cfec0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cfec4: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2cfec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cfec8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFEC8u;
    {
        const bool branch_taken_0x2cfec8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEC8u;
        // 0x2cfecc: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfec8) {
            ctx->pc = 0x2CFEF8u;
            goto label_2cfef8;
        }
    }
    ctx->pc = 0x2CFED0u;
    // 0x2cfed0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2cfed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfed4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfed8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2cfed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cfedc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2cfedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfee0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2cfee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2cfee4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2cfee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cfee8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2cfee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfeec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2cfeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cfef0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2cfef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2cfef4: 0x0  nop
    ctx->pc = 0x2cfef4u;
    // NOP
label_2cfef8:
    // 0x2cfef8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2cfef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfefc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2cfefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cff00: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2cff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cff04: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2cff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cff08: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2cff08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cff0c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff10: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2cff10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2cff14: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2cff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cff18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cff18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cff1c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cff1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cff20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2cff20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cff24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cff24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cff28:
    // 0x2cff28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cff28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cff2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cff2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cff30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cff34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cff38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF38u;
        // 0x2cff3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF40u;
}
