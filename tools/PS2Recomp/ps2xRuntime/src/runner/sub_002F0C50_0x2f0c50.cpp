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

// Function: sub_002F0C50
// Address: 0x2f0c50 - 0x2f0d28
void sub_002F0C50_0x2f0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C50_0x2f0c50");
#endif

    switch (ctx->pc) {
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0d04u: goto label_2f0d04;
        case 0x2f0d0cu: goto label_2f0d0c;
        default: break;
    }

    ctx->pc = 0x2f0c50u;

    // 0x2f0c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0c54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f0c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f0c58: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x2f0c58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x2f0c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0c60: 0x8e226338  lw          $v0, 0x6338($s1)
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0c64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0C64u;
    {
        const bool branch_taken_0x2f0c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C64u;
        // 0x2f0c68: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c64) {
            ctx->pc = 0x2F0C78u;
            goto label_2f0c78;
        }
    }
    ctx->pc = 0x2F0C6Cu;
    // 0x2f0c6c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0c70: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F0C70u;
    {
        const bool branch_taken_0x2f0c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C70u;
        // 0x2f0c74: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c70) {
            ctx->pc = 0x2F0D14u;
            goto label_2f0d14;
        }
    }
    ctx->pc = 0x2F0C78u;
label_2f0c78:
    // 0x2f0c78: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f0c7c: 0x8c43f104  lw          $v1, -0xEFC($v0)
    ctx->pc = 0x2f0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f0c80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0C80u;
    {
        const bool branch_taken_0x2f0c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C80u;
        // 0x2f0c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c80) {
            ctx->pc = 0x2F0C90u;
            goto label_2f0c90;
        }
    }
    ctx->pc = 0x2F0C88u;
    // 0x2f0c88: 0xc0bc6dc  jal         func_2F1B70
    ctx->pc = 0x2F0C88u;
    SET_GPR_U32(ctx, 31, 0x2F0C90u);
    ctx->pc = 0x2F0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C88u;
    // 0x2f0c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1B70u, 0x2F0C88u, 0x2F0C90u)) {
        return;
    }
    ctx->pc = 0x2F0C90u;
label_2f0c90:
    // 0x2f0c90: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2f0c94: 0x8e04f620  lw          $a0, -0x9E0($s0)
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F620u));
    // 0x2f0c98: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0C98u;
    {
        const bool branch_taken_0x2f0c98 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2f0c98) {
            ctx->pc = 0x2F0C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C98u;
            // 0x2f0c9c: 0x2610f620  addiu       $s0, $s0, -0x9E0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964768));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0CC4u;
            goto label_2f0cc4;
        }
    }
    ctx->pc = 0x2F0CA0u;
    // 0x2f0ca0: 0xc0c845c  jal         func_321170
    ctx->pc = 0x2F0CA0u;
    SET_GPR_U32(ctx, 31, 0x2F0CA8u);
    ctx->pc = 0x321170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321170u, 0x2F0CA0u, 0x2F0CA8u)) {
        return;
    }
    ctx->pc = 0x2F0CA8u;
label_2f0ca8:
    // 0x2f0ca8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0CA8u;
    {
        const bool branch_taken_0x2f0ca8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CA8u;
        // 0x2f0cac: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ca8) {
            ctx->pc = 0x2F0CB8u;
            goto label_2f0cb8;
        }
    }
    ctx->pc = 0x2F0CB0u;
    // 0x2f0cb0: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F0CB0u;
    SET_GPR_U32(ctx, 31, 0x2F0CB8u);
    ctx->pc = 0x2F0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CB0u;
    // 0x2f0cb4: 0x248400b8  addiu       $a0, $a0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F0CB0u, 0x2F0CB8u)) {
        return;
    }
    ctx->pc = 0x2F0CB8u;
label_2f0cb8:
    // 0x2f0cb8: 0xc0c844c  jal         func_321130
    ctx->pc = 0x2F0CB8u;
    SET_GPR_U32(ctx, 31, 0x2F0CC0u);
    ctx->pc = 0x2F0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CB8u;
    // 0x2f0cbc: 0x8e04f620  lw          $a0, -0x9E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321130u, 0x2F0CB8u, 0x2F0CC0u)) {
        return;
    }
    ctx->pc = 0x2F0CC0u;
label_2f0cc0:
    // 0x2f0cc0: 0x2610f620  addiu       $s0, $s0, -0x9E0
    ctx->pc = 0x2f0cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964768));
label_2f0cc4:
    // 0x2f0cc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f0cc8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0CC8u;
    {
        const bool branch_taken_0x2f0cc8 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2f0cc8) {
            ctx->pc = 0x2F0CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0CC8u;
            // 0x2f0ccc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0CDCu;
            goto label_2f0cdc;
        }
    }
    ctx->pc = 0x2F0CD0u;
    // 0x2f0cd0: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2F0CD0u;
    SET_GPR_U32(ctx, 31, 0x2F0CD8u);
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2F0CD0u, 0x2F0CD8u)) {
        return;
    }
    ctx->pc = 0x2F0CD8u;
label_2f0cd8:
    // 0x2f0cd8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f0cdc:
    // 0x2f0cdc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0CDCu;
    {
        const bool branch_taken_0x2f0cdc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CDCu;
        // 0x2f0ce0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0cdc) {
            ctx->pc = 0x2F0CF0u;
            goto label_2f0cf0;
        }
    }
    ctx->pc = 0x2F0CE4u;
    // 0x2f0ce4: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2F0CE4u;
    SET_GPR_U32(ctx, 31, 0x2F0CECu);
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2F0CE4u, 0x2F0CECu)) {
        return;
    }
    ctx->pc = 0x2F0CECu;
label_2f0cec:
    // 0x2f0cec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f0cf0:
    // 0x2f0cf0: 0x8c44f62c  lw          $a0, -0x9D4($v0)
    ctx->pc = 0x2f0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964780)));
    // 0x2f0cf4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0CF4u;
    {
        const bool branch_taken_0x2f0cf4 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2f0cf4) {
            ctx->pc = 0x2F0D04u;
            goto label_2f0d04;
        }
    }
    ctx->pc = 0x2F0CFCu;
    // 0x2f0cfc: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2F0CFCu;
    SET_GPR_U32(ctx, 31, 0x2F0D04u);
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2F0CFCu, 0x2F0D04u)) {
        return;
    }
    ctx->pc = 0x2F0D04u;
label_2f0d04:
    // 0x2f0d04: 0xc0bdc6a  jal         func_2F71A8
    ctx->pc = 0x2F0D04u;
    SET_GPR_U32(ctx, 31, 0x2F0D0Cu);
    ctx->pc = 0x2F71A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F71A8u, 0x2F0D04u, 0x2F0D0Cu)) {
        return;
    }
    ctx->pc = 0x2F0D0Cu;
label_2f0d0c:
    // 0x2f0d0c: 0xae206338  sw          $zero, 0x6338($s1)
    ctx->pc = 0x2f0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25400), GPR_U32(ctx, 0));
    // 0x2f0d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d14:
    // 0x2f0d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0d18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f0d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D20u;
        // 0x2f0d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0D28u;
}
