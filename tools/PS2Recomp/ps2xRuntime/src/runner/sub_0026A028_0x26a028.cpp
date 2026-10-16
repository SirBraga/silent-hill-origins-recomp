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

// Function: sub_0026A028
// Address: 0x26a028 - 0x26aa28
void sub_0026A028_0x26a028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A028_0x26a028");
#endif

    switch (ctx->pc) {
        case 0x26a080u: goto label_26a080;
        case 0x26a0d8u: goto label_26a0d8;
        case 0x26a148u: goto label_26a148;
        case 0x26a258u: goto label_26a258;
        case 0x26a918u: goto label_26a918;
        case 0x26a960u: goto label_26a960;
        case 0x26a96cu: goto label_26a96c;
        default: break;
    }

    ctx->pc = 0x26a028u;

    // 0x26a028: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26a028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26a02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a030: 0x8c633888  lw          $v1, 0x3888($v1)
    ctx->pc = 0x26a030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3888u));
    // 0x26a034: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26a034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x26a038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26a038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a03c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x26a040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26a040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a044: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26a048: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26a048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a04c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26a050: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26a054: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x26a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x26a058: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x26a058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a05c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26a060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a064: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x26a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a068: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x26a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a06c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26a070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26a074: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x26a074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x26a078: 0xc099c1e  jal         func_267078
    ctx->pc = 0x26A078u;
    SET_GPR_U32(ctx, 31, 0x26A080u);
    ctx->pc = 0x26A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A078u;
    // 0x26a07c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267078u, 0x26A078u, 0x26A080u)) {
        return;
    }
    ctx->pc = 0x26A080u;
label_26a080:
    // 0x26a080: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x26a084: 0xc7808744  lwc1        $f0, -0x78BC($gp)
    ctx->pc = 0x26a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a088: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x26a088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x730FC8u));
    // 0x26a08c: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x26a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a090: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x26a090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a094: 0x0  nop
    ctx->pc = 0x26a094u;
    // NOP
    // 0x26a098: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A098u;
    {
        const bool branch_taken_0x26a098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a098) {
            ctx->pc = 0x26A0BCu;
            goto label_26a0bc;
        }
    }
    ctx->pc = 0x26A0A0u;
    // 0x26a0a0: 0xe7828744  swc1        $f2, -0x78BC($gp)
    ctx->pc = 0x26a0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), bits); }
    // 0x26a0a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a0ac: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x26a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a0b0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x26a0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26a0b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26a0b4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x26a0b8: 0xe7818740  swc1        $f1, -0x78C0($gp)
    ctx->pc = 0x26a0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), bits); }
label_26a0bc:
    // 0x26a0bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A0BCu;
    {
        const bool branch_taken_0x26a0bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a0bc) {
            ctx->pc = 0x26A0D0u;
            goto label_26a0d0;
        }
    }
    ctx->pc = 0x26A0C4u;
    // 0x26a0c4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x26a0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26a0c8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A0C8u;
    {
        const bool branch_taken_0x26a0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0c8) {
            ctx->pc = 0x26A0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A0C8u;
            // 0x26a0cc: 0xae500040  sw          $s0, 0x40($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A0E0u;
            goto label_26a0e0;
        }
    }
    ctx->pc = 0x26A0D0u;
label_26a0d0:
    // 0x26a0d0: 0xc091a88  jal         func_246A20
    ctx->pc = 0x26A0D0u;
    SET_GPR_U32(ctx, 31, 0x26A0D8u);
    ctx->pc = 0x26A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0D0u;
    // 0x26a0d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x26A0D0u, 0x26A0D8u)) {
        return;
    }
    ctx->pc = 0x26A0D8u;
label_26a0d8:
    // 0x26a0d8: 0xae500040  sw          $s0, 0x40($s2)
    ctx->pc = 0x26a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 16));
    // 0x26a0dc: 0x0  nop
    ctx->pc = 0x26a0dcu;
    // NOP
