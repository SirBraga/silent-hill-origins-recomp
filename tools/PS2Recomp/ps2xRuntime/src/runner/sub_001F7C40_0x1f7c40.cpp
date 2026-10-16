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

// Function: sub_001F7C40
// Address: 0x1f7c40 - 0x1f7cf8
void sub_001F7C40_0x1f7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7C40_0x1f7c40");
#endif

    switch (ctx->pc) {
        case 0x1f7cc0u: goto label_1f7cc0;
        case 0x1f7cecu: goto label_1f7cec;
        default: break;
    }

    ctx->pc = 0x1f7c40u;

    // 0x1f7c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7c44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7c48: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1f7c4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7c50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f7c54: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C54u;
    {
        const bool branch_taken_0x1f7c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C54u;
        // 0x1f7c58: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c54) {
            ctx->pc = 0x1F7C68u;
            goto label_1f7c68;
        }
    }
    ctx->pc = 0x1F7C5Cu;
    // 0x1f7c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7c60: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F7C60u;
    {
        const bool branch_taken_0x1f7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C60u;
        // 0x1f7c64: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c60) {
            ctx->pc = 0x1F7CE4u;
            goto label_1f7ce4;
        }
    }
    ctx->pc = 0x1F7C68u;
label_1f7c68:
    // 0x1f7c68: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f7c6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C6Cu;
    {
        const bool branch_taken_0x1f7c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C6Cu;
        // 0x1f7c70: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c6c) {
            ctx->pc = 0x1F7C98u;
            goto label_1f7c98;
        }
    }
    ctx->pc = 0x1F7C74u;
    // 0x1f7c74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7c78: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7C78u;
    {
        const bool branch_taken_0x1f7c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C78u;
        // 0x1f7c7c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c78) {
            ctx->pc = 0x1F7C90u;
            goto label_1f7c90;
        }
    }
    ctx->pc = 0x1F7C80u;
    // 0x1f7c80: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1f7c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x1f7c84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f7c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f7c88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F7C88u;
    {
        const bool branch_taken_0x1f7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c88) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7C90u;
label_1f7c90:
    // 0x1f7c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7C90u;
    {
        const bool branch_taken_0x1f7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C90u;
        // 0x1f7c94: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c90) {
            ctx->pc = 0x1F7C9Cu;
            goto label_1f7c9c;
        }
    }
    ctx->pc = 0x1F7C98u;
label_1f7c98:
    // 0x1f7c98: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1f7c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1f7c9c:
    // 0x1f7c9c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x1f7c9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7ca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7ca4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1f7ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1f7ca8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1f7ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f7cac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7CACu;
    {
        const bool branch_taken_0x1f7cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CACu;
        // 0x1f7cb0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cac) {
            ctx->pc = 0x1F7CE4u;
            goto label_1f7ce4;
        }
    }
    ctx->pc = 0x1F7CB4u;
    // 0x1f7cb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7cb8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1f7cbc: 0x0  nop
    ctx->pc = 0x1f7cbcu;
    // NOP
label_1f7cc0:
    // 0x1f7cc0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x1f7cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x1f7cc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7cc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f7cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ccc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1f7cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7cd0: 0x0  nop
    ctx->pc = 0x1f7cd0u;
    // NOP
    // 0x1f7cd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7CD4u;
    {
        const bool branch_taken_0x1f7cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cd4) {
            ctx->pc = 0x1F7CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7cc0;
        }
    }
    ctx->pc = 0x1F7CDCu;
    // 0x1f7cdc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1f7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1f7ce0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1f7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1f7ce4:
    // 0x1f7ce4: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F7CE4u;
    SET_GPR_U32(ctx, 31, 0x1F7CECu);
    ctx->pc = 0x1F7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CE4u;
    // 0x1f7ce8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F7CE4u, 0x1F7CECu)) {
        return;
    }
    ctx->pc = 0x1F7CECu;
label_1f7cec:
    // 0x1f7cec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7cf0:
    // 0x1f7cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF0u;
        // 0x1f7cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7CF8u;
}
