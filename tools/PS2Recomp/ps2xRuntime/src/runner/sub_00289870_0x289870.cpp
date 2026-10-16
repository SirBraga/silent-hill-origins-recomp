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

// Function: sub_00289870
// Address: 0x289870 - 0x2898d4
void sub_00289870_0x289870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289870_0x289870");
#endif

    switch (ctx->pc) {
        case 0x2898acu: goto label_2898ac;
        case 0x2898bcu: goto label_2898bc;
        case 0x2898ccu: goto label_2898cc;
        default: break;
    }

    ctx->pc = 0x289870u;

    // 0x289870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289874: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x289874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28987c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289880: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x289880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x289884: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x289884u;
    {
        const bool branch_taken_0x289884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289884u;
        // 0x289888: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289884) {
            ctx->pc = 0x2898E4u;
            return;
        }
    }
    ctx->pc = 0x28988Cu;
    // 0x28988c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289890: 0x2442cde0  addiu       $v0, $v0, -0x3220
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x289894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28989c: 0x800008  jr          $a0
    ctx->pc = 0x28989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2898A4u: goto label_2898a4;
            case 0x2898B4u: goto label_2898b4;
            case 0x2898C4u: goto label_2898c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28989Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2898A4u;
label_2898a4:
    // 0x2898a4: 0xc0a2b3a  jal         func_28ACE8
    ctx->pc = 0x2898A4u;
    SET_GPR_U32(ctx, 31, 0x2898ACu);
    ctx->pc = 0x2898A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898A4u;
    // 0x2898a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ACE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28ACE8u, 0x2898A4u, 0x2898ACu)) {
        return;
    }
    ctx->pc = 0x2898ACu;
label_2898ac:
    // 0x2898ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2898ACu;
    {
        const bool branch_taken_0x2898ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898ACu;
        // 0x2898b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898ac) {
            ctx->pc = 0x2898ECu;
            return;
        }
    }
    ctx->pc = 0x2898B4u;
label_2898b4:
    // 0x2898b4: 0xc0a352e  jal         func_28D4B8
    ctx->pc = 0x2898B4u;
    SET_GPR_U32(ctx, 31, 0x2898BCu);
    ctx->pc = 0x2898B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898B4u;
    // 0x2898b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D4B8u, 0x2898B4u, 0x2898BCu)) {
        return;
    }
    ctx->pc = 0x2898BCu;
label_2898bc:
    // 0x2898bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2898BCu;
    {
        const bool branch_taken_0x2898bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898BCu;
        // 0x2898c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898bc) {
            ctx->pc = 0x2898ECu;
            return;
        }
    }
    ctx->pc = 0x2898C4u;
label_2898c4:
    // 0x2898c4: 0xc0a26da  jal         func_289B68
    ctx->pc = 0x2898C4u;
    SET_GPR_U32(ctx, 31, 0x2898CCu);
    ctx->pc = 0x2898C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898C4u;
    // 0x2898c8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289B68u, 0x2898C4u, 0x2898CCu)) {
        return;
    }
    ctx->pc = 0x2898CCu;
label_2898cc:
    // 0x2898cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2898CCu;
    {
        const bool branch_taken_0x2898cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898CCu;
        // 0x2898d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898cc) {
            ctx->pc = 0x2898ECu;
            return;
        }
    }
    ctx->pc = 0x2898D4u;
}
