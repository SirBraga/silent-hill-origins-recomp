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

// Function: sub_00203278
// Address: 0x203278 - 0x203300
void sub_00203278_0x203278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203278_0x203278");
#endif

    switch (ctx->pc) {
        case 0x2032a8u: goto label_2032a8;
        case 0x2032e0u: goto label_2032e0;
        default: break;
    }

    ctx->pc = 0x203278u;

    // 0x203278: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x203278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20327c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20327cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203280: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203284: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x203284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x203288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203288u;
    {
        const bool branch_taken_0x203288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203288) {
            ctx->pc = 0x2032A0u;
            goto label_2032a0;
        }
    }
    ctx->pc = 0x203290u;
    // 0x203290: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x203294: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x203294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x203298: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203298u;
    {
        const bool branch_taken_0x203298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203298u;
        // 0x20329c: 0xe32023  subu        $a0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203298) {
            ctx->pc = 0x2032B0u;
            goto label_2032b0;
        }
    }
    ctx->pc = 0x2032A0u;
label_2032a0:
    // 0x2032a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2032A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A0u;
        // 0x2032a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2032A8u;
label_2032a8:
    // 0x2032a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2032A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2032ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A8u;
        // 0x2032ac: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2032B0u;
label_2032b0:
    // 0x2032b0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2032b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2032b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2032b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2032b8: 0x24821fff  addiu       $v0, $a0, 0x1FFF
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8191));
    // 0x2032bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2032bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2032c0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2032c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2032c4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x2032c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2032cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2032d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2032d4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2032D4u;
    {
        const bool branch_taken_0x2032d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032d4) {
            ctx->pc = 0x2032F8u;
            goto label_2032f8;
        }
    }
    ctx->pc = 0x2032DCu;
    // 0x2032dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2032e0:
    // 0x2032e0: 0x1047fff1  beq         $v0, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2032E0u;
    {
        const bool branch_taken_0x2032e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2032e0) {
            ctx->pc = 0x2032A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2032a8;
        }
    }
    ctx->pc = 0x2032E8u;
    // 0x2032e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2032ec: 0x0  nop
    ctx->pc = 0x2032ecu;
    // NOP
    // 0x2032f0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2032F0u;
    {
        const bool branch_taken_0x2032f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2032f0) {
            ctx->pc = 0x2032F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2032F0u;
            // 0x2032f4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2032E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2032e0;
        }
    }
    ctx->pc = 0x2032F8u;
label_2032f8:
    // 0x2032f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2032F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F8u;
        // 0x2032fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203300u;
}
