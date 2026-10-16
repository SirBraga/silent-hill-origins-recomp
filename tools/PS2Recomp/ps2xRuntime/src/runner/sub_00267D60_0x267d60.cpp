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

// Function: sub_00267D60
// Address: 0x267d60 - 0x2689d8
void sub_00267D60_0x267d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267D60_0x267d60");
#endif

    switch (ctx->pc) {
        case 0x267e18u: goto label_267e18;
        case 0x267e28u: goto label_267e28;
        case 0x267e7cu: goto label_267e7c;
        case 0x267eb0u: goto label_267eb0;
        case 0x267ebcu: goto label_267ebc;
        case 0x267ed0u: goto label_267ed0;
        case 0x267ef4u: goto label_267ef4;
        case 0x267f18u: goto label_267f18;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f60u: goto label_267f60;
        case 0x268004u: goto label_268004;
        case 0x268014u: goto label_268014;
        case 0x268090u: goto label_268090;
        case 0x268890u: goto label_268890;
        case 0x2688d8u: goto label_2688d8;
        case 0x2688e4u: goto label_2688e4;
        default: break;
    }

    ctx->pc = 0x267d60u;

    // 0x267d60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x267d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x267d64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267d68: 0x8c423888  lw          $v0, 0x3888($v0)
    ctx->pc = 0x267d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3888u));
    // 0x267d6c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x267d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x267d70: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x267d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x267d74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x267d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d78: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x267d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x267d7c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x267d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x267d80: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x267d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x267d84: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x267d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x267d88: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x267d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x267d8c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x267d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x267d90: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x267d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x267d94: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x267d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x267d98: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x267d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x267d9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x267d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x267da0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267da4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x267da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267da8: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x267da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267dac: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x267dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267db0: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x267db0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x267db4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267db8: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x267db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x267dbc: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x267DBCu;
    {
        const bool branch_taken_0x267dbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x267DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DBCu;
        // 0x267dc0: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267dbc) {
            ctx->pc = 0x267DC8u;
            goto label_267dc8;
        }
    }
    ctx->pc = 0x267DC4u;
    // 0x267dc4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x267dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_267dc8:
    // 0x267dc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267dcc: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x267dccu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x267dd0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x267dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x267dd4: 0xdce50078  ld          $a1, 0x78($a3)
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x267dd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x267dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ddc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x267ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x267de0: 0x8cf00040  lw          $s0, 0x40($a3)
    ctx->pc = 0x267de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x267de4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x267de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x267de8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x267de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dec: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x267decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
    // 0x267df0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x267df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267df4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267df8: 0xdc4234c0  ld          $v0, 0x34C0($v0)
    ctx->pc = 0x267df8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34C0u));
    // 0x267dfc: 0x8cf70048  lw          $s7, 0x48($a3)
    ctx->pc = 0x267dfcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x267e00: 0x8cf20044  lw          $s2, 0x44($a3)
    ctx->pc = 0x267e00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x267e04: 0xdcfe0068  ld          $fp, 0x68($a3)
    ctx->pc = 0x267e04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x267e08: 0xdcf60070  ld          $s6, 0x70($a3)
    ctx->pc = 0x267e08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x267e0c: 0xffa00090  sd          $zero, 0x90($sp)
    ctx->pc = 0x267e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 0));
    // 0x267e10: 0xc099c1e  jal         func_267078
    ctx->pc = 0x267E10u;
    SET_GPR_U32(ctx, 31, 0x267E18u);
    ctx->pc = 0x267E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E10u;
    // 0x267e14: 0xffa200a0  sd          $v0, 0xA0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267078u, 0x267E10u, 0x267E18u)) {
        return;
    }
    ctx->pc = 0x267E18u;
label_267e18:
    // 0x267e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e1c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x267e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267e20: 0xc099c1e  jal         func_267078
    ctx->pc = 0x267E20u;
    SET_GPR_U32(ctx, 31, 0x267E28u);
    ctx->pc = 0x267E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E20u;
    // 0x267e24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267078u, 0x267E20u, 0x267E28u)) {
        return;
    }
    ctx->pc = 0x267E28u;
label_267e28:
    // 0x267e28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x267e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x267e2c: 0xc780870c  lwc1        $f0, -0x78F4($gp)
    ctx->pc = 0x267e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e30: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x267e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x730FC8u));
    // 0x267e34: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x267e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267e38: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x267e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267e3c: 0x0  nop
    ctx->pc = 0x267e3cu;
    // NOP
    // 0x267e40: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x267E40u;
    {
        const bool branch_taken_0x267e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267e40) {
            ctx->pc = 0x267E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267E40u;
            // 0x267e44: 0xffa00080  sd          $zero, 0x80($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E68u;
            goto label_267e68;
        }
    }
    ctx->pc = 0x267E48u;
    // 0x267e48: 0xe782870c  swc1        $f2, -0x78F4($gp)
    ctx->pc = 0x267e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), bits); }
    // 0x267e4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x267e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x267e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x267e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267e54: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x267e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e58: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x267e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x267e5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x267e5cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x267e60: 0xe7818708  swc1        $f1, -0x78F8($gp)
    ctx->pc = 0x267e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), bits); }
    // 0x267e64: 0xffa00080  sd          $zero, 0x80($sp)
    ctx->pc = 0x267e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
