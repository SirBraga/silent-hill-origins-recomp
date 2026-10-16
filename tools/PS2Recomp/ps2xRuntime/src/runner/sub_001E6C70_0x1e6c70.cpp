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

// Function: sub_001E6C70
// Address: 0x1e6c70 - 0x1e71f0
void sub_001E6C70_0x1e6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6C70_0x1e6c70");
#endif

    switch (ctx->pc) {
        case 0x1e6cb8u: goto label_1e6cb8;
        case 0x1e6cd8u: goto label_1e6cd8;
        case 0x1e6ce4u: goto label_1e6ce4;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d3cu: goto label_1e6d3c;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d64u: goto label_1e6d64;
        case 0x1e6d7cu: goto label_1e6d7c;
        case 0x1e6d90u: goto label_1e6d90;
        case 0x1e6da0u: goto label_1e6da0;
        case 0x1e6dacu: goto label_1e6dac;
        case 0x1e6db8u: goto label_1e6db8;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e40u: goto label_1e6e40;
        case 0x1e6e64u: goto label_1e6e64;
        case 0x1e6e70u: goto label_1e6e70;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f6cu: goto label_1e6f6c;
        case 0x1e6f88u: goto label_1e6f88;
        case 0x1e6fa0u: goto label_1e6fa0;
        case 0x1e6fb4u: goto label_1e6fb4;
        case 0x1e6fc4u: goto label_1e6fc4;
        case 0x1e6fd0u: goto label_1e6fd0;
        case 0x1e6fdcu: goto label_1e6fdc;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e703cu: goto label_1e703c;
        case 0x1e7048u: goto label_1e7048;
        case 0x1e7070u: goto label_1e7070;
        case 0x1e7088u: goto label_1e7088;
        case 0x1e70b0u: goto label_1e70b0;
        case 0x1e70b8u: goto label_1e70b8;
        case 0x1e70d4u: goto label_1e70d4;
        case 0x1e7108u: goto label_1e7108;
        case 0x1e7114u: goto label_1e7114;
        case 0x1e7128u: goto label_1e7128;
        case 0x1e7144u: goto label_1e7144;
        case 0x1e7160u: goto label_1e7160;
        case 0x1e7190u: goto label_1e7190;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71a4u: goto label_1e71a4;
        default: break;
    }

    ctx->pc = 0x1e6c70u;

    // 0x1e6c70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e6c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e6c7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e6c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e6c80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c84: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1e6c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e6c88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e6c88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c8c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e6c90: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e6c90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e6c94: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e6c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e6c98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e6c9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e6ca0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e6ca4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e6ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e6ca8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e6cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6cb0: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E6CB0u;
    SET_GPR_U32(ctx, 31, 0x1E6CB8u);
    ctx->pc = 0x1E6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CB0u;
    // 0x1e6cb4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E6CB0u, 0x1E6CB8u)) {
        return;
    }
    ctx->pc = 0x1E6CB8u;
label_1e6cb8:
    // 0x1e6cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6cbc: 0x0  nop
    ctx->pc = 0x1e6cbcu;
    // NOP
    // 0x1e6cc0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e6cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6cc4: 0x0  nop
    ctx->pc = 0x1e6cc4u;
    // NOP
    // 0x1e6cc8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6CC8u;
    {
        const bool branch_taken_0x1e6cc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6cc8) {
            ctx->pc = 0x1E6CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6CC8u;
            // 0x1e6ccc: 0x92510024  lbu         $s1, 0x24($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6CF0u;
            goto label_1e6cf0;
        }
    }
    ctx->pc = 0x1E6CD0u;
    // 0x1e6cd0: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E6CD0u;
    SET_GPR_U32(ctx, 31, 0x1E6CD8u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E6CD0u, 0x1E6CD8u)) {
        return;
    }
    ctx->pc = 0x1E6CD8u;
label_1e6cd8:
    // 0x1e6cd8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1e6cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e6cdc: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E6CDCu;
    SET_GPR_U32(ctx, 31, 0x1E6CE4u);
    ctx->pc = 0x1E6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CDCu;
    // 0x1e6ce0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E6CDCu, 0x1E6CE4u)) {
        return;
    }
    ctx->pc = 0x1E6CE4u;