label_26a0e0:
    // 0x26a0e0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26A0E0u;
    {
        const bool branch_taken_0x26a0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0E0u;
        // 0x26a0e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0e0) {
            ctx->pc = 0x26A0ECu;
            goto label_26a0ec;
        }
    }
    ctx->pc = 0x26A0E8u;
    // 0x26a0e8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x26a0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26a0ec:
    // 0x26a0ec: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x26A0ECu;
    {
        const bool branch_taken_0x26a0ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0ECu;
        // 0x26a0f0: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0ec) {
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x26A0F4u;
    // 0x26a0f4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x26a0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x26a0f8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26a0fc: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x26a0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x26a100: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26a104: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x26a104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26a108: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26a108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26a10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a110: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a114: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x26a114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
label_26a118:
    // 0x26a118: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a11c: 0x8c424138  lw          $v0, 0x4138($v0)
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4138u));
    // 0x26a120: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26A120u;
    {
        const bool branch_taken_0x26a120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A120u;
        // 0x26a124: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a120) {
            ctx->pc = 0x26A228u;
            goto label_26a228;
        }
    }
    ctx->pc = 0x26A128u;
    // 0x26a128: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A128u;
        // 0x26a12c: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A150u;
            goto label_26a150;
        }
    }
    ctx->pc = 0x26A130u;
    // 0x26a130: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26a134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a13c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a140: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26A140u;
    SET_GPR_U32(ctx, 31, 0x26A148u);
    ctx->pc = 0x26A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A140u;
    // 0x26a144: 0xff8284a0  sd          $v0, -0x7B60($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26A140u, 0x26A148u)) {
        return;
    }
    ctx->pc = 0x26A148u;
label_26a148:
    // 0x26a148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26A148u;
    {
        const bool branch_taken_0x26a148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A148u;
        // 0x26a14c: 0xaf9190c8  sw          $s1, -0x6F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a148) {
            ctx->pc = 0x26A168u;
            goto label_26a168;
        }
    }
    ctx->pc = 0x26A150u;
label_26a150:
    // 0x26a150: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x26a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x26a154: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a158: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a15c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26a15cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26a160: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a164: 0xac314138  sw          $s1, 0x4138($at)
    ctx->pc = 0x26a164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_26a168:
    // 0x26a168: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26A168u;
    {
        const bool branch_taken_0x26a168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A168u;
        // 0x26a16c: 0xdf828488  ld          $v0, -0x7B78($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a168) {
            ctx->pc = 0x26A220u;
            goto label_26a220;
        }
    }
    ctx->pc = 0x26A170u;
    // 0x26a170: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x26a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x26a174: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x26a174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26a178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a17c: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x26a17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x26a180: 0x5024000e  beql        $at, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x26A180u;
    {
        const bool branch_taken_0x26a180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a180) {
            ctx->pc = 0x26A184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A180u;
            // 0x26a184: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1BCu;
            goto label_26a1bc;
        }
    }
    ctx->pc = 0x26A188u;
    // 0x26a188: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x26a188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x26a18c: 0x5024000b  beql        $at, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A18Cu;
    {
        const bool branch_taken_0x26a18c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a18c) {
            ctx->pc = 0x26A190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A18Cu;
            // 0x26a190: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1BCu;
            goto label_26a1bc;
        }
    }
    ctx->pc = 0x26A194u;
    // 0x26a194: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x26a194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x26a198: 0x50240008  beql        $at, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A198u;
    {
        const bool branch_taken_0x26a198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a198) {
            ctx->pc = 0x26A19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A198u;
            // 0x26a19c: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1BCu;
            goto label_26a1bc;
        }
    }
    ctx->pc = 0x26A1A0u;
    // 0x26a1a0: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x26a1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x26a1a4: 0x50240005  beql        $at, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A1A4u;
    {
        const bool branch_taken_0x26a1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a1a4) {
            ctx->pc = 0x26A1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A1A4u;
            // 0x26a1a8: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1BCu;
            goto label_26a1bc;
        }
    }
    ctx->pc = 0x26A1ACu;
    // 0x26a1ac: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x26a1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x26a1b0: 0x50240002  beql        $at, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26A1B0u;
    {
        const bool branch_taken_0x26a1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a1b0) {
            ctx->pc = 0x26A1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A1B0u;
            // 0x26a1b4: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1BCu;
            goto label_26a1bc;
        }
    }
    ctx->pc = 0x26A1B8u;
    // 0x26a1b8: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x26a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_26a1bc:
    // 0x26a1bc: 0x0  nop
    ctx->pc = 0x26a1bcu;
    // NOP
    // 0x26a1c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a1c4: 0xfc2234f8  sd          $v0, 0x34F8($at)
    ctx->pc = 0x26a1c4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x26a1c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a1cc: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x26a1ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26a1d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a1d4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x26a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26a1d8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x26a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x26a1dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26a1e0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A1E0u;
    {
        const bool branch_taken_0x26a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26a1e0) {
            ctx->pc = 0x26A1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A1E0u;
            // 0x26a1e4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1F8u;
            goto label_26a1f8;
        }
    }
    ctx->pc = 0x26A1E8u;
    // 0x26a1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a1ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a1f0: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x26a1f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26a1f4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_26a1f8:
    // 0x26a1f8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26a1fc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x26a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x26a200: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A200u;
    {
        const bool branch_taken_0x26a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A200u;
        // 0x26a204: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a200) {
            ctx->pc = 0x26A228u;
            goto label_26a228;
        }
    }
    ctx->pc = 0x26A208u;
    // 0x26a208: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a20c: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26a20cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26a210: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a218: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a21c: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x26a21cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