label_267e68:
    // 0x267e68: 0xffa00088  sd          $zero, 0x88($sp)
    ctx->pc = 0x267e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 0));
    // 0x267e6c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x267E6Cu;
    {
        const bool branch_taken_0x267e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E6Cu;
        // 0x267e70: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e6c) {
            ctx->pc = 0x267EA0u;
            goto label_267ea0;
        }
    }
    ctx->pc = 0x267E74u;
    // 0x267e74: 0xc091a88  jal         func_246A20
    ctx->pc = 0x267E74u;
    SET_GPR_U32(ctx, 31, 0x267E7Cu);
    ctx->pc = 0x267E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E74u;
    // 0x267e78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x267E74u, 0x267E7Cu)) {
        return;
    }
    ctx->pc = 0x267E7Cu;
label_267e7c:
    // 0x267e7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267e80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x267e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x267e84: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x267e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x267e88: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x267e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x267e8c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267E8Cu;
    {
        const bool branch_taken_0x267e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x267E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E8Cu;
        // 0x267e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e8c) {
            ctx->pc = 0x267EA0u;
            goto label_267ea0;
        }
    }
    ctx->pc = 0x267E94u;
    // 0x267e94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267e98: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x267e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x267e9c: 0x0  nop
    ctx->pc = 0x267e9cu;
    // NOP
label_267ea0:
    // 0x267ea0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x267EA0u;
    {
        const bool branch_taken_0x267ea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ea0) {
            ctx->pc = 0x267EBCu;
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267EA8u;
    // 0x267ea8: 0xc091a88  jal         func_246A20
    ctx->pc = 0x267EA8u;
    SET_GPR_U32(ctx, 31, 0x267EB0u);
    ctx->pc = 0x267EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EA8u;
    // 0x267eac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x267EA8u, 0x267EB0u)) {
        return;
    }
    ctx->pc = 0x267EB0u;
label_267eb0:
    // 0x267eb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x267eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267eb4: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x267EB4u;
    SET_GPR_U32(ctx, 31, 0x267EBCu);
    ctx->pc = 0x267EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EB4u;
    // 0x267eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x267EB4u, 0x267EBCu)) {
        return;
    }
    ctx->pc = 0x267EBCu;
label_267ebc:
    // 0x267ebc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267EBCu;
    {
        const bool branch_taken_0x267ebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ebc) {
            ctx->pc = 0x267ED0u;
            goto label_267ed0;
        }
    }
    ctx->pc = 0x267EC4u;
    // 0x267ec4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x267ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267ec8: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x267EC8u;
    SET_GPR_U32(ctx, 31, 0x267ED0u);
    ctx->pc = 0x267ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EC8u;
    // 0x267ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x267EC8u, 0x267ED0u)) {
        return;
    }
    ctx->pc = 0x267ED0u;
label_267ed0:
    // 0x267ed0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x267ED0u;
    {
        const bool branch_taken_0x267ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x267ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ED0u;
        // 0x267ed4: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ed0) {
            ctx->pc = 0x267EF4u;
            goto label_267ef4;
        }
    }
    ctx->pc = 0x267ED8u;
    // 0x267ed8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267edc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x267edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x267ee0: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x267ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x267ee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267EE4u;
    {
        const bool branch_taken_0x267ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267ee4) {
            ctx->pc = 0x267EF4u;
            goto label_267ef4;
        }
    }
    ctx->pc = 0x267EECu;
    // 0x267eec: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x267EECu;
    SET_GPR_U32(ctx, 31, 0x267EF4u);
    ctx->pc = 0x267EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EECu;
    // 0x267ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x267EECu, 0x267EF4u)) {
        return;
    }
    ctx->pc = 0x267EF4u;