label_1e6ce4:
    // 0x1e6ce4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1e6ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e6ce8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1e6ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1e6cec: 0x92510024  lbu         $s1, 0x24($s2)
    ctx->pc = 0x1e6cecu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1e6cf0:
    // 0x1e6cf0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e6cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6cf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6CF8u;
    {
        const bool branch_taken_0x1e6cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cf8) {
            ctx->pc = 0x1E6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6CF8u;
            // 0x1e6cfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6D00u;
            goto label_1e6d00;
        }
    }
    ctx->pc = 0x1E6D00u;
label_1e6d00:
    // 0x1e6d00: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1e6d00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1e6d04: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1e6d08: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1e6d08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e6d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d10: 0x8812  mflo        $s1
    ctx->pc = 0x1e6d10u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1e6d14: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E6D14u;
    SET_GPR_U32(ctx, 31, 0x1E6D1Cu);
    ctx->pc = 0x1E6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D14u;
    // 0x1e6d18: 0x3c1e006b  lui         $fp, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E6D14u, 0x1E6D1Cu)) {
        return;
    }
    ctx->pc = 0x1E6D1Cu;
label_1e6d1c:
    // 0x1e6d1c: 0x9e0234c8  lwu         $v0, 0x34C8($s0)
    ctx->pc = 0x1e6d1cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 13512)));
    // 0x1e6d20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6d24: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1e6d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1e6d28: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e6d2c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1e6d30: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1e6d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e6d34: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D34u;
    SET_GPR_U32(ctx, 31, 0x1E6D3Cu);
    ctx->pc = 0x1E6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D34u;
    // 0x1e6d38: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D34u, 0x1E6D3Cu)) {
        return;
    }
    ctx->pc = 0x1E6D3Cu;
label_1e6d3c:
    // 0x1e6d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d40: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D40u;
    SET_GPR_U32(ctx, 31, 0x1E6D48u);
    ctx->pc = 0x1E6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D40u;
    // 0x1e6d44: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D40u, 0x1E6D48u)) {
        return;
    }
    ctx->pc = 0x1E6D48u;
label_1e6d48:
    // 0x1e6d48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6d4c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e6d50: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6d54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e6d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e6d58: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e6d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e6d5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D64u);
    ctx->pc = 0x1E6D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D5Cu;
    // 0x1e6d60: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D5Cu, 0x1E6D64u)) {
        return;
    }
    ctx->pc = 0x1E6D64u;
label_1e6d64:
    // 0x1e6d64: 0xde0234c0  ld          $v0, 0x34C0($s0)
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1e6d68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e6d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6d6c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e6d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e6d70: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e6d74: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D74u;
    SET_GPR_U32(ctx, 31, 0x1E6D7Cu);
    ctx->pc = 0x1E6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D74u;
    // 0x1e6d78: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D74u, 0x1E6D7Cu)) {
        return;
    }
    ctx->pc = 0x1E6D7Cu;
label_1e6d7c:
    // 0x1e6d7c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1e6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e6d80: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1e6d80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1e6d84: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6d88: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D88u;
    SET_GPR_U32(ctx, 31, 0x1E6D90u);
    ctx->pc = 0x1E6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D88u;
    // 0x1e6d8c: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D88u, 0x1E6D90u)) {
        return;
    }
    ctx->pc = 0x1E6D90u;
label_1e6d90:
    // 0x1e6d90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6d94: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6d98: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6D98u;
    SET_GPR_U32(ctx, 31, 0x1E6DA0u);
    ctx->pc = 0x1E6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D98u;
    // 0x1e6d9c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6D98u, 0x1E6DA0u)) {
        return;
    }
    ctx->pc = 0x1E6DA0u;
label_1e6da0:
    // 0x1e6da0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6da4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6DA4u;
    SET_GPR_U32(ctx, 31, 0x1E6DACu);
    ctx->pc = 0x1E6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DA4u;
    // 0x1e6da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6DA4u, 0x1E6DACu)) {
        return;
    }
    ctx->pc = 0x1E6DACu;
label_1e6dac:
    // 0x1e6dac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e6db0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6DB0u;
    SET_GPR_U32(ctx, 31, 0x1E6DB8u);
    ctx->pc = 0x1E6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DB0u;
    // 0x1e6db4: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6DB0u, 0x1E6DB8u)) {
        return;
    }
    ctx->pc = 0x1E6DB8u;