label_26a220:
    // 0x26a220: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a224: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x26a224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
label_26a228:
    // 0x26a228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A228u;
    {
        const bool branch_taken_0x26a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A228u;
        // 0x26a22c: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a228) {
            ctx->pc = 0x26A23Cu;
            goto label_26a23c;
        }
    }
    ctx->pc = 0x26A230u;
    // 0x26a230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A234u;
    {
        const bool branch_taken_0x26a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A234u;
        // 0x26a238: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a234) {
            ctx->pc = 0x26A244u;
            goto label_26a244;
        }
    }
    ctx->pc = 0x26A23Cu;
label_26a23c:
    // 0x26a23c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26a240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a244:
    // 0x26a244: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a248: 0xfc2234d0  sd          $v0, 0x34D0($at)
    ctx->pc = 0x26a248u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34D0u, _value); } while (0);
    // 0x26a24c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a250: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26A250u;
    SET_GPR_U32(ctx, 31, 0x26A258u);
    ctx->pc = 0x26A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A250u;
    // 0x26a254: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26A250u, 0x26A258u)) {
        return;
    }
    ctx->pc = 0x26A258u;
label_26a258:
    // 0x26a258: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26a258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26a25c: 0x3463001a  ori         $v1, $v1, 0x1A
    ctx->pc = 0x26a25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26);
    // 0x26a260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a264: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x26a264u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x26a268: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26a268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26a26c: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x26a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a270: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x26a270u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x26a274: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x26a274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x26a278: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a27c: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26a27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a280: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x26a280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x26a284: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26a284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26a288: 0x346303bc  ori         $v1, $v1, 0x3BC
    ctx->pc = 0x26a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)956);
    // 0x26a28c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x26a28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x26a290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a294: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x26a294u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x26a298: 0x704214c8  ppacw       $v0, $v0, $v0
    ctx->pc = 0x26a298u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x26a29c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x26a29cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a2a0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x26a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x26a2a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2a8: 0x9f828744  lwu         $v0, -0x78BC($gp)
    ctx->pc = 0x26a2a8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x26a2ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26a2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26a2b0: 0x9f838740  lwu         $v1, -0x78C0($gp)
    ctx->pc = 0x26a2b0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x26a2b4: 0x4483e  dsrl32      $t1, $a0, 0
    ctx->pc = 0x26a2b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x26a2b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26a2bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a2c0: 0x70491389  pcpyld      $v0, $v0, $t1
    ctx->pc = 0x26a2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x26a2c4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x26a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x26a2c8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x26a2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a2cc: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x26a2ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x26a2d0: 0x35298002  ori         $t1, $t1, 0x8002
    ctx->pc = 0x26a2d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32770);
    // 0x26a2d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26a2d8: 0x70891389  pcpyld      $v0, $a0, $t1
    ctx->pc = 0x26a2d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x26a2dc: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x26a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x26a2e0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x26a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x26a2e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a2e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26a2ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x26a2f0: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x26a2f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x26a2f4: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x26a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x26a2f8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x26a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26a2fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a300: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26a300u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26a304: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x26a308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a30c: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x26a30cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x26a310: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x26a310u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x26a314: 0x70891389  pcpyld      $v0, $a0, $t1
    ctx->pc = 0x26a314u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x26a318: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x26a318u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x26a31c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a320: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26a324: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x26a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x26a328: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x26a328u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x26a32c: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x26a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x26a330: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a334: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26a334u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26a338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a33c: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x26a33cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x26a340: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x26a340u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x26a344: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x26a344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a348: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x26a348u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x26a34c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x26a34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a350: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x26a350u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x26a354: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x26a354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a358: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x26a358u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x26a35c: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x26a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x26a360: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a364: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a368: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x26a368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26a36c: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26a36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26a370: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x26a370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x26a374: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26a374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26a378: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26a378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26a37c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26a37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26a380: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26a380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26a384: 0x70882389  pcpyld      $a0, $a0, $t0
    ctx->pc = 0x26a384u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x26a388: 0x7ca400b0  sq          $a0, 0xB0($a1)
    ctx->pc = 0x26a388u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 4));
    // 0x26a38c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x26a390: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a394: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26a394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a398: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x26a398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x26a39c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a3a0: 0x8c634134  lw          $v1, 0x4134($v1)
    ctx->pc = 0x26a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4134u));
    // 0x26a3a4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x26a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x26a3a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26a3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a3ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x26a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a3b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A3B0u;
    {
        const bool branch_taken_0x26a3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3B0u;
        // 0x26a3b4: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3b0) {
            ctx->pc = 0x26A3D0u;
            goto label_26a3d0;
        }
    }
    ctx->pc = 0x26A3B8u;
    // 0x26a3b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a3bc: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26a3bcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26a3c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26a3c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A3C4u;
    {
        const bool branch_taken_0x26a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3C4u;
        // 0x26a3c8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3c4) {
            ctx->pc = 0x26A3E0u;
            goto label_26a3e0;
        }
    }
    ctx->pc = 0x26A3CCu;
    // 0x26a3cc: 0x0  nop
    ctx->pc = 0x26a3ccu;
    // NOP