label_267ef4:
    // 0x267ef4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x267EF4u;
    {
        const bool branch_taken_0x267ef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EF4u;
        // 0x267ef8: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ef4) {
            ctx->pc = 0x267FB8u;
            goto label_267fb8;
        }
    }
    ctx->pc = 0x267EFCu;
    // 0x267efc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x267efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267f00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x267f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x267f04: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x267f08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x267F08u;
    {
        const bool branch_taken_0x267f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F08u;
        // 0x267f0c: 0xdf8384a0  ld          $v1, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f08) {
            ctx->pc = 0x267F20u;
            goto label_267f20;
        }
    }
    ctx->pc = 0x267F10u;
    // 0x267f10: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x267F10u;
    SET_GPR_U32(ctx, 31, 0x267F18u);
    ctx->pc = 0x267F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F10u;
    // 0x267f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x267F10u, 0x267F18u)) {
        return;
    }
    ctx->pc = 0x267F18u;
label_267f18:
    // 0x267f18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x267f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x267f1c: 0xdc633510  ld          $v1, 0x3510($v1)
    ctx->pc = 0x267f1cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B3510u));
label_267f20:
    // 0x267f20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x267f24: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x267f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x267f28: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x267f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x267f2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x267f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x267f30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267f34: 0xfc233510  sd          $v1, 0x3510($at)
    ctx->pc = 0x267f34u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x267f38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267f3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267f40: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x267f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x267f44: 0xc091de2  jal         func_247788
    ctx->pc = 0x267F44u;
    SET_GPR_U32(ctx, 31, 0x267F4Cu);
    ctx->pc = 0x267F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F44u;
    // 0x267f48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x267F44u, 0x267F4Cu)) {
        return;
    }
    ctx->pc = 0x267F4Cu;
label_267f4c:
    // 0x267f4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x267f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267f50: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x267f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x267f54: 0x24a534f8  addiu       $a1, $a1, 0x34F8
    ctx->pc = 0x267f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13560));
    // 0x267f58: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x267F58u;
    SET_GPR_U32(ctx, 31, 0x267F60u);
    ctx->pc = 0x267F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F58u;
    // 0x267f5c: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x267F58u, 0x267F60u)) {
        return;
    }
    ctx->pc = 0x267F60u;
label_267f60:
    // 0x267f60: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267f64: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x267f64u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x267f68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267f6c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x267f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x267f70: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x267f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x267f74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x267f78: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x267F78u;
    {
        const bool branch_taken_0x267f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267f78) {
            ctx->pc = 0x267F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267F78u;
            // 0x267f7c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267F90u;
            goto label_267f90;
        }
    }
    ctx->pc = 0x267F80u;
    // 0x267f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f84: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267f88: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x267f88u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x267f8c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x267f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_267f90:
    // 0x267f90: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x267f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x267f94: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x267f98: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x267F98u;
    {
        const bool branch_taken_0x267f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x267F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F98u;
        // 0x267f9c: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f98) {
            ctx->pc = 0x267FE0u;
            goto label_267fe0;
        }
    }
    ctx->pc = 0x267FA0u;
    // 0x267fa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267fa4: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x267fa4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x267fa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x267fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267fac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267fb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267FB0u;
    {
        const bool branch_taken_0x267fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FB0u;
        // 0x267fb4: 0xff828480  sd          $v0, -0x7B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fb0) {
            ctx->pc = 0x267FD8u;
            goto label_267fd8;
        }
    }
    ctx->pc = 0x267FB8u;
label_267fb8:
    // 0x267fb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267fbc: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x267fbcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x267fc0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x267fc4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267fc8: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x267fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x267fcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x267fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x267fd0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x267fd4: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x267fd4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
label_267fd8:
    // 0x267fd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x267fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x267fdc: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x267fdcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
label_267fe0:
    // 0x267fe0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x267fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267fe4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x267fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x267fe8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x267FE8u;
    {
        const bool branch_taken_0x267fe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE8u;
        // 0x267fec: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fe8) {
            ctx->pc = 0x268040u;
            goto label_268040;
        }
    }
    ctx->pc = 0x267FF0u;
    // 0x267ff0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x267ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267ff4: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x267ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x267ff8: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x267ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x267ffc: 0xc091de2  jal         func_247788
    ctx->pc = 0x267FFCu;
    SET_GPR_U32(ctx, 31, 0x268004u);
    ctx->pc = 0x268000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FFCu;
    // 0x268000: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x267FFCu, 0x268004u)) {
        return;
    }
    ctx->pc = 0x268004u;
label_268004:
    // 0x268004: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x268004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268008: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x268008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26800c: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x26800Cu;
    SET_GPR_U32(ctx, 31, 0x268014u);
    ctx->pc = 0x268010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26800Cu;
    // 0x268010: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x26800Cu, 0x268014u)) {
        return;
    }
    ctx->pc = 0x268014u;
