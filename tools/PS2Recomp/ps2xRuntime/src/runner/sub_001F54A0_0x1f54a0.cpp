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

// Function: sub_001F54A0
// Address: 0x1f54a0 - 0x1f5520
void sub_001F54A0_0x1f54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F54A0_0x1f54a0");
#endif

    switch (ctx->pc) {
        case 0x1f54e4u: goto label_1f54e4;
        default: break;
    }

    ctx->pc = 0x1f54a0u;

    // 0x1f54a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f54a4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f54ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f54acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f54b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f54b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f54b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f54b8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F54B8u;
    {
        const bool branch_taken_0x1f54b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54B8u;
        // 0x1f54bc: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54b8) {
            ctx->pc = 0x1F5500u;
            goto label_1f5500;
        }
    }
    ctx->pc = 0x1F54C0u;
    // 0x1f54c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f54c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f54c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F54C8u;
    {
        const bool branch_taken_0x1f54c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f54c8) {
            ctx->pc = 0x1F54CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54C8u;
            // 0x1f54cc: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F54DCu;
            goto label_1f54dc;
        }
    }
    ctx->pc = 0x1F54D0u;
    // 0x1f54d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1f54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f54d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F54D4u;
    {
        const bool branch_taken_0x1f54d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54D4u;
        // 0x1f54d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54d4) {
            ctx->pc = 0x1F54E4u;
            goto label_1f54e4;
        }
    }
    ctx->pc = 0x1F54DCu;
label_1f54dc:
    // 0x1f54dc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F54DCu;
    SET_GPR_U32(ctx, 31, 0x1F54E4u);
    ctx->pc = 0x1F54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54DCu;
    // 0x1f54e0: 0x8e06001c  lw          $a2, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F54DCu, 0x1F54E4u)) {
        return;
    }
    ctx->pc = 0x1F54E4u;
label_1f54e4:
    // 0x1f54e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F54E4u;
    {
        const bool branch_taken_0x1f54e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54E4u;
        // 0x1f54e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54e4) {
            ctx->pc = 0x1F5500u;
            goto label_1f5500;
        }
    }
    ctx->pc = 0x1F54ECu;
    // 0x1f54ec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f54f0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F54F0u;
    {
        const bool branch_taken_0x1f54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f54f0) {
            ctx->pc = 0x1F54F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54F0u;
            // 0x1f54f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5504u;
            goto label_1f5504;
        }
    }
    ctx->pc = 0x1F54F8u;
    // 0x1f54f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f54fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f5500:
    // 0x1f5500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f5500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5504:
    // 0x1f5504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f550c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F550Cu;
        // 0x1f5510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5514u;
    // 0x1f5514: 0x0  nop
    ctx->pc = 0x1f5514u;
    // NOP
    // 0x1f5518: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f5518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f551c: 0x0  nop
    ctx->pc = 0x1f551cu;
    // NOP
    ctx->pc = 0x1f5520u;
}