label_1e6db8:
    // 0x1e6db8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6dbc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6DBCu;
    SET_GPR_U32(ctx, 31, 0x1E6DC4u);
    ctx->pc = 0x1E6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DBCu;
    // 0x1e6dc0: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6DBCu, 0x1E6DC4u)) {
        return;
    }
    ctx->pc = 0x1E6DC4u;
label_1e6dc4:
    // 0x1e6dc4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e6dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e6dc8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6dcc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e6dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e6dd0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6DD0u;
    SET_GPR_U32(ctx, 31, 0x1E6DD8u);
    ctx->pc = 0x1E6DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DD0u;
    // 0x1e6dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6DD0u, 0x1E6DD8u)) {
        return;
    }
    ctx->pc = 0x1E6DD8u;
label_1e6dd8:
    // 0x1e6dd8: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1e6dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1e6ddc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e6ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6de0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1e6de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1e6de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6de8: 0x51242  srl         $v0, $a1, 9
    ctx->pc = 0x1e6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x1e6dec: 0x51c42  srl         $v1, $a1, 17
    ctx->pc = 0x1e6decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 17));
    // 0x1e6df0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e6df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e6df4: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1e6df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1e6df8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1e6df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1e6dfc: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x1e6dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x1e6e00: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1e6e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1e6e04: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e6e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e6e08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e6e0c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e6e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e6e10: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6E10u;
    SET_GPR_U32(ctx, 31, 0x1E6E18u);
    ctx->pc = 0x1E6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E10u;
    // 0x1e6e14: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6E10u, 0x1E6E18u)) {
        return;
    }
    ctx->pc = 0x1E6E18u;
label_1e6e18:
    // 0x1e6e18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6e1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6e20: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e6e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e6e24: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e6e28: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e6e28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e6e2c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6e30: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E6E30u;
    {
        const bool branch_taken_0x1e6e30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E30u;
        // 0x1e6e34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e30) {
            ctx->pc = 0x1E6ED4u;
            goto label_1e6ed4;
        }
    }
    ctx->pc = 0x1E6E38u;
    // 0x1e6e38: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1e6e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6e3c: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x1e6e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1e6e40:
    // 0x1e6e40: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e6e44: 0x138240  sll         $s0, $s3, 9
    ctx->pc = 0x1e6e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x1e6e48: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1e6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e6e4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6e50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e6e54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e6e58: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6e5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6E64u);
    ctx->pc = 0x1E6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E5Cu;
    // 0x1e6e60: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6E5Cu, 0x1E6E64u)) {
        return;
    }
    ctx->pc = 0x1E6E64u;
label_1e6e64:
    // 0x1e6e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e68: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6E68u;
    SET_GPR_U32(ctx, 31, 0x1E6E70u);
    ctx->pc = 0x1E6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E68u;
    // 0x1e6e6c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6E68u, 0x1E6E70u)) {
        return;
    }
    ctx->pc = 0x1E6E70u;
label_1e6e70:
    // 0x1e6e70: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6e74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6e78: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e6e7c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6e80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e6e84: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e6e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e6e88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e6e8c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6e90: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6E90u;
    SET_GPR_U32(ctx, 31, 0x1E6E98u);
    ctx->pc = 0x1E6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E90u;
    // 0x1e6e94: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6E90u, 0x1E6E98u)) {
        return;
    }
    ctx->pc = 0x1E6E98u;
label_1e6e98:
    // 0x1e6e98: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6e9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6ea0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6ea4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6ea8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6EA8u;
    SET_GPR_U32(ctx, 31, 0x1E6EB0u);
    ctx->pc = 0x1E6EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EA8u;
    // 0x1e6eac: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6EA8u, 0x1E6EB0u)) {
        return;
    }
    ctx->pc = 0x1E6EB0u;
label_1e6eb0:
    // 0x1e6eb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6eb4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e6eb8: 0x283202a  slt         $a0, $s4, $v1
    ctx->pc = 0x1e6eb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e6ebc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e6ebcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e6ec0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e6ec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6ec4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e6ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6ec8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1E6EC8u;
    {
        const bool branch_taken_0x1e6ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EC8u;
        // 0x1e6ecc: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ec8) {
            ctx->pc = 0x1E6E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6e40;
        }
    }
    ctx->pc = 0x1E6ED0u;
    // 0x1e6ed0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1e6ed4:
    // 0x1e6ed4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e6ed8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6ED8u;
    SET_GPR_U32(ctx, 31, 0x1E6EE0u);
    ctx->pc = 0x1E6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6ED8u;
    // 0x1e6edc: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6ED8u, 0x1E6EE0u)) {
        return;
    }
    ctx->pc = 0x1E6EE0u;