label_26a3d0:
    // 0x26a3d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a3d4: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26a3d4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26a3d8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x26a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x26a3dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a3e0:
    // 0x26a3e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a3e4: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26a3e4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26a3e8: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x26a3e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x26a3ec: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26a3f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a3f4: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x26a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x26a3f8: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x26a3f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x26a3fc: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x26a3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x26a400: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26a400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26a404: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26a404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x26a408: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26a408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26a40c: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x26a40cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x26a410: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x26a410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x26a414: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x26a414u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x26a418: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26a41c: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x26a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x26a420: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26a424: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x26a428: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x26a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x26a42c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x26a42cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26a430: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26a434: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x26a434u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x26a438: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x26a438u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x26a43c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x26a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x26a440: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x26a440u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a444: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x26a444u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x26a448: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26a44c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a450: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x26a450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a454: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26a454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26a458: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26a45c: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x26a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x26a460: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26a464: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26a468: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26a46c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26a470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a474: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26a474u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26a478: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x26a478u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x26a47c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x26a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26a480: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a484: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a488: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a48c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26a48cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26a490: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x26a494: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x26a494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x26a498: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26a498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26a49c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26a4a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4A0u;
    {
        const bool branch_taken_0x26a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A0u;
        // 0x26a4a4: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a0) {
            ctx->pc = 0x26A4B8u;
            goto label_26a4b8;
        }
    }
    ctx->pc = 0x26A4A8u;
    // 0x26a4a8: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26a4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26a4ac: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26a4acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26a4b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26a4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26a4b4: 0x0  nop
    ctx->pc = 0x26a4b4u;
    // NOP
