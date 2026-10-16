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

// Function: sub_00126170
// Address: 0x126170 - 0x126248
void sub_00126170_0x126170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126170_0x126170");
#endif

    switch (ctx->pc) {
        case 0x1261a0u: goto label_1261a0;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261e0u: goto label_1261e0;
        case 0x1261f0u: goto label_1261f0;
        case 0x126200u: goto label_126200;
        case 0x126210u: goto label_126210;
        case 0x126220u: goto label_126220;
        case 0x126230u: goto label_126230;
        default: break;
    }

    ctx->pc = 0x126170u;

    // 0x126170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126178: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12617c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12617cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126180: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126184: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x126188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12618c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x12618cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x126190: 0x26050d2c  addiu       $a1, $s0, 0xD2C
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
    // 0x126194: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x126194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126198: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126198u;
    SET_GPR_U32(ctx, 31, 0x1261A0u);
    ctx->pc = 0x12619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126198u;
    // 0x12619c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126198u, 0x1261A0u)) {
        return;
    }
    ctx->pc = 0x1261A0u;
label_1261a0:
    // 0x1261a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261a4: 0x26050d34  addiu       $a1, $s0, 0xD34
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x1261a8: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x1261A8u;
    SET_GPR_U32(ctx, 31, 0x1261B0u);
    ctx->pc = 0x1261ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261A8u;
    // 0x1261ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1261A8u, 0x1261B0u)) {
        return;
    }
    ctx->pc = 0x1261B0u;
label_1261b0:
    // 0x1261b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261b4: 0x26050d3c  addiu       $a1, $s0, 0xD3C
    ctx->pc = 0x1261b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3388));
    // 0x1261b8: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x1261B8u;
    SET_GPR_U32(ctx, 31, 0x1261C0u);
    ctx->pc = 0x1261BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261B8u;
    // 0x1261bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1261B8u, 0x1261C0u)) {
        return;
    }
    ctx->pc = 0x1261C0u;
label_1261c0:
    // 0x1261c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1261c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261c8: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x1261C8u;
    SET_GPR_U32(ctx, 31, 0x1261D0u);
    ctx->pc = 0x1261CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261C8u;
    // 0x1261cc: 0x26050d44  addiu       $a1, $s0, 0xD44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1261C8u, 0x1261D0u)) {
        return;
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0xc62c0810  lwc1        $f12, 0x810($s1)
    ctx->pc = 0x1261d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1261d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261d8: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x1261D8u;
    SET_GPR_U32(ctx, 31, 0x1261E0u);
    ctx->pc = 0x1261DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261D8u;
    // 0x1261dc: 0x26050d4c  addiu       $a1, $s0, 0xD4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x1261D8u, 0x1261E0u)) {
        return;
    }
    ctx->pc = 0x1261E0u;
label_1261e0:
    // 0x1261e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261e4: 0x26050d54  addiu       $a1, $s0, 0xD54
    ctx->pc = 0x1261e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3412));
    // 0x1261e8: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x1261E8u;
    SET_GPR_U32(ctx, 31, 0x1261F0u);
    ctx->pc = 0x1261ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261E8u;
    // 0x1261ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x1261E8u, 0x1261F0u)) {
        return;
    }
    ctx->pc = 0x1261F0u;
label_1261f0:
    // 0x1261f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1261f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1261f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261f8: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x1261F8u;
    SET_GPR_U32(ctx, 31, 0x126200u);
    ctx->pc = 0x1261FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261F8u;
    // 0x1261fc: 0x26050d5c  addiu       $a1, $s0, 0xD5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x1261F8u, 0x126200u)) {
        return;
    }
    ctx->pc = 0x126200u;
label_126200:
    // 0x126200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126204: 0x26050d7c  addiu       $a1, $s0, 0xD7C
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3452));
    // 0x126208: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126208u;
    SET_GPR_U32(ctx, 31, 0x126210u);
    ctx->pc = 0x12620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126208u;
    // 0x12620c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126208u, 0x126210u)) {
        return;
    }
    ctx->pc = 0x126210u;
label_126210:
    // 0x126210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126214: 0x26050d84  addiu       $a1, $s0, 0xD84
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3460));
    // 0x126218: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126218u;
    SET_GPR_U32(ctx, 31, 0x126220u);
    ctx->pc = 0x12621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126218u;
    // 0x12621c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126218u, 0x126220u)) {
        return;
    }
    ctx->pc = 0x126220u;
label_126220:
    // 0x126220: 0x8e060dec  lw          $a2, 0xDEC($s0)
    ctx->pc = 0x126220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3564)));
    // 0x126224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126228: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126228u;
    SET_GPR_U32(ctx, 31, 0x126230u);
    ctx->pc = 0x12622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126228u;
    // 0x12622c: 0x26050db4  addiu       $a1, $s0, 0xDB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126228u, 0x126230u)) {
        return;
    }
    ctx->pc = 0x126230u;
label_126230:
    // 0x126230: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12623c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x12623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126240: 0x3e00008  jr          $ra
    ctx->pc = 0x126240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126240u;
        // 0x126244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126248u;
}
