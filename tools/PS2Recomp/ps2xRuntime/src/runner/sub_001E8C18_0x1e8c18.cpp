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

// Function: sub_001E8C18
// Address: 0x1e8c18 - 0x1e9000
void sub_001E8C18_0x1e8c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8C18_0x1e8c18");
#endif

    switch (ctx->pc) {
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8f30u: goto label_1e8f30;
        default: break;
    }

    ctx->pc = 0x1e8c18u;

    // 0x1e8c18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e8c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e8c1c: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e8c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8c24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e8c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e8c28: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1e8c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e8c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e8c34: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1e8c34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c38: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e8c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1e8c3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e8c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e8c40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e8c44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e8c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1e8c48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e8c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1e8c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8c50: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x1e8c50u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e8c54: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x1e8c54u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e8c58: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x1e8c58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e8c5c: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x1e8c5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e8c60: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1e8c60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e8c64: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1e8c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e8c68: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1e8c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e8c6c: 0xc4e0012c  lwc1        $f0, 0x12C($a3)
    ctx->pc = 0x1e8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c70: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1e8c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e8c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8c78: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e8c7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e8c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8c84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8c88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e8c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e8c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8c90: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8C90u;
    {
        const bool branch_taken_0x1e8c90 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1E8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C90u;
        // 0x1e8c94: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c90) {
            ctx->pc = 0x1E8CACu;
            goto label_1e8cac;
        }
    }
    ctx->pc = 0x1E8C98u;
    // 0x1e8c98: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8ca0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e8ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e8ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8CA4u;
    {
        const bool branch_taken_0x1e8ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ca4) {
            ctx->pc = 0x1E8CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8CA4u;
            // 0x1e8ca8: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CB8u;
            goto label_1e8cb8;
        }
    }
    ctx->pc = 0x1E8CACu;
label_1e8cac:
    // 0x1e8cac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8cb0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8cb4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1e8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1e8cb8:
    // 0x1e8cb8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8cbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e8cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e8cc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8cc4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8ccc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e8cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e8cd0: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e8cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e8cd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8cd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e8cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8cdc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ce0: 0x46020602  mul.s       $f24, $f0, $f2
    ctx->pc = 0x1e8ce0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e8ce4: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E8CE4u;
    SET_GPR_U32(ctx, 31, 0x1E8CECu);
    ctx->pc = 0x1E8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CE4u;
    // 0x1e8ce8: 0x4601c602  mul.s       $f24, $f24, $f1 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E8CE4u, 0x1E8CECu)) {
        return;
    }
    ctx->pc = 0x1E8CECu;