label_1e6ee0:
    // 0x1e6ee0: 0xdfc53500  ld          $a1, 0x3500($fp)
    ctx->pc = 0x1e6ee0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 13568)));
    // 0x1e6ee4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6EE4u;
    SET_GPR_U32(ctx, 31, 0x1E6EECu);
    ctx->pc = 0x1E6EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EE4u;
    // 0x1e6ee8: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6EE4u, 0x1E6EECu)) {
        return;
    }
    ctx->pc = 0x1E6EECu;
label_1e6eec:
    // 0x1e6eec: 0xdec534c8  ld          $a1, 0x34C8($s6)
    ctx->pc = 0x1e6eecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 13512)));
    // 0x1e6ef0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6EF0u;
    SET_GPR_U32(ctx, 31, 0x1E6EF8u);
    ctx->pc = 0x1E6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EF0u;
    // 0x1e6ef4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6EF0u, 0x1E6EF8u)) {
        return;
    }
    ctx->pc = 0x1E6EF8u;
label_1e6ef8:
    // 0x1e6ef8: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E6EF8u;
    SET_GPR_U32(ctx, 31, 0x1E6F00u);
    ctx->pc = 0x1E6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EF8u;
    // 0x1e6efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E6EF8u, 0x1E6F00u)) {
        return;
    }
    ctx->pc = 0x1E6F00u;
label_1e6f00:
    // 0x1e6f00: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F00u;
    {
        const bool branch_taken_0x1e6f00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F00u;
        // 0x1e6f04: 0xdec534c8  ld          $a1, 0x34C8($s6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 13512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f00) {
            ctx->pc = 0x1E6F20u;
            goto label_1e6f20;
        }
    }
    ctx->pc = 0x1E6F08u;
    // 0x1e6f08: 0xc079990  jal         func_1E6640
    ctx->pc = 0x1E6F08u;
    SET_GPR_U32(ctx, 31, 0x1E6F10u);
    ctx->pc = 0x1E6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F08u;
    // 0x1e6f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E6640u, 0x1E6F08u, 0x1E6F10u)) {
        return;
    }
    ctx->pc = 0x1E6F10u;
label_1e6f10:
    // 0x1e6f10: 0xc05a116  jal         func_168458
    ctx->pc = 0x1E6F10u;
    SET_GPR_U32(ctx, 31, 0x1E6F18u);
    ctx->pc = 0x1E6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F10u;
    // 0x1e6f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168458u, 0x1E6F10u, 0x1E6F18u)) {
        return;
    }
    ctx->pc = 0x1E6F18u;
label_1e6f18:
    // 0x1e6f18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F18u;
    {
        const bool branch_taken_0x1e6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F18u;
        // 0x1e6f1c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f18) {
            ctx->pc = 0x1E6F30u;
            goto label_1e6f30;
        }
    }
    ctx->pc = 0x1E6F20u;
label_1e6f20:
    // 0x1e6f20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e6f24: 0xc05a116  jal         func_168458
    ctx->pc = 0x1E6F24u;
    SET_GPR_U32(ctx, 31, 0x1E6F2Cu);
    ctx->pc = 0x168458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168458u, 0x1E6F24u, 0x1E6F2Cu)) {
        return;
    }
    ctx->pc = 0x1E6F2Cu;
label_1e6f2c:
    // 0x1e6f2c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e6f30:
    // 0x1e6f30: 0x1840009c  blez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1E6F30u;
    {
        const bool branch_taken_0x1e6f30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F30u;
        // 0x1e6f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f30) {
            ctx->pc = 0x1E71A4u;
            goto label_1e71a4;
        }
    }
    ctx->pc = 0x1E6F38u;
    // 0x1e6f38: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e6f3c: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F44u);
    ctx->pc = 0x1E6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F3Cu;
    // 0x1e6f40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E6F3Cu, 0x1E6F44u)) {
        return;
    }
    ctx->pc = 0x1E6F44u;