label_26a4b8:
    // 0x26a4b8: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x26a4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x26a4bc: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x26a4bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x26a4c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x26a4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26a4c4: 0x0  nop
    ctx->pc = 0x26a4c4u;
    // NOP
    // 0x26a4c8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x26a4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x26a4cc: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x26a4ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x26a4d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x26a4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26a4d4: 0x0  nop
    ctx->pc = 0x26a4d4u;
    // NOP
    // 0x26a4d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x26a4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x26a4dc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x26a4dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a4e0: 0x0  nop
    ctx->pc = 0x26a4e0u;
    // NOP
    // 0x26a4e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26a4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26a4e8: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26a4ec: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26a4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26a4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a4f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x26a4f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a4f8: 0x0  nop
    ctx->pc = 0x26a4f8u;
    // NOP
    // 0x26a4fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26a4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26a500: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x26a500u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a504: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x26a504u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x26a508: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26a508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a50c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26a50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26a510: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26a510u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26a514: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26a514u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26a518: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x26a518u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x26a51c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x26a51cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x26a520: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26a520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a524: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26a524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26a528: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26a528u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26a52c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x26a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x26a530: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26a534: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a538: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a53c: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26a540: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26a544: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x26a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x26a548: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26a548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26a54c: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26a550: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26a554: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26a558: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26a558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26a55c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x26a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x26a560: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x26a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26a564: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a568: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a56c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x26a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x26a570: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x26a570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x26a574: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x26a574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x26a578: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26a578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26a57c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x26a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a580: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a584: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a588: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x26a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a58c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x26a58cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a590: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a594: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26a594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26a598: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26a598u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26a59c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26a59cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26a5a0: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x26a5a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26a5a4: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x26a5a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26a5a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26a5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a5ac: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26a5acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26a5b0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26a5b0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26a5b4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x26a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x26a5b8: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x26a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x26a5bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a5c0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a5c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a5c4: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x26a5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26a5c8: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x26a5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x26a5cc: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26a5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26a5d0: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x26a5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x26a5d4: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26a5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26a5d8: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26a5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26a5dc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26a5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26a5e0: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26a5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26a5e4: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x26a5e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x26a5e8: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x26a5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26a5ec: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x26a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x26a5f0: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x26a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26a5f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a5f8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a5fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a600: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x26a600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26a604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A604u;
    {
        const bool branch_taken_0x26a604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A604u;
        // 0x26a608: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a604) {
            ctx->pc = 0x26A618u;
            goto label_26a618;
        }
    }
    ctx->pc = 0x26A60Cu;
    // 0x26a60c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26A60Cu;
    {
        const bool branch_taken_0x26a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a60c) {
            ctx->pc = 0x26A610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A60Cu;
            // 0x26a610: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A638u;
            goto label_26a638;
        }
    }
    ctx->pc = 0x26A614u;
    // 0x26a614: 0x0  nop
    ctx->pc = 0x26a614u;
    // NOP
