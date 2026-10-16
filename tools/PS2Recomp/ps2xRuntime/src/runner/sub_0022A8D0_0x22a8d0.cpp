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

// Function: sub_0022A8D0
// Address: 0x22a8d0 - 0x22a958
void sub_0022A8D0_0x22a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A8D0_0x22a8d0");
#endif

    switch (ctx->pc) {
        case 0x22a8d8u: goto label_22a8d8;
        default: break;
    }

    ctx->pc = 0x22a8d0u;

    // 0x22a8d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22A8D0u;
    {
        const bool branch_taken_0x22a8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8D0u;
        // 0x22a8d4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8d0) {
            ctx->pc = 0x22A930u;
            goto label_22a930;
        }
    }
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x22a8dc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22a8e0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x22a8e4: 0x24c2ff9f  addiu       $v0, $a2, -0x61
    ctx->pc = 0x22a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
    // 0x22a8e8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x22a8ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A8ECu;
    {
        const bool branch_taken_0x22a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8ECu;
        // 0x22a8f0: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8ec) {
            ctx->pc = 0x22A900u;
            goto label_22a900;
        }
    }
    ctx->pc = 0x22A8F4u;
    // 0x22a8f4: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x22a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x22a8f8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22a8fc: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x22a8fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_22a900:
    // 0x22a900: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x22a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x22a904: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x22a904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x22a908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A908u;
    {
        const bool branch_taken_0x22a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A908u;
        // 0x22a90c: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a908) {
            ctx->pc = 0x22A918u;
            goto label_22a918;
        }
    }
    ctx->pc = 0x22A910u;
    // 0x22a910: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22a914: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x22a914u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_22a918:
    // 0x22a918: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A918u;
    {
        const bool branch_taken_0x22a918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x22A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A918u;
        // 0x22a91c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a918) {
            ctx->pc = 0x22A928u;
            goto label_22a928;
        }
    }
    ctx->pc = 0x22A920u;
    // 0x22a920: 0x3e00008  jr          $ra
    ctx->pc = 0x22A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A920u;
        // 0x22a924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A928u;
label_22a928:
    // 0x22a928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22a928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22a92c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_22a930:
    // 0x22a930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A930u;
    {
        const bool branch_taken_0x22a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A930u;
        // 0x22a934: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a930) {
            ctx->pc = 0x22A944u;
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A938u;
    // 0x22a938: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x22a938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22a93c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x22A93Cu;
    {
        const bool branch_taken_0x22a93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A93Cu;
        // 0x22a940: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a93c) {
            ctx->pc = 0x22A8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a8d8;
        }
    }
    ctx->pc = 0x22A944u;
label_22a944:
    // 0x22a944: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22a948: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x22a948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22a94c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x22a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x22a950: 0x3e00008  jr          $ra
    ctx->pc = 0x22A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A950u;
        // 0x22a954: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A958u;
}