label_1e8cec:
    // 0x1e8cec: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1E8CECu;
    {
        const bool branch_taken_0x1e8cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cec) {
            ctx->pc = 0x1E8CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8CECu;
            // 0x1e8cf0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8FB8u;
            goto label_1e8fb8;
        }
    }
    ctx->pc = 0x1E8CF4u;
    // 0x1e8cf4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1e8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e8cf8: 0xc61a003c  lwc1        $f26, 0x3C($s0)
    ctx->pc = 0x1e8cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1e8cfc: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x1e8cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e8d00: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1E8D00u;
    {
        const bool branch_taken_0x1e8d00 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1E8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D00u;
        // 0x1e8d04: 0xc6170038  lwc1        $f23, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d00) {
            ctx->pc = 0x1E8FB4u;
            goto label_1e8fb4;
        }
    }
    ctx->pc = 0x1E8D08u;
    // 0x1e8d08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e8d0c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e8d10: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1e8d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
    // 0x1e8d14: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1e8d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x1e8d18: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e8d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e8d1c: 0x2452a230  addiu       $s2, $v0, -0x5DD0
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e8d20: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1e8d24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1e8d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1e8d28: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1e8d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1e8d2c: 0x24709e30  addiu       $s0, $v1, -0x61D0
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
    // 0x1e8d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e8d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d34: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x1e8d38: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1e8d38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x1e8d3c: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e8d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1e8d40:
    // 0x1e8d40: 0x8ec7a630  lw          $a3, -0x59D0($s6)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944304)));
    // 0x1e8d44: 0x4617d141  sub.s       $f5, $f26, $f23
    ctx->pc = 0x1e8d44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[23]);
    // 0x1e8d48: 0x8ea8a634  lw          $t0, -0x59CC($s5)
    ctx->pc = 0x1e8d48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944308)));
    // 0x1e8d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e8d54: 0x8e86a638  lw          $a2, -0x59C8($s4)
    ctx->pc = 0x1e8d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944312)));
    // 0x1e8d58: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x1e8d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x1e8d5c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e8d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e8d60: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1e8d60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e8d64: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8d68: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8d6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8d70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e8d74: 0x24c6001b  addiu       $a2, $a2, 0x1B
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27));
    // 0x1e8d78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d7c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e8d80: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1e8d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8d84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e8d88: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8d8c: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x1e8d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x1e8d90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8d94: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1e8d94u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1e8d98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e8d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8d9c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e8d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e8da0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1e8da0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e8da4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8da8: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e8da8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e8dac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8db0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8db4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e8db8: 0x24c6001b  addiu       $a2, $a2, 0x1B
    ctx->pc = 0x1e8db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27));
    // 0x1e8dbc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e8dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e8dc0: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x1e8dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x1e8dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8dc8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8dcc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e8dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e8dd0: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1e8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8dd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e8dd8: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x1e8dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x1e8ddc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e8ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e8de0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1e8de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e8de4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1e8de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e8de8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8dec: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e8decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8df0: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1e8df0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1e8df4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8df8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1e8df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8dfc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8e00: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e8e04: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1e8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1e8e08: 0x24c6001b  addiu       $a2, $a2, 0x1B
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27));
    // 0x1e8e0c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x1e8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8e10: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1e8e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8e14: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e8e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e8e18: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e8e18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e8e1c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8e20: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1e8e20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1e8e24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8e28: 0x4615c542  mul.s       $f21, $f24, $f21
    ctx->pc = 0x1e8e28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x1e8e2c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e8e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e8e30: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x1e8e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x1e8e34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8e38: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1e8e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1e8e3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8e40: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e8e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e8e44: 0xaec7a630  sw          $a3, -0x59D0($s6)
    ctx->pc = 0x1e8e44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294944304), GPR_U32(ctx, 7));
    // 0x1e8e48: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1e8e48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1e8e4c: 0xae86a638  sw          $a2, -0x59C8($s4)
    ctx->pc = 0x1e8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944312), GPR_U32(ctx, 6));
    // 0x1e8e50: 0x4619a901  sub.s       $f4, $f21, $f25
    ctx->pc = 0x1e8e50u;
    ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x1e8e54: 0xaea8a634  sw          $t0, -0x59CC($s5)
    ctx->pc = 0x1e8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944308), GPR_U32(ctx, 8));
    // 0x1e8e58: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1e8e58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1e8e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8e64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e8e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e8e68: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e8e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e6c: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x1e8e6cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
    // 0x1e8e70: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e8e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e8e74: 0x4619a041  sub.s       $f1, $f20, $f25
    ctx->pc = 0x1e8e74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
    // 0x1e8e78: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1e8e78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1e8e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8e80: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1e8e80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1e8e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8e88: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1e8e88u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1e8e8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e8e90: 0x4603b8c0  add.s       $f3, $f23, $f3
    ctx->pc = 0x1e8e90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x1e8e94: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8e98: 0x46001164  .word       0x46001164                   # cvt.w.s     $f5, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1e8e9c: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1e8e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e8ea0: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1e8ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1e8ea4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1e8ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e8ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8eac: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x1e8eacu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x1e8eb0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e8eb4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e8eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e8eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8ebc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e8ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e8ec0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e8ec4: 0x46162102  mul.s       $f4, $f4, $f22
    ctx->pc = 0x1e8ec4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x1e8ec8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8ecc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8ed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8ed4: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x1e8ed4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1e8ed8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e8edc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1e8edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e8ee0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8ee4: 0x46002164  .word       0x46002164                   # cvt.w.s     $f5, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1e8ee8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1e8ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e8eec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e8eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e8ef0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e8ef4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8ef8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e8efc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e8efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e8f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8f04: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1e8f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e8f08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e8f0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8f18: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1e8f18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e8f1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e8f20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f24: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1e8f24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e8f28: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E8F28u;
    SET_GPR_U32(ctx, 31, 0x1E8F30u);
    ctx->pc = 0x1E8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F28u;
    // 0x1e8f2c: 0xe6230008  swc1        $f3, 0x8($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E8F28u, 0x1E8F30u)) {
        return;
    }
    ctx->pc = 0x1E8F30u;
label_1e8f30:
    // 0x1e8f30: 0x4600ad45  abs.s       $f21, $f21
    ctx->pc = 0x1e8f30u;
    ctx->f[21] = FPU_ABS_S(ctx->f[21]);
    // 0x1e8f34: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1e8f34u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1e8f38: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x1e8f38u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x1e8f3c: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1e8f3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1e8f40: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e8f44: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e8f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e8f48: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e8f4c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e8f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e8f50: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x1e8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1e8f54: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1e8f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8f5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8f60: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e8f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e8f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8f6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8f70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e8f74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e8f78: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8f7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8f80: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1e8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1e8f84: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e8f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8f88: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e8f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e8f8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e8f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e8f90: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e8f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8f94: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1e8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1e8f98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e8f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e8f9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1e8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8fa0: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1e8fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e8fa4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1e8fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e8fa8: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x1e8fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e8fac: 0x1660ff64  bnez        $s3, . + 4 + (-0x9C << 2)
    ctx->pc = 0x1E8FACu;
    {
        const bool branch_taken_0x1e8fac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FACu;
        // 0x1e8fb0: 0x8e31003c  lw          $s1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fac) {
            ctx->pc = 0x1E8D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8d40;
        }
    }
    ctx->pc = 0x1E8FB4u;
label_1e8fb4:
    // 0x1e8fb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e8fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e8fb8:
    // 0x1e8fb8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e8fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8fbc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e8fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8fc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e8fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8fc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e8fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8fc8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e8fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8fcc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e8fccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8fd0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e8fd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8fd8: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x1e8fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1e8fdc: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x1e8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e8fe0: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x1e8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e8fe4: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x1e8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e8fe8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1e8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e8fec: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1e8fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8ff0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1e8ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FF4u;
        // 0x1e8ff8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8FFCu;
    // 0x1e8ffc: 0x0  nop
    ctx->pc = 0x1e8ffcu;
    // NOP
    ctx->pc = 0x1e9000u;
}
