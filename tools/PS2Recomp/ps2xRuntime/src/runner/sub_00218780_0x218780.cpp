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

// Function: sub_00218780
// Address: 0x218780 - 0x2187f8
void sub_00218780_0x218780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218780_0x218780");
#endif

    switch (ctx->pc) {
        case 0x2187a0u: goto label_2187a0;
        case 0x2187a8u: goto label_2187a8;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187c0u: goto label_2187c0;
        case 0x2187c8u: goto label_2187c8;
        case 0x2187dcu: goto label_2187dc;
        default: break;
    }

    ctx->pc = 0x218780u;

    // 0x218780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x218784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x218788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21878c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21878cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218798: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x218798u;
    SET_GPR_U32(ctx, 31, 0x2187A0u);
    ctx->pc = 0x21879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218798u;
    // 0x21879c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x218798u, 0x2187A0u)) {
        return;
    }
    ctx->pc = 0x2187A0u;
label_2187a0:
    // 0x2187a0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187A0u;
    SET_GPR_U32(ctx, 31, 0x2187A8u);
    ctx->pc = 0x2187A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187A0u;
    // 0x2187a4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187A0u, 0x2187A8u)) {
        return;
    }
    ctx->pc = 0x2187A8u;
label_2187a8:
    // 0x2187a8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187A8u;
    SET_GPR_U32(ctx, 31, 0x2187B0u);
    ctx->pc = 0x2187ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187A8u;
    // 0x2187ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187A8u, 0x2187B0u)) {
        return;
    }
    ctx->pc = 0x2187B0u;
label_2187b0:
    // 0x2187b0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187B0u;
    SET_GPR_U32(ctx, 31, 0x2187B8u);
    ctx->pc = 0x2187B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187B0u;
    // 0x2187b4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187B0u, 0x2187B8u)) {
        return;
    }
    ctx->pc = 0x2187B8u;
label_2187b8:
    // 0x2187b8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187B8u;
    SET_GPR_U32(ctx, 31, 0x2187C0u);
    ctx->pc = 0x2187BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187B8u;
    // 0x2187bc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187B8u, 0x2187C0u)) {
        return;
    }
    ctx->pc = 0x2187C0u;
label_2187c0:
    // 0x2187c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187C0u;
    SET_GPR_U32(ctx, 31, 0x2187C8u);
    ctx->pc = 0x2187C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187C0u;
    // 0x2187c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187C0u, 0x2187C8u)) {
        return;
    }
    ctx->pc = 0x2187C8u;
label_2187c8:
    // 0x2187c8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2187c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2187cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2187CCu;
    {
        const bool branch_taken_0x2187cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2187D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187CCu;
        // 0x2187d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187cc) {
            ctx->pc = 0x2187E0u;
            goto label_2187e0;
        }
    }
    ctx->pc = 0x2187D4u;
    // 0x2187d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2187D4u;
    SET_GPR_U32(ctx, 31, 0x2187DCu);
    ctx->pc = 0x2187D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187D4u;
    // 0x2187d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2187D4u, 0x2187DCu)) {
        return;
    }
    ctx->pc = 0x2187DCu;
label_2187dc:
    // 0x2187dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2187dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2187e0:
    // 0x2187e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2187e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2187e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2187e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2187E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2187ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E8u;
        // 0x2187ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2187E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2187F0u;
    // 0x2187f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2187f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2187f4: 0x0  nop
    ctx->pc = 0x2187f4u;
    // NOP
    ctx->pc = 0x2187f8u;
}
