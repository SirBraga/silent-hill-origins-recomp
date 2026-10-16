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

// Function: sub_002AD0B8
// Address: 0x2ad0b8 - 0x2ad128
void sub_002AD0B8_0x2ad0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD0B8_0x2ad0b8");
#endif

    ctx->pc = 0x2ad0b8u;

    // 0x2ad0b8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD0B8u;
    {
        const bool branch_taken_0x2ad0b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B8u;
        // 0x2ad0bc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0b8) {
            ctx->pc = 0x2AD0ECu;
            goto label_2ad0ec;
        }
    }
    ctx->pc = 0x2AD0C0u;
    // 0x2ad0c0: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x2ad0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ad0c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad0c8: 0x8ce5005c  lw          $a1, 0x5C($a3)
    ctx->pc = 0x2ad0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x2ad0cc: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ad0d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ad0d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad0d8: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ad0dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad0e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad0e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AD0E4u;
    {
        const bool branch_taken_0x2ad0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0E4u;
        // 0x2ad0e8: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0e4) {
            ctx->pc = 0x2AD118u;
            goto label_2ad118;
        }
    }
    ctx->pc = 0x2AD0ECu;
label_2ad0ec:
    // 0x2ad0ec: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x2ad0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ad0f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad0f4: 0x8ce5005c  lw          $a1, 0x5C($a3)
    ctx->pc = 0x2ad0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x2ad0f8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ad0fc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ad100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad104: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ad108: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad10c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad110: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2ad110u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2ad114: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ad118:
    // 0x2ad118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ad118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ad11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD11Cu;
        // 0x2ad120: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD124u;
    // 0x2ad124: 0x0  nop
    ctx->pc = 0x2ad124u;
    // NOP
    ctx->pc = 0x2ad128u;
}
