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

// Function: sub_001F7328
// Address: 0x1f7328 - 0x1f73c8
void sub_001F7328_0x1f7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7328_0x1f7328");
#endif

    ctx->pc = 0x1f7328u;

    // 0x1f7328: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1f7328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f732c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7330: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x1f7330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x1f7334: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x1f7334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1f7338: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1f7338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f733c: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x1f733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x1f7340: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1f7340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1f7344: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x1f7344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1f7348: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7348u;
    {
        const bool branch_taken_0x1f7348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7348u;
        // 0x1f734c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7348) {
            ctx->pc = 0x1F7360u;
            goto label_1f7360;
        }
    }
    ctx->pc = 0x1F7350u;
    // 0x1f7350: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7354: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7354u;
        // 0x1f7358: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F735Cu;
    // 0x1f735c: 0x0  nop
    ctx->pc = 0x1f735cu;
    // NOP
label_1f7360:
    // 0x1f7360: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7360u;
    {
        const bool branch_taken_0x1f7360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7360) {
            ctx->pc = 0x1F7364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7360u;
            // 0x1f7364: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F73A0u;
            goto label_1f73a0;
        }
    }
    ctx->pc = 0x1F7368u;
    // 0x1f7368: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7368u;
    {
        const bool branch_taken_0x1f7368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7368u;
        // 0x1f736c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7368) {
            ctx->pc = 0x1F7378u;
            goto label_1f7378;
        }
    }
    ctx->pc = 0x1F7370u;
    // 0x1f7370: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7370u;
        // 0x1f7374: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7378u;
label_1f7378:
    // 0x1f7378: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f737c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f737cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f7380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f7384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7384u;
    {
        const bool branch_taken_0x1f7384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7384u;
        // 0x1f7388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7384) {
            ctx->pc = 0x1F7394u;
            goto label_1f7394;
        }
    }
    ctx->pc = 0x1F738Cu;
    // 0x1f738c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F738Cu;
    {
        const bool branch_taken_0x1f738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F738Cu;
        // 0x1f7390: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f738c) {
            ctx->pc = 0x1F7398u;
            goto label_1f7398;
        }
    }
    ctx->pc = 0x1F7394u;
label_1f7394:
    // 0x1f7394: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f7394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f7398:
    // 0x1f7398: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7398u;
        // 0x1f739c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73A0u;
label_1f73a0:
    // 0x1f73a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f73a4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1f73a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1f73a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f73a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f73ac: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x1f73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x1f73b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f73b4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x1f73b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x1f73b8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f73bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73BCu;
        // 0x1f73c0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73C4u;
    // 0x1f73c4: 0x0  nop
    ctx->pc = 0x1f73c4u;
    // NOP
    ctx->pc = 0x1f73c8u;
}
