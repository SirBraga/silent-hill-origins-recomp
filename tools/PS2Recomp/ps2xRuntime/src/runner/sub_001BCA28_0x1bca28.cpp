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

// Function: sub_001BCA28
// Address: 0x1bca28 - 0x1bcab8
void sub_001BCA28_0x1bca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA28_0x1bca28");
#endif

    switch (ctx->pc) {
        case 0x1bca74u: goto label_1bca74;
        case 0x1bcaacu: goto label_1bcaac;
        default: break;
    }

    ctx->pc = 0x1bca28u;

    // 0x1bca28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bca2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bca30: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1bca34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bca38: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BCA38u;
    {
        const bool branch_taken_0x1bca38 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA38u;
        // 0x1bca3c: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca38) {
            ctx->pc = 0x1BCA7Cu;
            goto label_1bca7c;
        }
    }
    ctx->pc = 0x1BCA40u;
    // 0x1bca40: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1bca40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1bca44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bca48: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bca48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bca4c: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B0u));
    // 0x1bca50: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bca54: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BCA54u;
    {
        const bool branch_taken_0x1bca54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA54u;
        // 0x1bca58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca54) {
            ctx->pc = 0x1BCAB0u;
            goto label_1bcab0;
        }
    }
    ctx->pc = 0x1BCA5Cu;
    // 0x1bca5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bca60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BCA60u;
    {
        const bool branch_taken_0x1bca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA60u;
        // 0x1bca64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca60) {
            ctx->pc = 0x1BCAB0u;
            goto label_1bcab0;
        }
    }
    ctx->pc = 0x1BCA68u;
    // 0x1bca68: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bca6c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BCA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCA74u);
    ctx->pc = 0x1BCA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA6Cu;
    // 0x1bca70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BCA6Cu, 0x1BCA74u)) {
        return;
    }
    ctx->pc = 0x1BCA74u;
label_1bca74:
    // 0x1bca74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BCA74u;
    {
        const bool branch_taken_0x1bca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA74u;
        // 0x1bca78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca74) {
            ctx->pc = 0x1BCAB0u;
            goto label_1bcab0;
        }
    }
    ctx->pc = 0x1BCA7Cu;
label_1bca7c:
    // 0x1bca7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bca80: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bca84: 0x8c454390  lw          $a1, 0x4390($v0)
    ctx->pc = 0x1bca84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4390u));
    // 0x1bca88: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bca88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bca8c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCA8Cu;
    {
        const bool branch_taken_0x1bca8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA8Cu;
        // 0x1bca90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca8c) {
            ctx->pc = 0x1BCAB0u;
            goto label_1bcab0;
        }
    }
    ctx->pc = 0x1BCA94u;
    // 0x1bca94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bca98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCA98u;
    {
        const bool branch_taken_0x1bca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA98u;
        // 0x1bca9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca98) {
            ctx->pc = 0x1BCAB0u;
            goto label_1bcab0;
        }
    }
    ctx->pc = 0x1BCAA0u;
    // 0x1bcaa0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bcaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bcaa4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BCAA4u;
    SET_GPR_U32(ctx, 31, 0x1BCAACu);
    ctx->pc = 0x1BCAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAA4u;
    // 0x1bcaa8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BCAA4u, 0x1BCAACu)) {
        return;
    }
    ctx->pc = 0x1BCAACu;
label_1bcaac:
    // 0x1bcaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcab0:
    // 0x1bcab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB0u;
        // 0x1bcab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCAB8u;
}