label_268014:
    // 0x268014: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x268014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x268018: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x268018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26801c: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x26801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x268020: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x268020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268024: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x268024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x268028: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x268028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x26802c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x26802cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x268030: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268030u;
    {
        const bool branch_taken_0x268030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x268034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268030u;
        // 0x268034: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268030) {
            ctx->pc = 0x268040u;
            goto label_268040;
        }
    }
    ctx->pc = 0x268038u;
    // 0x268038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x268038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26803c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x26803cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_268040:
    // 0x268040: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x268040u;
    {
        const bool branch_taken_0x268040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268040u;
        // 0x268044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268040) {
            ctx->pc = 0x268088u;
            goto label_268088;
        }
    }
    ctx->pc = 0x268048u;
    // 0x268048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x268048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26804c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x268050: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x268050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x268054: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x268054u;
    {
        const bool branch_taken_0x268054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268054) {
            ctx->pc = 0x268088u;
            goto label_268088;
        }
    }
    ctx->pc = 0x26805Cu;
    // 0x26805c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x26805Cu;
    {
        const bool branch_taken_0x26805c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26805c) {
            ctx->pc = 0x268088u;
            goto label_268088;
        }
    }
    ctx->pc = 0x268064u;
    // 0x268064: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x268064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268068: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x268068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26806c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x26806cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x268070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268070u;
    {
        const bool branch_taken_0x268070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268070) {
            ctx->pc = 0x268088u;
            goto label_268088;
        }
    }
    ctx->pc = 0x268078u;
    // 0x268078: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x268078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26807c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x268080: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268084: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x268084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_268088:
    // 0x268088: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x268088u;
    SET_GPR_U32(ctx, 31, 0x268090u);
    ctx->pc = 0x26808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268088u;
    // 0x26808c: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x268088u, 0x268090u)) {
        return;
    }
    ctx->pc = 0x268090u;