label_1e6f44:
    // 0x1e6f44: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e6f48: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e6f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6f4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6f50: 0x3a203  sra         $s4, $v1, 8
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e6f54: 0x2a820081  slti        $v0, $s4, 0x81
    ctx->pc = 0x1e6f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1e6f58: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E6F58u;
    SET_GPR_U32(ctx, 31, 0x1E6F60u);
    ctx->pc = 0x1E6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F58u;
    // 0x1e6f5c: 0xa2a00a  movz        $s4, $a1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E6F58u, 0x1E6F60u)) {
        return;
    }
    ctx->pc = 0x1E6F60u;
label_1e6f60:
    // 0x1e6f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f64: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6F64u;
    SET_GPR_U32(ctx, 31, 0x1E6F6Cu);
    ctx->pc = 0x1E6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F64u;
    // 0x1e6f68: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6F64u, 0x1E6F6Cu)) {
        return;
    }
    ctx->pc = 0x1E6F6Cu;
label_1e6f6c:
    // 0x1e6f6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6f70: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e6f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e6f74: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6f78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e6f7c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e6f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e6f80: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6F80u;
    SET_GPR_U32(ctx, 31, 0x1E6F88u);
    ctx->pc = 0x1E6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F80u;
    // 0x1e6f84: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6F80u, 0x1E6F88u)) {
        return;
    }
    ctx->pc = 0x1E6F88u;
label_1e6f88:
    // 0x1e6f88: 0xdee234c0  ld          $v0, 0x34C0($s7)
    ctx->pc = 0x1e6f88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 13504)));
    // 0x1e6f8c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e6f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6f90: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e6f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e6f94: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e6f98: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6F98u;
    SET_GPR_U32(ctx, 31, 0x1E6FA0u);
    ctx->pc = 0x1E6F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F98u;
    // 0x1e6f9c: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6F98u, 0x1E6FA0u)) {
        return;
    }
    ctx->pc = 0x1E6FA0u;
label_1e6fa0:
    // 0x1e6fa0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1e6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1e6fa4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1e6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e6fa8: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1e6fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e6fac: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6FACu;
    SET_GPR_U32(ctx, 31, 0x1E6FB4u);
    ctx->pc = 0x1E6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FACu;
    // 0x1e6fb0: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6FACu, 0x1E6FB4u)) {
        return;
    }
    ctx->pc = 0x1E6FB4u;
label_1e6fb4:
    // 0x1e6fb4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6fb8: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6fbc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6FBCu;
    SET_GPR_U32(ctx, 31, 0x1E6FC4u);
    ctx->pc = 0x1E6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FBCu;
    // 0x1e6fc0: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6FBCu, 0x1E6FC4u)) {
        return;
    }
    ctx->pc = 0x1E6FC4u;
label_1e6fc4:
    // 0x1e6fc4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e6fc8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6FC8u;
    SET_GPR_U32(ctx, 31, 0x1E6FD0u);
    ctx->pc = 0x1E6FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FC8u;
    // 0x1e6fcc: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6FC8u, 0x1E6FD0u)) {
        return;
    }
    ctx->pc = 0x1E6FD0u;
label_1e6fd0:
    // 0x1e6fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fd4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6FD4u;
    SET_GPR_U32(ctx, 31, 0x1E6FDCu);
    ctx->pc = 0x1E6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FD4u;
    // 0x1e6fd8: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6FD4u, 0x1E6FDCu)) {
        return;
    }
    ctx->pc = 0x1E6FDCu;
label_1e6fdc:
    // 0x1e6fdc: 0x3405805a  ori         $a1, $zero, 0x805A
    ctx->pc = 0x1e6fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32858);
    // 0x1e6fe0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6fe4: 0x34a55a5a  ori         $a1, $a1, 0x5A5A
    ctx->pc = 0x1e6fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23130);
    // 0x1e6fe8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6FE8u;
    SET_GPR_U32(ctx, 31, 0x1E6FF0u);
    ctx->pc = 0x1E6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FE8u;
    // 0x1e6fec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6FE8u, 0x1E6FF0u)) {
        return;
    }
    ctx->pc = 0x1E6FF0u;
label_1e6ff0:
    // 0x1e6ff0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6ff4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6ff8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e6ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e6ffc: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e7000: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e7000u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e7004: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e7008: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E7008u;
    {
        const bool branch_taken_0x1e7008 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7008u;
        // 0x1e700c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7008) {
            ctx->pc = 0x1E70A8u;
            goto label_1e70a8;
        }
    }
    ctx->pc = 0x1E7010u;
    // 0x1e7010: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e7014: 0x0  nop
    ctx->pc = 0x1e7014u;
    // NOP
