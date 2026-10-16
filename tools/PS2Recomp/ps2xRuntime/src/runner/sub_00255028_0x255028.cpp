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

// Function: sub_00255028
// Address: 0x255028 - 0x255098
void sub_00255028_0x255028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255028_0x255028");
#endif

    switch (ctx->pc) {
        case 0x255050u: goto label_255050;
        case 0x255078u: goto label_255078;
        default: break;
    }

    ctx->pc = 0x255028u;

    // 0x255028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25502c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25502cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x255030: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x255030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x255034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255038: 0x24c64800  addiu       $a2, $a2, 0x4800
    ctx->pc = 0x255038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18432));
    // 0x25503c: 0x24e74820  addiu       $a3, $a3, 0x4820
    ctx->pc = 0x25503cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18464));
    // 0x255040: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x255040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x255044: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x255044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255048: 0xc089470  jal         func_2251C0
    ctx->pc = 0x255048u;
    SET_GPR_U32(ctx, 31, 0x255050u);
    ctx->pc = 0x25504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255048u;
    // 0x25504c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2251C0u, 0x255048u, 0x255050u)) {
        return;
    }
    ctx->pc = 0x255050u;
label_255050:
    // 0x255050: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x255050u;
    {
        const bool branch_taken_0x255050 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x255054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255050u;
        // 0x255054: 0xaf8285b8  sw          $v0, -0x7A48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255050) {
            ctx->pc = 0x255088u;
            goto label_255088;
        }
    }
    ctx->pc = 0x255058u;
    // 0x255058: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x255058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25505c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25505cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x255060: 0x24c64828  addiu       $a2, $a2, 0x4828
    ctx->pc = 0x255060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18472));
    // 0x255064: 0x24e74848  addiu       $a3, $a3, 0x4848
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18504));
    // 0x255068: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x255068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25506c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255070: 0xc095d72  jal         func_2575C8
    ctx->pc = 0x255070u;
    SET_GPR_U32(ctx, 31, 0x255078u);
    ctx->pc = 0x255074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255070u;
    // 0x255074: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2575C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2575C8u, 0x255070u, 0x255078u)) {
        return;
    }
    ctx->pc = 0x255078u;
label_255078:
    // 0x255078: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x255078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25507c: 0xaf8285bc  sw          $v0, -0x7A44($gp)
    ctx->pc = 0x25507cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935996), GPR_U32(ctx, 2));
    // 0x255080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255080u;
    {
        const bool branch_taken_0x255080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255080u;
        // 0x255084: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255080) {
            ctx->pc = 0x25508Cu;
            goto label_25508c;
        }
    }
    ctx->pc = 0x255088u;
label_255088:
    // 0x255088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x255088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25508c:
    // 0x25508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255090: 0x3e00008  jr          $ra
    ctx->pc = 0x255090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255090u;
        // 0x255094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255098u;
}