label_26a618:
    // 0x26a618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a61c: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x26a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x26a620: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A620u;
    {
        const bool branch_taken_0x26a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A620u;
        // 0x26a624: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a620) {
            ctx->pc = 0x26A668u;
            goto label_26a668;
        }
    }
    ctx->pc = 0x26A628u;
    // 0x26a628: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A628u;
    {
        const bool branch_taken_0x26a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a628) {
            ctx->pc = 0x26A62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A628u;
            // 0x26a62c: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A670u;
            goto label_26a670;
        }
    }
    ctx->pc = 0x26A630u;
    // 0x26a630: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x26a630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x26a634: 0x0  nop
    ctx->pc = 0x26a634u;
    // NOP
label_26a638:
    // 0x26a638: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26a638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26a63c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a640: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26a640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26a644: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x26a648: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26a648u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x26a64c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a650: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a654: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a658: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26a658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a65c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26a660: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26A660u;
    {
        const bool branch_taken_0x26a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A660u;
        // 0x26a664: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a660) {
            ctx->pc = 0x26A698u;
            goto label_26a698;
        }
    }
    ctx->pc = 0x26A668u;
label_26a668:
    // 0x26a668: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26a668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26a66c: 0x0  nop
    ctx->pc = 0x26a66cu;
    // NOP
label_26a670:
    // 0x26a670: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26a674: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a678: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x26a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x26a67c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26a67cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a680: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a684: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a688: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a68c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26a68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a690: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26a690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26a694: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_26a698:
    // 0x26a698: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x26a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a69c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26a69cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a6a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a6a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a6a8: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26a6a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a6ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a6b0: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x26a6b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a6b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A6B8u;
    {
        const bool branch_taken_0x26a6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6B8u;
        // 0x26a6bc: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6b8) {
            ctx->pc = 0x26A6CCu;
            goto label_26a6cc;
        }
    }
    ctx->pc = 0x26A6C0u;
    // 0x26a6c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26a6c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a6c8: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x26a6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_26a6cc:
    // 0x26a6cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a6d0: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x26a6d0u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x26a6d4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x26a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x26a6d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26a6dc: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x26a6dcu;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x26a6e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26a6e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26a6e8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x26a6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26a6ec: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x26a6ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x26a6f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26a6f4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a6f8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x26a6fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a700: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a704: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26a704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a708: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x26a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26a70c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A70Cu;
    {
        const bool branch_taken_0x26a70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A70Cu;
        // 0x26a710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a70c) {
            ctx->pc = 0x26A7B0u;
            goto label_26a7b0;
        }
    }
    ctx->pc = 0x26A714u;
    // 0x26a714: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26a714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26a718: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x26a718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x26a71c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26a71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26a720: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x26a720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x26a724: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a724u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a728: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a72c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a730: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a734: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a738: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a73c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26a740: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x26a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x26a744: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26a748: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a748u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a74c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x26a750: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26a754: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a758: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a75c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a760: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26a760u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26a764: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26a768: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a768u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a76c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26a770: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26a774: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a778: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a778u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a77c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a780: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x26a780u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x26a784: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x26a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a788: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a788u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a78c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26a790: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26a794: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a798: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a79c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a7a0: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26a7a0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26a7a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26A7A4u;
    {
        const bool branch_taken_0x26a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7A4u;
        // 0x26a7a8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7a4) {
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A7ACu;
    // 0x26a7ac: 0x0  nop
    ctx->pc = 0x26a7acu;
    // NOP
label_26a7b0:
    // 0x26a7b0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x26a7b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a7b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a7b8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a7bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a7c0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a7c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a7c4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x26a7c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a7c8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x26a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x26a7cc: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26a7d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a7d4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a7d8: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26a7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26a7dc: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x26a7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x26a7e0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26a7e4: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x26a7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x26a7e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a7ec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a7ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a7f0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26a7f4: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26a7f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a7fc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a7fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a800: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a804: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26a808: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x26a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x26a80c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26a810: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a810u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a814: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26a814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26a818: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26a81c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a820: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a824: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a828: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26a828u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26a82c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_26a830:
    // 0x26a830: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a830u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a834: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x26a834u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x26a838: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x26a83c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a840: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a844: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x26a844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26a848: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x26a848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26a84c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x26a84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26a850: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26a854: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26a858: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26a858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26a85c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x26a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x26a860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a864: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x26a864u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x26a868: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26a86c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26a870: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x26a870u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x26a874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a878: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26a87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a884: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a888: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x26A888u;
    {
        const bool branch_taken_0x26a888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x26A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A888u;
        // 0x26a88c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a888) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A890u;
    // 0x26a890: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x26a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26a894: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26a894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26a898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a89c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26a89cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26a8a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a8a4: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a8a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26a8ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26a8b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a8b4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a8b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a8b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a8bc: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x26a8bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_26a8c0:
    // 0x26a8c0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26a8c4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x26a8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x26a8c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26a8cc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x26a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x26a8d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a8d4: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x26a8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x26a8d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26a8dc: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x26a8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x26a8e0: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x26a8e0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26a8e4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26a8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x26a8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26a8ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26a8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26a8f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26a8f4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x26a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x26a8f8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26a8f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26a8fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26a900: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a904: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26a904u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26a908: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26a90c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a910: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26a910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a914: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_26a918:
    // 0x26a918: 0x42000039  di
    ctx->pc = 0x26a918u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x26a91c: 0x40f  sync.p
    ctx->pc = 0x26a91cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26a920: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x26a924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26a928: 0x0  nop
    ctx->pc = 0x26a928u;
    // NOP
    // 0x26a92c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26A92Cu;
    {
        const bool branch_taken_0x26a92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a92c) {
            ctx->pc = 0x26A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a918;
        }
    }
    ctx->pc = 0x26A934u;
    // 0x26a934: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26a938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26a93c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x26a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x26a940: 0x42000038  ei
    ctx->pc = 0x26a940u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x26a944: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x26a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x26a948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a94c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26a950: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A950u;
    {
        const bool branch_taken_0x26a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A950u;
        // 0x26a954: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a950) {
            ctx->pc = 0x26A960u;
            goto label_26a960;
        }
    }
    ctx->pc = 0x26A958u;
    // 0x26a958: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x26A958u;
    SET_GPR_U32(ctx, 31, 0x26A960u);
    ctx->pc = 0x26A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A958u;
    // 0x26a95c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x26A958u, 0x26A960u)) {
        return;
    }
    ctx->pc = 0x26A960u;
