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

// Function: sub_002A36D0
// Address: 0x2a36d0 - 0x2a3780
void sub_002A36D0_0x2a36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A36D0_0x2a36d0");
#endif

    switch (ctx->pc) {
        case 0x2a3708u: goto label_2a3708;
        case 0x2a3730u: goto label_2a3730;
        default: break;
    }

    ctx->pc = 0x2a36d0u;

    // 0x2a36d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a36d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a36d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a36dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a36dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a36e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a36e4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2a36e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a36e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a36ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a36ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a36f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a36f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a36f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a36fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A36FCu;
    {
        const bool branch_taken_0x2a36fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36FCu;
        // 0x2a3700: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36fc) {
            ctx->pc = 0x2A3714u;
            goto label_2a3714;
        }
    }
    ctx->pc = 0x2A3704u;
    // 0x2a3704: 0x0  nop
    ctx->pc = 0x2a3704u;
    // NOP
label_2a3708:
    // 0x2a3708: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2a3708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a370c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a370cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a3710: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a3714:
    // 0x2a3714: 0x5a00000d  blezl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3714u;
    {
        const bool branch_taken_0x2a3714 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x2a3714) {
            ctx->pc = 0x2A3718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3714u;
            // 0x2a3718: 0xde220040  ld          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A374Cu;
            goto label_2a374c;
        }
    }
    ctx->pc = 0x2A371Cu;
    // 0x2a371c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2a371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2a3720: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x2a3720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2a3724: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2a3724u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2a3728: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x2A3728u;
    SET_GPR_U32(ctx, 31, 0x2A3730u);
    ctx->pc = 0x2A372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3728u;
    // 0x2a372c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x2A3728u, 0x2A3730u)) {
        return;
    }
    ctx->pc = 0x2A3730u;
label_2a3730:
    // 0x2a3730: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3734: 0x5474fff4  bnel        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A3734u;
    {
        const bool branch_taken_0x2a3734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2a3734) {
            ctx->pc = 0x2A3738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3734u;
            // 0x2a3738: 0x203802f  dsubu       $s0, $s0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3708;
        }
    }
    ctx->pc = 0x2A373Cu;
    // 0x2a373c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a3740: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2a3740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2a3744: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a3744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a3748: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x2a3748u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_2a374c:
    // 0x2a374c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A374Cu;
    {
        const bool branch_taken_0x2a374c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A374Cu;
        // 0x2a3750: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a374c) {
            ctx->pc = 0x2A375Cu;
            goto label_2a375c;
        }
    }
    ctx->pc = 0x2A3754u;
    // 0x2a3754: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x2a3754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2a3758: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x2a3758u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_2a375c:
    // 0x2a375c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a375cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3760: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a3760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3764: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a3764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3768: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a3768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a376c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a376cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3770: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3778: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3778u;
        // 0x2a377c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3780u;
}