label_268090:
    // 0x268090: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x268090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x268094: 0x3463002b  ori         $v1, $v1, 0x2B
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43);
    // 0x268098: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x268098u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26809c: 0x71631b89  pcpyld      $v1, $t3, $v1
    ctx->pc = 0x26809cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x2680a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2680a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2680a4: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2680a8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2680a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2680ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2680acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2680b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2680b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2680b4: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x2680b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2680b8: 0x3c026c14  lui         $v0, 0x6C14
    ctx->pc = 0x2680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27668 << 16));
    // 0x2680bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2680bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2680c0: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x2680c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x2680c4: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x2680c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2680c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680cc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x2680ccu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x2680d0: 0x71081cc8  ppacw       $v1, $t0, $t0
    ctx->pc = 0x2680d0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x2680d4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2680d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2680d8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2680d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2680dc: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2680dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680e0: 0x9f82870c  lwu         $v0, -0x78F4($gp)
    ctx->pc = 0x2680e0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
    // 0x2680e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2680e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2680e8: 0x9f848708  lwu         $a0, -0x78F8($gp)
    ctx->pc = 0x2680e8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936328)));
    // 0x2680ec: 0x3603e  dsrl32      $t4, $v1, 0
    ctx->pc = 0x2680ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2680f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2680f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2680f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2680f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2680f8: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x2680f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x2680fc: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2680fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x268100: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x268100u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268104: 0xc637c  dsll32      $t4, $t4, 13
    ctx->pc = 0x268104u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 13));
    // 0x268108: 0x358c8004  ori         $t4, $t4, 0x8004
    ctx->pc = 0x268108u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32772);
    // 0x26810c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x26810cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x268110: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x268110u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
    // 0x268114: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x268114u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x268118: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x268118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x26811c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268120: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x268120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x268124: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x268124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x268128: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x268128u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x26812c: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x26812cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x268130: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x268134: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268138: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x268138u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26813c: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x26813cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x268140: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x268140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x268144: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x268144u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x268148: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x268148u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x26814c: 0x2409003d  addiu       $t1, $zero, 0x3D
    ctx->pc = 0x26814cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x268150: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268154: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x268154u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x268158: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x268158u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x26815c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x26815cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x268160: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x268160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268164: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x268164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268168: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268168u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26816c: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x26816cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x268170: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x268170u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268174: 0xc637c  dsll32      $t4, $t4, 13
    ctx->pc = 0x268174u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 13));
    // 0x268178: 0x358c8002  ori         $t4, $t4, 0x8002
    ctx->pc = 0x268178u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32770);
    // 0x26817c: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x26817cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
    // 0x268180: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x268180u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x268184: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x268184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268188: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x268188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26818c: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x26818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x268190: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x268190u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x268194: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x268194u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x268198: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26819c: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26819cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x2681a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2681a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2681a4: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x2681a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x2681a8: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x2681a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x2681ac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2681acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2681b0: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x2681b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x2681b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2681b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2681b8: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x2681b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
    // 0x2681bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2681bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2681c0: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x2681c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
    // 0x2681c4: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x2681c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
    // 0x2681c8: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x2681c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
    // 0x2681cc: 0x71361389  pcpyld      $v0, $t1, $s6
    ctx->pc = 0x2681ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 22)));
    // 0x2681d0: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x2681d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x2681d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2681d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2681d8: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x2681d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2681dc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2681dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2681e0: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x2681e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
    // 0x2681e4: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x2681e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x2681e8: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2681e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2681ec: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x2681ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x2681f0: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x2681f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x2681f4: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x2681f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2681f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2681f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2681fc: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x2681fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x268200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268204: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x268204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x268208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26820c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x26820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x268210: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x268210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x268214: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x268214u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268218: 0x70cc1389  pcpyld      $v0, $a2, $t4
    ctx->pc = 0x268218u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 12)));
    // 0x26821c: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x26821cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
    // 0x268220: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x268220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268224: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x268224u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
    // 0x268228: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x268228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26822c: 0x7ca20120  sq          $v0, 0x120($a1)
    ctx->pc = 0x26822cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 2));
    // 0x268230: 0xdfac0060  ld          $t4, 0x60($sp)
    ctx->pc = 0x268230u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268234: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x268234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268238: 0x9fa30068  lwu         $v1, 0x68($sp)
    ctx->pc = 0x268238u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26823c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268244: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x268244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x268248: 0x7ca20130  sq          $v0, 0x130($a1)
    ctx->pc = 0x268248u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 304), GPR_VEC(ctx, 2));
    // 0x26824c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x26824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x268250: 0xdc4cc5f0  ld          $t4, -0x3A10($v0)
    ctx->pc = 0x268250u;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x5FC5F0u));
    // 0x268254: 0x2443c5f0  addiu       $v1, $v0, -0x3A10
    ctx->pc = 0x268254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x268258: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x268258u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5FC5F8u));
    // 0x26825c: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x26825cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x268260: 0x7ca20140  sq          $v0, 0x140($a1)
    ctx->pc = 0x268260u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 320), GPR_VEC(ctx, 2));
    // 0x268264: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x268264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x268268: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x268268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x26826c: 0x71081cc8  ppacw       $v1, $t0, $t0
    ctx->pc = 0x26826cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x268270: 0x704814c8  ppacw       $v0, $v0, $t0
    ctx->pc = 0x268270u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x268274: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x268274u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x268278: 0x7ca20150  sq          $v0, 0x150($a1)
    ctx->pc = 0x268278u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 336), GPR_VEC(ctx, 2));
    // 0x26827c: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x26827cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268280: 0xc637c  dsll32      $t4, $t4, 13
    ctx->pc = 0x268280u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 13));
    // 0x268284: 0x358c8005  ori         $t4, $t4, 0x8005
    ctx->pc = 0x268284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32773);
    // 0x268288: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x268288u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
    // 0x26828c: 0x7ca20160  sq          $v0, 0x160($a1)
    ctx->pc = 0x26828cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 352), GPR_VEC(ctx, 2));
    // 0x268290: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x268290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x268294: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x268294u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x268298: 0x7ca20170  sq          $v0, 0x170($a1)
    ctx->pc = 0x268298u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 368), GPR_VEC(ctx, 2));
    // 0x26829c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2682a0: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x2682a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
    // 0x2682a4: 0x7ca20180  sq          $v0, 0x180($a1)
    ctx->pc = 0x2682a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 384), GPR_VEC(ctx, 2));
    // 0x2682a8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2682a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2682ac: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x2682acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2682b0: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x2682b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2682b4: 0x7ca20190  sq          $v0, 0x190($a1)
    ctx->pc = 0x2682b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 400), GPR_VEC(ctx, 2));
    // 0x2682b8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2682b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2682bc: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x2682bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2682c0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2682c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2682c4: 0x7ca201a0  sq          $v0, 0x1A0($a1)
    ctx->pc = 0x2682c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 416), GPR_VEC(ctx, 2));
    // 0x2682c8: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2682c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2682cc: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x2682ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2682d0: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x2682d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2682d4: 0x7ca201b0  sq          $v0, 0x1B0($a1)
    ctx->pc = 0x2682d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 432), GPR_VEC(ctx, 2));
    // 0x2682d8: 0x24a201c0  addiu       $v0, $a1, 0x1C0
    ctx->pc = 0x2682d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x2682dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2682dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2682e0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2682e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2682e4: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x2682e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x2682e8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x2682e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x2682ec: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x2682ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x2682f0: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2682f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2682f4: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x2682f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x2682f8: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x2682f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x2682fc: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2682fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x268300: 0x708b2389  pcpyld      $a0, $a0, $t3
    ctx->pc = 0x268300u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x268304: 0x7ca401c0  sq          $a0, 0x1C0($a1)
    ctx->pc = 0x268304u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 448), GPR_VEC(ctx, 4));
    // 0x268308: 0x24a501d0  addiu       $a1, $a1, 0x1D0
    ctx->pc = 0x268308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
    // 0x26830c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268310: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x268310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268314: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x268314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x268318: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26831c: 0x8c634134  lw          $v1, 0x4134($v1)
    ctx->pc = 0x26831cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4134u));
    // 0x268320: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x268320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x268324: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x268324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268328: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x268328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26832c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26832Cu;
    {
        const bool branch_taken_0x26832c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26832Cu;
        // 0x268330: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26832c) {
            ctx->pc = 0x268348u;
            goto label_268348;
        }
    }
    ctx->pc = 0x268334u;
    // 0x268334: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268338: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268338u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26833c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x268340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268340u;
    {
        const bool branch_taken_0x268340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268340u;
        // 0x268344: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268340) {
            ctx->pc = 0x268358u;
            goto label_268358;
        }
    }
    ctx->pc = 0x268348u;
