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

// Function: sub_00195780
// Address: 0x195780 - 0x1957f8
void sub_00195780_0x195780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195780_0x195780");
#endif

    switch (ctx->pc) {
        case 0x1957b8u: goto label_1957b8;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e4u: goto label_1957e4;
        default: break;
    }

    ctx->pc = 0x195780u;

    // 0x195780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195788: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19578c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19578cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195794: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x195794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x195798: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x195798u;
    {
        const bool branch_taken_0x195798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195798u;
        // 0x19579c: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195798) {
            ctx->pc = 0x1957DCu;
            goto label_1957dc;
        }
    }
    ctx->pc = 0x1957A0u;
    // 0x1957a0: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1957a4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1957a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1957a8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1957a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1957ac: 0x50b00009  beql        $a1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1957ACu;
    {
        const bool branch_taken_0x1957ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x1957ac) {
            ctx->pc = 0x1957B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1957ACu;
            // 0x1957b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1957D4u;
            goto label_1957d4;
        }
    }
    ctx->pc = 0x1957B4u;
    // 0x1957b4: 0x2610ffc8  addiu       $s0, $s0, -0x38
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
label_1957b8:
    // 0x1957b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1957b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957bc: 0xc042c04  jal         func_10B010
    ctx->pc = 0x1957BCu;
    SET_GPR_U32(ctx, 31, 0x1957C4u);
    ctx->pc = 0x1957C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957BCu;
    // 0x1957c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10B010u, 0x1957BCu, 0x1957C4u)) {
        return;
    }
    ctx->pc = 0x1957C4u;
label_1957c4:
    // 0x1957c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1957c8: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1957C8u;
    {
        const bool branch_taken_0x1957c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1957CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957C8u;
        // 0x1957cc: 0x2610ffc8  addiu       $s0, $s0, -0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957c8) {
            ctx->pc = 0x1957B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1957b8;
        }
    }
    ctx->pc = 0x1957D0u;
    // 0x1957d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1957d4:
    // 0x1957d4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1957D4u;
    SET_GPR_U32(ctx, 31, 0x1957DCu);
    ctx->pc = 0x1957D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957D4u;
    // 0x1957d8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1957D4u, 0x1957DCu)) {
        return;
    }
    ctx->pc = 0x1957DCu;
label_1957dc:
    // 0x1957dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1957DCu;
    SET_GPR_U32(ctx, 31, 0x1957E4u);
    ctx->pc = 0x1957E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957DCu;
    // 0x1957e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1957DCu, 0x1957E4u)) {
        return;
    }
    ctx->pc = 0x1957E4u;
label_1957e4:
    // 0x1957e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1957e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1957e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1957e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1957F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1957F8u;
}
