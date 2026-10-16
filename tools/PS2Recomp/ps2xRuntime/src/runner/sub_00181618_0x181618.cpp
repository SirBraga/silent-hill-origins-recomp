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

// Function: sub_00181618
// Address: 0x181618 - 0x1816c8
void sub_00181618_0x181618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181618_0x181618");
#endif

    ctx->pc = 0x181618u;

    // 0x181618: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x181618u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18161c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181620: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x181620u;
    {
        const bool branch_taken_0x181620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181620) {
            ctx->pc = 0x181624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181620u;
            // 0x181624: 0x8d22003c  lw          $v0, 0x3C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18165Cu;
            goto label_18165c;
        }
    }
    ctx->pc = 0x181628u;
    // 0x181628: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x181628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x18162c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x181630: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x181630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x181634: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x181634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x181638: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x181638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18163c: 0x8d23002c  lw          $v1, 0x2C($t1)
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x181640: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x181644: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x181644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x181648: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18164c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x18164cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x181650: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x181654: 0x3e00008  jr          $ra
    ctx->pc = 0x181654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181654u;
        // 0x181658: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18165Cu;
label_18165c:
    // 0x18165c: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x181660: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x181664: 0x435023  subu        $t2, $v0, $v1
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181668: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18166c: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x18166cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x181670: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181670u;
    {
        const bool branch_taken_0x181670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x8d220030  lw          $v0, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181670) {
            ctx->pc = 0x181690u;
            goto label_181690;
        }
    }
    ctx->pc = 0x181678u;
    // 0x181678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18167c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18167cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x181680: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x181680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x181684: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x181684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x181688: 0x3e00008  jr          $ra
    ctx->pc = 0x181688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181688u;
        // 0x18168c: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181690u;
label_181690:
    // 0x181690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181694: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x181694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x181698: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x181698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x18169c: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1816a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1816a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1816a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1816a8: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1816ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1816acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1816b0: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x1816b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1816b4: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1816b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1816b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1816bc: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x1816bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1816c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1816C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1816C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816C0u;
        // 0x1816c4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1816C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1816C8u;
}