label_268348:
    // 0x268348: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26834c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26834cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268350: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x268350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x268354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_268358:
    // 0x268358: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26835c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26835cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x268360: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x268360u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x268364: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x268364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x268368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26836c: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x26836cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x268370: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x268370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x268374: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x268374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x268378: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x268378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26837c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26837cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x268380: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x268380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x268384: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x268384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x268388: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x268388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x26838c: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x26838cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x268390: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x268390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x268394: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x268394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x268398: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x268398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26839c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x26839cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2683a0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2683a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2683a4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2683a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2683a8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2683a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2683ac: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x2683acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2683b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2683b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2683b4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2683b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2683b8: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x2683b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2683bc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2683bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2683c0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2683c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2683c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2683c8: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x2683c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2683cc: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x2683ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x2683d0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2683d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2683d4: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x2683d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x2683d8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x2683d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2683dc: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x2683dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x2683e0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x2683e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2683e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2683e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2683e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2683e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683ec: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x2683ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2683f0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2683f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2683f4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2683f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2683f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2683fc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2683fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268400: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268404: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268404u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268408: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x268408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x26840c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x26840cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x268410: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x268410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x268414: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x268414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x268418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268418u;
    {
        const bool branch_taken_0x268418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268418u;
        // 0x26841c: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268418) {
            ctx->pc = 0x268430u;
            goto label_268430;
        }
    }
    ctx->pc = 0x268420u;
    // 0x268420: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x268420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x268424: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x268424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x268428: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x268428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26842c: 0x0  nop
    ctx->pc = 0x26842cu;
    // NOP
label_268430:
    // 0x268430: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x268430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x268434: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x268434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x268438: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x268438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26843c: 0x0  nop
    ctx->pc = 0x26843cu;
    // NOP
    // 0x268440: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x268440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x268444: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x268444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x268448: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x268448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
    // 0x268450: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x268450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x268454: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x268454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x268458: 0x0  nop
    ctx->pc = 0x268458u;
    // NOP
    // 0x26845c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26845cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x268460: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x268460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x268464: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x268464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x268468: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x268468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26846c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x26846cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268470: 0x0  nop
    ctx->pc = 0x268470u;
    // NOP
    // 0x268474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x268474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x268478: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x268478u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26847c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x26847cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x268480: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x268480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x268484: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x268484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268488: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x268488u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26848c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26848cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x268490: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x268490u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x268494: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x268494u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x268498: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x268498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26849c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26849cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2684a0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2684a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2684a4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2684a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2684a8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2684a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2684ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2684acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2684b0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2684b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2684b4: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x2684b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x2684b8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2684b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2684bc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2684bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2684c0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x2684c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2684c4: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x2684c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x2684c8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x2684c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2684cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2684ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2684d0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x2684d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2684d4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x2684d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x2684d8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x2684d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2684dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2684dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2684e0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2684e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2684e4: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2684e8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2684ec: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x2684ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x2684f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2684f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2684f4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2684f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2684f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2684f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2684fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2684fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268500: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x268500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268504: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x268504u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x268508: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x268508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26850c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26850cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268510: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x268510u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x268514: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x268514u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x268518: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x268518u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26851c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x26851cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x268520: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x268520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x268524: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x268524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268528: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x268528u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26852c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x26852cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x268530: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x268530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x268534: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268538: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x268538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26853c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x26853cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x268540: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x268540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x268544: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x268544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x268548: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x268548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x26854c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26854cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x268550: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x268550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x268554: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x268554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x268558: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x268558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26855c: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x26855cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x268560: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x268560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x268564: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x268564u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x268568: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26856c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26856cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268570: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268574: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x268578: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x268578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26857c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26857Cu;
    {
        const bool branch_taken_0x26857c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26857Cu;
        // 0x268580: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26857c) {
            ctx->pc = 0x268590u;
            goto label_268590;
        }
    }
    ctx->pc = 0x268584u;
    // 0x268584: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x268584u;
    {
        const bool branch_taken_0x268584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268584) {
            ctx->pc = 0x268588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268584u;
            // 0x268588: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2685B0u;
            goto label_2685b0;
        }
    }
    ctx->pc = 0x26858Cu;
    // 0x26858c: 0x0  nop
    ctx->pc = 0x26858cu;
    // NOP
