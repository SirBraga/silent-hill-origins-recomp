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

// Function: sub_00119480
// Address: 0x119480 - 0x1194d8
void sub_00119480_0x119480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119480_0x119480");
#endif

    switch (ctx->pc) {
        case 0x119480u: goto label_119480;
        case 0x119484u: goto label_119484;
        case 0x119488u: goto label_119488;
        case 0x11948cu: goto label_11948c;
        case 0x119490u: goto label_119490;
        case 0x119494u: goto label_119494;
        case 0x119498u: goto label_119498;
        case 0x11949cu: goto label_11949c;
        case 0x1194a0u: goto label_1194a0;
        case 0x1194a4u: goto label_1194a4;
        case 0x1194a8u: goto label_1194a8;
        case 0x1194acu: goto label_1194ac;
        case 0x1194b0u: goto label_1194b0;
        case 0x1194b4u: goto label_1194b4;
        case 0x1194b8u: goto label_1194b8;
        case 0x1194bcu: goto label_1194bc;
        case 0x1194c0u: goto label_1194c0;
        case 0x1194c4u: goto label_1194c4;
        case 0x1194c8u: goto label_1194c8;
        case 0x1194ccu: goto label_1194cc;
        case 0x1194d0u: goto label_1194d0;
        case 0x1194d4u: goto label_1194d4;
        default: break;
    }

    ctx->pc = 0x119480u;

label_119480:
    // 0x119480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_119484:
    // 0x119484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x119484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_119488:
    // 0x119488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11948c:
    // 0x11948c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11948cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119490:
    // 0x119490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119494:
    // 0x119494: 0xc04469a  jal         func_111A68
label_119498:
    if (ctx->pc == 0x119498u) {
        ctx->pc = 0x119498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119494u;
        // 0x119498: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11949Cu;
        goto label_11949c;
    }
    ctx->pc = 0x119494u;
    SET_GPR_U32(ctx, 31, 0x11949Cu);
    ctx->pc = 0x119498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119494u;
    // 0x119498: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111A68u, 0x119494u, 0x11949Cu)) {
        return;
    }
    ctx->pc = 0x11949Cu;
label_11949c:
    // 0x11949c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1194a0:
    // 0x1194a0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1194a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1194a4:
    // 0x1194a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1194a8:
    if (ctx->pc == 0x1194A8u) {
        ctx->pc = 0x1194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194A4u;
        // 0x1194a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194ACu;
        goto label_1194ac;
    }
    ctx->pc = 0x1194A4u;
    {
        const bool branch_taken_0x1194a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194A4u;
        // 0x1194a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194a4) {
            ctx->pc = 0x1194C4u;
            goto label_1194c4;
        }
    }
    ctx->pc = 0x1194ACu;
label_1194ac:
    // 0x1194ac: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1194acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1194b0:
    // 0x1194b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1194b4:
    // 0x1194b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1194b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1194b8:
    // 0x1194b8: 0x60f809  jalr        $v1
label_1194bc:
    if (ctx->pc == 0x1194BCu) {
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B8u;
        // 0x1194bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194C0u;
        goto label_1194c0;
    }
    ctx->pc = 0x1194B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1194C0u);
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B8u;
        // 0x1194bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194B8u, 0x1194C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1194C0u;
label_1194c0:
    // 0x1194c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1194c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1194c4:
    // 0x1194c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1194c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1194c8:
    // 0x1194c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1194c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1194cc:
    // 0x1194cc: 0x3e00008  jr          $ra
label_1194d0:
    if (ctx->pc == 0x1194D0u) {
        ctx->pc = 0x1194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194CCu;
        // 0x1194d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194D4u;
        goto label_1194d4;
    }
    ctx->pc = 0x1194CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194CCu;
        // 0x1194d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194D4u;
label_1194d4:
    // 0x1194d4: 0x0  nop
    ctx->pc = 0x1194d4u;
    // NOP
    ctx->pc = 0x1194d8u;
}
