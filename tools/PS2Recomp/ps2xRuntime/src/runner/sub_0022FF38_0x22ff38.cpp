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

// Function: sub_0022FF38
// Address: 0x22ff38 - 0x22ffd0
void sub_0022FF38_0x22ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FF38_0x22ff38");
#endif

    switch (ctx->pc) {
        case 0x22ff54u: goto label_22ff54;
        case 0x22ff6cu: goto label_22ff6c;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ff98u: goto label_22ff98;
        case 0x22ffa8u: goto label_22ffa8;
        case 0x22ffb8u: goto label_22ffb8;
        default: break;
    }

    ctx->pc = 0x22ff38u;

    // 0x22ff38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ff3c: 0x9382841e  lbu         $v0, -0x7BE2($gp)
    ctx->pc = 0x22ff3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935582)));
    // 0x22ff40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22ff44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FF44u;
    {
        const bool branch_taken_0x22ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF44u;
        // 0x22ff48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff44) {
            ctx->pc = 0x22FF58u;
            goto label_22ff58;
        }
    }
    ctx->pc = 0x22FF4Cu;
    // 0x22ff4c: 0xc0c878a  jal         func_321E28
    ctx->pc = 0x22FF4Cu;
    SET_GPR_U32(ctx, 31, 0x22FF54u);
    ctx->pc = 0x22FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF4Cu;
    // 0x22ff50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E28u, 0x22FF4Cu, 0x22FF54u)) {
        return;
    }
    ctx->pc = 0x22FF54u;
label_22ff54:
    // 0x22ff54: 0xa380841e  sb          $zero, -0x7BE2($gp)
    ctx->pc = 0x22ff54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935582), (uint8_t)GPR_U32(ctx, 0));
label_22ff58:
    // 0x22ff58: 0x9382841d  lbu         $v0, -0x7BE3($gp)
    ctx->pc = 0x22ff58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935581)));
    // 0x22ff5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FF5Cu;
    {
        const bool branch_taken_0x22ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF5Cu;
        // 0x22ff60: 0x9382841c  lbu         $v0, -0x7BE4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff5c) {
            ctx->pc = 0x22FF74u;
            goto label_22ff74;
        }
    }
    ctx->pc = 0x22FF64u;
    // 0x22ff64: 0xc0c878a  jal         func_321E28
    ctx->pc = 0x22FF64u;
    SET_GPR_U32(ctx, 31, 0x22FF6Cu);
    ctx->pc = 0x22FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF64u;
    // 0x22ff68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E28u, 0x22FF64u, 0x22FF6Cu)) {
        return;
    }
    ctx->pc = 0x22FF6Cu;
label_22ff6c:
    // 0x22ff6c: 0xa380841d  sb          $zero, -0x7BE3($gp)
    ctx->pc = 0x22ff6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935581), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ff70: 0x9382841c  lbu         $v0, -0x7BE4($gp)
    ctx->pc = 0x22ff70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935580)));
label_22ff74:
    // 0x22ff74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FF74u;
    {
        const bool branch_taken_0x22ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF74u;
        // 0x22ff78: 0x8f858418  lw          $a1, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff74) {
            ctx->pc = 0x22FF8Cu;
            goto label_22ff8c;
        }
    }
    ctx->pc = 0x22FF7Cu;
    // 0x22ff7c: 0xc0c8756  jal         func_321D58
    ctx->pc = 0x22FF7Cu;
    SET_GPR_U32(ctx, 31, 0x22FF84u);
    ctx->pc = 0x22FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF7Cu;
    // 0x22ff80: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321D58u, 0x22FF7Cu, 0x22FF84u)) {
        return;
    }
    ctx->pc = 0x22FF84u;
label_22ff84:
    // 0x22ff84: 0xa380841c  sb          $zero, -0x7BE4($gp)
    ctx->pc = 0x22ff84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935580), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ff88: 0x8f858418  lw          $a1, -0x7BE8($gp)
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_22ff8c:
    // 0x22ff8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ff90: 0xc0c8414  jal         func_321050
    ctx->pc = 0x22FF90u;
    SET_GPR_U32(ctx, 31, 0x22FF98u);
    ctx->pc = 0x22FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF90u;
    // 0x22ff94: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321050u, 0x22FF90u, 0x22FF98u)) {
        return;
    }
    ctx->pc = 0x22FF98u;
label_22ff98:
    // 0x22ff98: 0x8f858414  lw          $a1, -0x7BEC($gp)
    ctx->pc = 0x22ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
    // 0x22ff9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ffa0: 0xc0c8414  jal         func_321050
    ctx->pc = 0x22FFA0u;
    SET_GPR_U32(ctx, 31, 0x22FFA8u);
    ctx->pc = 0x22FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFA0u;
    // 0x22ffa4: 0xaf908418  sw          $s0, -0x7BE8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935576), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321050u, 0x22FFA0u, 0x22FFA8u)) {
        return;
    }
    ctx->pc = 0x22FFA8u;
label_22ffa8:
    // 0x22ffa8: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x22ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x22ffac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ffb0: 0xc0c8408  jal         func_321020
    ctx->pc = 0x22FFB0u;
    SET_GPR_U32(ctx, 31, 0x22FFB8u);
    ctx->pc = 0x22FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFB0u;
    // 0x22ffb4: 0xaf908414  sw          $s0, -0x7BEC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321020u, 0x22FFB0u, 0x22FFB8u)) {
        return;
    }
    ctx->pc = 0x22FFB8u;
label_22ffb8:
    // 0x22ffb8: 0xaf908410  sw          $s0, -0x7BF0($gp)
    ctx->pc = 0x22ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 16));
    // 0x22ffbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ffbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ffc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFC4u;
        // 0x22ffc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FFCCu;
    // 0x22ffcc: 0x0  nop
    ctx->pc = 0x22ffccu;
    // NOP
    ctx->pc = 0x22ffd0u;
}