label_268590:
    // 0x268590: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268594: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x268594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x268598: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268598u;
    {
        const bool branch_taken_0x268598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268598u;
        // 0x26859c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268598) {
            ctx->pc = 0x2685E0u;
            goto label_2685e0;
        }
    }
    ctx->pc = 0x2685A0u;
    // 0x2685a0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2685A0u;
    {
        const bool branch_taken_0x2685a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2685a0) {
            ctx->pc = 0x2685A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685A0u;
            // 0x2685a4: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2685E8u;
            goto label_2685e8;
        }
    }
    ctx->pc = 0x2685A8u;
    // 0x2685a8: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x2685a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x2685ac: 0x0  nop
    ctx->pc = 0x2685acu;
    // NOP
label_2685b0:
    // 0x2685b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2685b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2685b4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2685b8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2685b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2685bc: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x2685c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2685c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x2685c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2685c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2685c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2685c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2685cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2685ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2685d0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2685d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2685d4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2685d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2685D8u;
    {
        const bool branch_taken_0x2685d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685D8u;
        // 0x2685dc: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685d8) {
            ctx->pc = 0x268610u;
            goto label_268610;
        }
    }
    ctx->pc = 0x2685E0u;
label_2685e0:
    // 0x2685e0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2685e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2685e4: 0x0  nop
    ctx->pc = 0x2685e4u;
    // NOP
label_2685e8:
    // 0x2685e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2685ec: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2685ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2685f0: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x2685f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2685f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2685f8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2685f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2685fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268600: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268604: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x268604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268608: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x268608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26860c: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x26860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_268610:
    // 0x268610: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x268610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268614: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x268614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268618: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x268618u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26861c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26861cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268620: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x268620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x268628: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x268628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x26862c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268630: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268630u;
    {
        const bool branch_taken_0x268630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268630u;
        // 0x268634: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268630) {
            ctx->pc = 0x268644u;
            goto label_268644;
        }
    }
    ctx->pc = 0x268638u;
    // 0x268638: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x268638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26863c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268640: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x268640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_268644:
    // 0x268644: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268648: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x268648u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x26864c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x26864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x268650: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x268650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x268654: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x268654u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x268658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x268658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26865c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26865cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268660: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x268660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x268664: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x268664u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x268668: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x268668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26866c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26866cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x268670: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x268670u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x268674: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x268674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268678: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26867c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26867cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268680: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x268680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x268684: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x268684u;
    {
        const bool branch_taken_0x268684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268684u;
        // 0x268688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268684) {
            ctx->pc = 0x268728u;
            goto label_268728;
        }
    }
    ctx->pc = 0x26868Cu;
    // 0x26868c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x268690: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x268690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x268694: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x268694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x268698: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x268698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x26869c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26869cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2686a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2686a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2686a4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2686a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2686a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2686ac: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2686acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2686b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2686b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2686b4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2686b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2686b8: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x2686b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x2686bc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2686bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2686c0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2686c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2686c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2686c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2686c8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2686c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2686cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2686ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2686d0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2686d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2686d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2686d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2686d8: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x2686d8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x2686dc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2686dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2686e0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2686e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2686e4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2686e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2686e8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2686e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2686ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2686ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2686f0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2686f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2686f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2686f8: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x2686f8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x2686fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2686fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x268700: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268700u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268704: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x268704u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x268708: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x268708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26870c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268710: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268714: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268718: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x268718u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26871c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26871Cu;
        // 0x268720: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26871c) {
            ctx->pc = 0x2687A8u;
            goto label_2687a8;
        }
    }
    ctx->pc = 0x268724u;
    // 0x268724: 0x0  nop
    ctx->pc = 0x268724u;
    // NOP
