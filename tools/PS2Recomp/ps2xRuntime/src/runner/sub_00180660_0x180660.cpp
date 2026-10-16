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

// Function: sub_00180660
// Address: 0x180660 - 0x1806f0
void sub_00180660_0x180660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180660_0x180660");
#endif

    switch (ctx->pc) {
        case 0x180690u: goto label_180690;
        case 0x1806c4u: goto label_1806c4;
        default: break;
    }

    ctx->pc = 0x180660u;

    // 0x180660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180664: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180668: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x180668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18066c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18066cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180670: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x180670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x180674: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x180674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x180678: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x180678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18067c: 0x8c4489ec  lw          $a0, -0x7614($v0)
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3389ECu));
    // 0x180680: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180684: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x180684u;
    {
        const bool branch_taken_0x180684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x180688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180684u;
        // 0x180688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180684) {
            ctx->pc = 0x1806D8u;
            goto label_1806d8;
        }
    }
    ctx->pc = 0x18068Cu;
    // 0x18068c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_180690:
    // 0x180690: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x180690u;
    {
        const bool branch_taken_0x180690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x180690) {
            ctx->pc = 0x180694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180690u;
            // 0x180694: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1806CCu;
            goto label_1806cc;
        }
    }
    ctx->pc = 0x180698u;
    // 0x180698: 0x8e2289ec  lw          $v0, -0x7614($s1)
    ctx->pc = 0x180698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937068)));
    // 0x18069c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18069Cu;
    {
        const bool branch_taken_0x18069c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18069c) {
            ctx->pc = 0x1806ACu;
            goto label_1806ac;
        }
    }
    ctx->pc = 0x1806A4u;
    // 0x1806a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1806a8: 0xae2289ec  sw          $v0, -0x7614($s1)
    ctx->pc = 0x1806a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937068), GPR_U32(ctx, 2));
label_1806ac:
    // 0x1806ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1806ACu;
    {
        const bool branch_taken_0x1806ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1806ac) {
            ctx->pc = 0x1806BCu;
            goto label_1806bc;
        }
    }
    ctx->pc = 0x1806B4u;
    // 0x1806b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1806b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1806b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1806b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1806bc:
    // 0x1806bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1806BCu;
    SET_GPR_U32(ctx, 31, 0x1806C4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1806BCu, 0x1806C4u)) {
        return;
    }
    ctx->pc = 0x1806C4u;
label_1806c4:
    // 0x1806c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1806C4u;
    {
        const bool branch_taken_0x1806c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806C4u;
        // 0x1806c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806c4) {
            ctx->pc = 0x1806D0u;
            goto label_1806d0;
        }
    }
    ctx->pc = 0x1806CCu;
label_1806cc:
    // 0x1806cc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1806d0:
    // 0x1806d0: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1806D0u;
    {
        const bool branch_taken_0x1806d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1806d0) {
            ctx->pc = 0x1806D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1806D0u;
            // 0x1806d4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180690;
        }
    }
    ctx->pc = 0x1806D8u;
label_1806d8:
    // 0x1806d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1806d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1806dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1806dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1806e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1806e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1806e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1806e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1806E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806E8u;
        // 0x1806ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806F0u;
}