label_1e7018:
    // 0x1e7018: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e7018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e701c: 0x138240  sll         $s0, $s3, 9
    ctx->pc = 0x1e701cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x1e7020: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e7024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e702c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e702cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7030: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7034: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7034u;
    SET_GPR_U32(ctx, 31, 0x1E703Cu);
    ctx->pc = 0x1E7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7034u;
    // 0x1e7038: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7034u, 0x1E703Cu)) {
        return;
    }
    ctx->pc = 0x1E703Cu;
label_1e703c:
    // 0x1e703c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e703cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7040: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7040u;
    SET_GPR_U32(ctx, 31, 0x1E7048u);
    ctx->pc = 0x1E7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7040u;
    // 0x1e7044: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7040u, 0x1E7048u)) {
        return;
    }
    ctx->pc = 0x1E7048u;
label_1e7048:
    // 0x1e7048: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e704c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7050: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e7054: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e7054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e7058: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e705c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e7060: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e7064: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7068: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7068u;
    SET_GPR_U32(ctx, 31, 0x1E7070u);
    ctx->pc = 0x1E706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7068u;
    // 0x1e706c: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7068u, 0x1E7070u)) {
        return;
    }
    ctx->pc = 0x1E7070u;
label_1e7070:
    // 0x1e7070: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7074: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7078: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e7078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e707c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e707cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7080: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7080u;
    SET_GPR_U32(ctx, 31, 0x1E7088u);
    ctx->pc = 0x1E7084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7080u;
    // 0x1e7084: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7080u, 0x1E7088u)) {
        return;
    }
    ctx->pc = 0x1E7088u;
label_1e7088:
    // 0x1e7088: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e708c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e7090: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x1e7090u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7094: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e7094u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e7098: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e709c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e709cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e70a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1E70A0u;
    {
        const bool branch_taken_0x1e70a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70A0u;
        // 0x1e70a4: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70a0) {
            ctx->pc = 0x1E7018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7018;
        }
    }
    ctx->pc = 0x1E70A8u;
label_1e70a8:
    // 0x1e70a8: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E70A8u;
    SET_GPR_U32(ctx, 31, 0x1E70B0u);
    ctx->pc = 0x1E70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70A8u;
    // 0x1e70ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E70A8u, 0x1E70B0u)) {
        return;
    }
    ctx->pc = 0x1E70B0u;
label_1e70b0:
    // 0x1e70b0: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E70B0u;
    SET_GPR_U32(ctx, 31, 0x1E70B8u);
    ctx->pc = 0x1E70B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70B0u;
    // 0x1e70b4: 0x305107ff  andi        $s1, $v0, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E70B0u, 0x1E70B8u)) {
        return;
    }
    ctx->pc = 0x1E70B8u;
label_1e70b8:
    // 0x1e70b8: 0x305507ff  andi        $s5, $v0, 0x7FF
    ctx->pc = 0x1e70b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e70bc: 0x142843  sra         $a1, $s4, 1
    ctx->pc = 0x1e70bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 20), 1));
    // 0x1e70c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e70c4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e70c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e70c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e70c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e70cc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E70CCu;
    SET_GPR_U32(ctx, 31, 0x1E70D4u);
    ctx->pc = 0x1E70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70CCu;
    // 0x1e70d0: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E70CCu, 0x1E70D4u)) {
        return;
    }
    ctx->pc = 0x1E70D4u;
label_1e70d4:
    // 0x1e70d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e70d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e70dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e70dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e70e0: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e70e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e70e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e70e8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e70ec: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E70ECu;
    {
        const bool branch_taken_0x1e70ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70ECu;
        // 0x1e70f0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70ec) {
            ctx->pc = 0x1E7180u;
            goto label_1e7180;
        }
    }
    ctx->pc = 0x1E70F4u;
    // 0x1e70f4: 0x15b438  dsll        $s6, $s5, 16
    ctx->pc = 0x1e70f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << 16);
    // 0x1e70f8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1e70f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e70fc: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1e70fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e7100: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1e7104: 0x0  nop
    ctx->pc = 0x1e7104u;
    // NOP
