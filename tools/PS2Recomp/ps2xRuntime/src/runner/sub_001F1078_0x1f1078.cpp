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

// Function: sub_001F1078
// Address: 0x1f1078 - 0x1f1158
void sub_001F1078_0x1f1078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1078_0x1f1078");
#endif

    switch (ctx->pc) {
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10ccu: goto label_1f10cc;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f1130u: goto label_1f1130;
        default: break;
    }

    ctx->pc = 0x1f1078u;

    // 0x1f1078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f1078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f107c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f1080: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f1084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f108c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1f108cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1f1090: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1f1090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f1094: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f1094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1098: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f1098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f109c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f109cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1f10a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f10a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f10a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f10a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F10A8u;
    {
        const bool branch_taken_0x1f10a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10A8u;
        // 0x1f10ac: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10a8) {
            ctx->pc = 0x1F10BCu;
            goto label_1f10bc;
        }
    }
    ctx->pc = 0x1F10B0u;
    // 0x1f10b0: 0xc0640c6  jal         func_190318
    ctx->pc = 0x1F10B0u;
    SET_GPR_U32(ctx, 31, 0x1F10B8u);
    ctx->pc = 0x1F10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10B0u;
    // 0x1f10b4: 0x8e248b2c  lw          $a0, -0x74D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1F10B0u, 0x1F10B8u)) {
        return;
    }
    ctx->pc = 0x1F10B8u;
label_1f10b8:
    // 0x1f10b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f10bc:
    // 0x1f10bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1f10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1f10c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f10c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10c4: 0xc0640b8  jal         func_1902E0
    ctx->pc = 0x1F10C4u;
    SET_GPR_U32(ctx, 31, 0x1F10CCu);
    ctx->pc = 0x1F10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10C4u;
    // 0x1f10c8: 0x8e248b2c  lw          $a0, -0x74D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1F10C4u, 0x1F10CCu)) {
        return;
    }
    ctx->pc = 0x1F10CCu;
label_1f10cc:
    // 0x1f10cc: 0xc063268  jal         func_18C9A0
    ctx->pc = 0x1F10CCu;
    SET_GPR_U32(ctx, 31, 0x1F10D4u);
    ctx->pc = 0x1F10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10CCu;
    // 0x1f10d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C9A0u, 0x1F10CCu, 0x1F10D4u)) {
        return;
    }
    ctx->pc = 0x1F10D4u;
label_1f10d4:
    // 0x1f10d4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1f10d8: 0x34212eed  ori         $at, $at, 0x2EED
    ctx->pc = 0x1f10d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12013);
    // 0x1f10dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f10dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f10e0: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1f10e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1f10e4: 0x0  nop
    ctx->pc = 0x1f10e4u;
    // NOP
    // 0x1f10e8: 0x0  nop
    ctx->pc = 0x1f10e8u;
    // NOP
    // 0x1f10ec: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x1f10ecu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[12]);
    // 0x1f10f0: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x1F10F0u;
    SET_GPR_U32(ctx, 31, 0x1F10F8u);
    ctx->pc = 0x1F10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10F0u;
    // 0x1f10f4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1F10F0u, 0x1F10F8u)) {
        return;
    }
    ctx->pc = 0x1F10F8u;
label_1f10f8:
    // 0x1f10f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f10fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f10fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f1100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f1100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1104: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x1f1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1108: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f1108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f110c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1f110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f1110: 0x0  nop
    ctx->pc = 0x1f1110u;
    // NOP
    // 0x1f1114: 0x0  nop
    ctx->pc = 0x1f1114u;
    // NOP
    // 0x1f1118: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1f1118u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1f111c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f1120: 0xc089456  jal         func_225158
    ctx->pc = 0x1F1120u;
    SET_GPR_U32(ctx, 31, 0x1F1128u);
    ctx->pc = 0x1F1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1120u;
    // 0x1f1124: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1F1120u, 0x1F1128u)) {
        return;
    }
    ctx->pc = 0x1F1128u;
label_1f1128:
    // 0x1f1128: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1F1128u;
    SET_GPR_U32(ctx, 31, 0x1F1130u);
    ctx->pc = 0x1F112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1128u;
    // 0x1f112c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1F1128u, 0x1F1130u)) {
        return;
    }
    ctx->pc = 0x1F1130u;
label_1f1130:
    // 0x1f1130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1134: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f1134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1138: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1f1138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1f113c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f113cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1148: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1f1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f114c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1150: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1150u;
        // 0x1f1154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1158u;
}