label_268728:
    // 0x268728: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x268728u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26872c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26872cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x268730: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x268730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268734: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268738: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26873c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x26873cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268740: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x268740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x268744: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x268748: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26874c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26874cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268750: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x268750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x268754: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x268754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x268758: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x268758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26875c: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x26875cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x268760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268764: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268764u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268768: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x268768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26876c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x268770: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268774: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268778: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x268778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26877c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x268780: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x268780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x268784: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x268784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x268788: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268788u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26878c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26878cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x268790: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x268794: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268798: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26879c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2687a0: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x2687a0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x2687a4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2687a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2687a8:
    // 0x2687a8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2687a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2687ac: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2687acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2687b0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2687b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2687b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2687b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2687b8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2687b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2687bc: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x2687bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2687c0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x2687c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2687c4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2687c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2687c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2687c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2687cc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2687ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2687d0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2687d4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2687d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2687d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2687d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2687dc: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x2687dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x2687e0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2687e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2687e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2687e8: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x2687e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x2687ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2687ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2687f0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2687f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2687f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2687f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2687f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2687fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2687fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268800: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x268800u;
    {
        const bool branch_taken_0x268800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x268804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268800u;
        // 0x268804: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268800) {
            ctx->pc = 0x268838u;
            goto label_268838;
        }
    }
    ctx->pc = 0x268808u;
    // 0x268808: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x268808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26880c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x268810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268814: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x268814u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x268818: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26881c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x268820: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x268820u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x268824: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x268824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x268828: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26882c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26882cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268830: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268834: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x268834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_268838:
    // 0x268838: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x268838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x26883c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x26883cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x268840: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x268840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x268844: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x268844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x268848: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x268848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26884c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x26884cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x268850: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x268854: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x268854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x268858: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x268858u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26885c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x268860: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x268860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268864: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x268864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x268868: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x268868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26886c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x26886cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x268870: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x268870u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x268874: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x268878: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x268878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26887c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26887cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x268880: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x268884: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268888: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x268888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26888c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26888cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_268890:
    // 0x268890: 0x42000039  di
    ctx->pc = 0x268890u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x268894: 0x40f  sync.p
    ctx->pc = 0x268894u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x268898: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x268898u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x26889c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2688a0: 0x0  nop
    ctx->pc = 0x2688a0u;
    // NOP
    // 0x2688a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2688A4u;
    {
        const bool branch_taken_0x2688a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2688a4) {
            ctx->pc = 0x268890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268890;
        }
    }
    ctx->pc = 0x2688ACu;
    // 0x2688ac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2688acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2688b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2688b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2688b4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2688b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2688b8: 0x42000038  ei
    ctx->pc = 0x2688b8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2688bc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2688bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2688c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2688c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2688c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2688c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2688c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2688C8u;
    {
        const bool branch_taken_0x2688c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2688CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688C8u;
        // 0x2688cc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688c8) {
            ctx->pc = 0x2688D8u;
            goto label_2688d8;
        }
    }
    ctx->pc = 0x2688D0u;
    // 0x2688d0: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x2688D0u;
    SET_GPR_U32(ctx, 31, 0x2688D8u);
    ctx->pc = 0x2688D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688D0u;
    // 0x2688d4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x2688D0u, 0x2688D8u)) {
        return;
    }
    ctx->pc = 0x2688D8u;
label_2688d8:
    // 0x2688d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2688d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688dc: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2688DCu;
    SET_GPR_U32(ctx, 31, 0x2688E4u);
    ctx->pc = 0x2688E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688DCu;
    // 0x2688e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2688DCu, 0x2688E4u)) {
        return;
    }
    ctx->pc = 0x2688E4u;
label_2688e4:
    // 0x2688e4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2688e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2688e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2688e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688ec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2688ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2688f0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x2688f0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2688f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2688f8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2688f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2688fc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x2688fcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x268900: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x268900u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268904: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x268904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x268908: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x268908u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26890c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26890cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x268910: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x268910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268914: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268918: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x268918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26891c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268920: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x268920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x268924: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x268924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x268928: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x268928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26892c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x26892cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x268930: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x268930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x268934: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x268938: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26893c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26893cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268940: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x268940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x268944: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268948: 0xdc423500  ld          $v0, 0x3500($v0)
    ctx->pc = 0x268948u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3500u));
    // 0x26894c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26894cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268950: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x268950u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x268954: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x268954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x268958: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26895c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26895cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268960: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x268964: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268968: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x268968u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26896c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26896cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268970: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x268970u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x268974: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x268974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x268978: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26897c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26897cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268980: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x268980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x268984: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268988: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x268988u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x26898c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26898cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268990: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x268990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x268994: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x268998: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26899c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26899cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2689a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2689a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2689a4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2689a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2689a8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2689a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2689ac: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2689acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2689b0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2689b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2689b4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2689b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2689b8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2689b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2689bc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2689bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2689c0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2689c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2689c4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2689c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2689c8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2689c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2689cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2689CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2689D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689CCu;
        // 0x2689d0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2689CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2689D4u;
    // 0x2689d4: 0x0  nop
    ctx->pc = 0x2689d4u;
    // NOP
    ctx->pc = 0x2689d8u;
}