label_1e7108:
    // 0x1e7108: 0x2762825  or          $a1, $s3, $s6
    ctx->pc = 0x1e7108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 22));
    // 0x1e710c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E710Cu;
    SET_GPR_U32(ctx, 31, 0x1E7114u);
    ctx->pc = 0x1E7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E710Cu;
    // 0x1e7110: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E710Cu, 0x1E7114u)) {
        return;
    }
    ctx->pc = 0x1E7114u;
label_1e7114:
    // 0x1e7114: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x1e7118: 0x102a40  sll         $a1, $s0, 9
    ctx->pc = 0x1e7118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x1e711c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7120: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7120u;
    SET_GPR_U32(ctx, 31, 0x1E7128u);
    ctx->pc = 0x1E7124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7120u;
    // 0x1e7124: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7120u, 0x1E7128u)) {
        return;
    }
    ctx->pc = 0x1E7128u;
label_1e7128:
    // 0x1e7128: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e712c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7130: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e7134: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x1e7134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1e7138: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e713c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E713Cu;
    SET_GPR_U32(ctx, 31, 0x1E7144u);
    ctx->pc = 0x1E7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E713Cu;
    // 0x1e7140: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E713Cu, 0x1E7144u)) {
        return;
    }
    ctx->pc = 0x1E7144u;
label_1e7144:
    // 0x1e7144: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1e7144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1e7148: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e714c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7150: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e7154: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7158: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7158u;
    SET_GPR_U32(ctx, 31, 0x1E7160u);
    ctx->pc = 0x1E715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7158u;
    // 0x1e715c: 0x2852825  or          $a1, $s4, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7158u, 0x1E7160u)) {
        return;
    }
    ctx->pc = 0x1E7160u;
label_1e7160:
    // 0x1e7160: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e7160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7164: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e7164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e7168: 0x2e3202a  slt         $a0, $s7, $v1
    ctx->pc = 0x1e7168u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e716c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e716cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e7170: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e7174: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e7174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e7178: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1E7178u;
    {
        const bool branch_taken_0x1e7178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7178u;
        // 0x1e717c: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7178) {
            ctx->pc = 0x1E7108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7108;
        }
    }
    ctx->pc = 0x1E7180u;
label_1e7180:
    // 0x1e7180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7184: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e7188: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7188u;
    SET_GPR_U32(ctx, 31, 0x1E7190u);
    ctx->pc = 0x1E718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7188u;
    // 0x1e718c: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7188u, 0x1E7190u)) {
        return;
    }
    ctx->pc = 0x1E7190u;
label_1e7190:
    // 0x1e7190: 0xdfc53500  ld          $a1, 0x3500($fp)
    ctx->pc = 0x1e7190u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 13568)));
    // 0x1e7194: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7194u;
    SET_GPR_U32(ctx, 31, 0x1E719Cu);
    ctx->pc = 0x1E7198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7194u;
    // 0x1e7198: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7194u, 0x1E719Cu)) {
        return;
    }
    ctx->pc = 0x1E719Cu;
label_1e719c:
    // 0x1e719c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E719Cu;
    SET_GPR_U32(ctx, 31, 0x1E71A4u);
    ctx->pc = 0x1E71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E719Cu;
    // 0x1e71a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E719Cu, 0x1E71A4u)) {
        return;
    }
    ctx->pc = 0x1E71A4u;
label_1e71a4:
    // 0x1e71a4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e71a8: 0x2442fccd  addiu       $v0, $v0, -0x333
    ctx->pc = 0x1e71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966477));
    // 0x1e71ac: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E71ACu;
    {
        const bool branch_taken_0x1e71ac = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1E71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71ACu;
        // 0x1e71b0: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71ac) {
            ctx->pc = 0x1E71B8u;
            goto label_1e71b8;
        }
    }
    ctx->pc = 0x1E71B4u;
    // 0x1e71b4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1e71b8:
    // 0x1e71b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e71b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e71bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e71bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e71c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e71c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e71c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e71c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e71c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e71c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e71cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e71ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e71d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e71d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e71d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e71d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e71d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e71dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e71dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e71e0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1e71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e71e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E71E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71E4u;
        // 0x1e71e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E71E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E71ECu;
    // 0x1e71ec: 0x0  nop
    ctx->pc = 0x1e71ecu;
    // NOP
    ctx->pc = 0x1e71f0u;
}