label_26a960:
    // 0x26a960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a964: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26A964u;
    SET_GPR_U32(ctx, 31, 0x26A96Cu);
    ctx->pc = 0x26A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A964u;
    // 0x26a968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26A964u, 0x26A96Cu)) {
        return;
    }
    ctx->pc = 0x26A96Cu;
label_26a96c:
    // 0x26a96c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x26a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26a970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a974: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x26a978: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x26a978u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a97c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26a980: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x26a980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x26a984: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x26a984u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26a988: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x26a988u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a98c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26a990: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26a990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26a994: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26a994u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x26a998: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a99c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a9a0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26a9a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a9a4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a9a8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x26a9ac: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x26a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x26a9b0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26a9b4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x26a9b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26a9b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26a9bc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26a9c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a9c4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a9c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a9c8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x26a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x26a9cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a9d0: 0xdc423500  ld          $v0, 0x3500($v0)
    ctx->pc = 0x26a9d0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3500u));
    // 0x26a9d4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a9d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a9d8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x26a9dc: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26a9e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26a9e4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26a9e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26a9e8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26a9ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26a9f0: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26a9f0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26a9f4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26a9f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26a9f8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26a9fc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26aa00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26aa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26aa04: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26aa04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26aa08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aa0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26aa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26aa10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26aa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26aa14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26aa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26aa18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x26aa18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26aa1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26aa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA20u;
        // 0x26aa24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AA28u;
}
