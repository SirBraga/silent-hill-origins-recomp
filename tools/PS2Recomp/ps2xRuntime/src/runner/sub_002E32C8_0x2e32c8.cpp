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

// Function: sub_002E32C8
// Address: 0x2e32c8 - 0x2e3350
void sub_002E32C8_0x2e32c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E32C8_0x2e32c8");
#endif

    switch (ctx->pc) {
        case 0x2e32e4u: goto label_2e32e4;
        case 0x2e3300u: goto label_2e3300;
        default: break;
    }

    ctx->pc = 0x2e32c8u;

    // 0x2e32c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e32c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e32cc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2e32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2e32d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e32d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e32d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e32d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e32d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e32dc: 0xc0b77ba  jal         func_2DDEE8
    ctx->pc = 0x2E32DCu;
    SET_GPR_U32(ctx, 31, 0x2E32E4u);
    ctx->pc = 0x2E32E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32DCu;
    // 0x2e32e0: 0x24a582c0  addiu       $a1, $a1, -0x7D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDEE8u, 0x2E32DCu, 0x2E32E4u)) {
        return;
    }
    ctx->pc = 0x2E32E4u;
label_2e32e4:
    // 0x2e32e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e32e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32e8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E32E8u;
    {
        const bool branch_taken_0x2e32e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E8u;
        // 0x2e32ec: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32e8) {
            ctx->pc = 0x2E3338u;
            goto label_2e3338;
        }
    }
    ctx->pc = 0x2E32F0u;
    // 0x2e32f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e32f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32f4: 0x24a5f5c8  addiu       $a1, $a1, -0xA38
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964680));
    // 0x2e32f8: 0xc0b77a6  jal         func_2DDE98
    ctx->pc = 0x2E32F8u;
    SET_GPR_U32(ctx, 31, 0x2E3300u);
    ctx->pc = 0x2E32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32F8u;
    // 0x2e32fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDE98u, 0x2E32F8u, 0x2E3300u)) {
        return;
    }
    ctx->pc = 0x2E3300u;
label_2e3300:
    // 0x2e3300: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e3300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e3304: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e3308: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2e3308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2e330c: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2e330cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2e3310: 0x24633378  addiu       $v1, $v1, 0x3378
    ctx->pc = 0x2e3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13176));
    // 0x2e3314: 0x24843408  addiu       $a0, $a0, 0x3408
    ctx->pc = 0x2e3314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13320));
    // 0x2e3318: 0x24a53430  addiu       $a1, $a1, 0x3430
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    // 0x2e331c: 0x24c63468  addiu       $a2, $a2, 0x3468
    ctx->pc = 0x2e331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13416));
    // 0x2e3320: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e3320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e3324: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3328: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2e3328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2e332c: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x2e332cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x2e3330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3330u;
    {
        const bool branch_taken_0x2e3330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3330u;
        // 0x2e3334: 0xae060018  sw          $a2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3330) {
            ctx->pc = 0x2E3340u;
            goto label_2e3340;
        }
    }
    ctx->pc = 0x2E3338u;
label_2e3338:
    // 0x2e3338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e333c: 0x0  nop
    ctx->pc = 0x2e333cu;
    // NOP
label_2e3340:
    // 0x2e3340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e3340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3348: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3348u;
        // 0x2e334c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3350u;
}
