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

// Function: sub_001BE3C0
// Address: 0x1be3c0 - 0x1be488
void sub_001BE3C0_0x1be3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE3C0_0x1be3c0");
#endif

    switch (ctx->pc) {
        case 0x1be3f0u: goto label_1be3f0;
        case 0x1be418u: goto label_1be418;
        case 0x1be428u: goto label_1be428;
        case 0x1be460u: goto label_1be460;
        case 0x1be470u: goto label_1be470;
        case 0x1be480u: goto label_1be480;
        default: break;
    }

    ctx->pc = 0x1be3c0u;

    // 0x1be3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be3c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1be3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be3cc: 0x8ce20324  lw          $v0, 0x324($a3)
    ctx->pc = 0x1be3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 804)));
    // 0x1be3d0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BE3D0u;
    {
        const bool branch_taken_0x1be3d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1BE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D0u;
        // 0x1be3d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3d0) {
            ctx->pc = 0x1BE418u;
            goto label_1be418;
        }
    }
    ctx->pc = 0x1BE3D8u;
    // 0x1be3d8: 0x8ce202dc  lw          $v0, 0x2DC($a3)
    ctx->pc = 0x1be3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 732)));
    // 0x1be3dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be3e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE3E0u;
    {
        const bool branch_taken_0x1be3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3E0u;
        // 0x1be3e4: 0x24e602f0  addiu       $a2, $a3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3e0) {
            ctx->pc = 0x1BE408u;
            goto label_1be408;
        }
    }
    ctx->pc = 0x1BE3E8u;
    // 0x1be3e8: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x1be3ec: 0x0  nop
    ctx->pc = 0x1be3ecu;
    // NOP
label_1be3f0:
    // 0x1be3f0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE3F0u;
    {
        const bool branch_taken_0x1be3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be3f0) {
            ctx->pc = 0x1BE3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE3F0u;
            // 0x1be3f4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE410u;
            goto label_1be410;
        }
    }
    ctx->pc = 0x1BE3F8u;
    // 0x1be3f8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be3fc: 0x0  nop
    ctx->pc = 0x1be3fcu;
    // NOP
    // 0x1be400: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE400u;
    {
        const bool branch_taken_0x1be400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE400u;
        // 0x1be404: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be400) {
            ctx->pc = 0x1BE3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be3f0;
        }
    }
    ctx->pc = 0x1BE408u;
label_1be408:
    // 0x1be408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be40c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1be40cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x0u));
label_1be410:
    // 0x1be410: 0xc06f124  jal         func_1BC490
    ctx->pc = 0x1BE410u;
    SET_GPR_U32(ctx, 31, 0x1BE418u);
    ctx->pc = 0x1BE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE410u;
    // 0x1be414: 0x8ce40360  lw          $a0, 0x360($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC490u, 0x1BE410u, 0x1BE418u)) {
        return;
    }
    ctx->pc = 0x1BE418u;
label_1be418:
    // 0x1be418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE41Cu;
        // 0x1be420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE424u;
    // 0x1be424: 0x0  nop
    ctx->pc = 0x1be424u;
    // NOP
label_1be428:
    // 0x1be428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be42c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1be42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be430: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1be430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1be434: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BE434u;
    {
        const bool branch_taken_0x1be434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE434u;
        // 0x1be438: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be434) {
            ctx->pc = 0x1BE4A0u;
            return;
        }
    }
    ctx->pc = 0x1BE43Cu;
    // 0x1be43c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be440: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1be444: 0x2442d730  addiu       $v0, $v0, -0x28D0
    ctx->pc = 0x1be444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x1be448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be44c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be450: 0x800008  jr          $a0
    ctx->pc = 0x1BE450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE458u: goto label_1be458;
            case 0x1BE468u: goto label_1be468;
            case 0x1BE478u: goto label_1be478;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE450u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BE458u;
label_1be458:
    // 0x1be458: 0xc06ef46  jal         func_1BBD18
    ctx->pc = 0x1BE458u;
    SET_GPR_U32(ctx, 31, 0x1BE460u);
    ctx->pc = 0x1BE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE458u;
    // 0x1be45c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBD18u, 0x1BE458u, 0x1BE460u)) {
        return;
    }
    ctx->pc = 0x1BE460u;
label_1be460:
    // 0x1be460: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE460u;
    {
        const bool branch_taken_0x1be460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE460u;
        // 0x1be464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be460) {
            ctx->pc = 0x1BE4A4u;
            return;
        }
    }
    ctx->pc = 0x1BE468u;
label_1be468:
    // 0x1be468: 0xc06efb0  jal         func_1BBEC0
    ctx->pc = 0x1BE468u;
    SET_GPR_U32(ctx, 31, 0x1BE470u);
    ctx->pc = 0x1BE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE468u;
    // 0x1be46c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBEC0u, 0x1BE468u, 0x1BE470u)) {
        return;
    }
    ctx->pc = 0x1BE470u;
label_1be470:
    // 0x1be470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE470u;
    {
        const bool branch_taken_0x1be470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE470u;
        // 0x1be474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be470) {
            ctx->pc = 0x1BE4A4u;
            return;
        }
    }
    ctx->pc = 0x1BE478u;
label_1be478:
    // 0x1be478: 0xc06efe2  jal         func_1BBF88
    ctx->pc = 0x1BE478u;
    SET_GPR_U32(ctx, 31, 0x1BE480u);
    ctx->pc = 0x1BE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE478u;
    // 0x1be47c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBF88u, 0x1BE478u, 0x1BE480u)) {
        return;
    }
    ctx->pc = 0x1BE480u;
label_1be480:
    // 0x1be480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE480u;
    {
        const bool branch_taken_0x1be480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE480u;
        // 0x1be484: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be480) {
            ctx->pc = 0x1BE4A4u;
            return;
        }
    }
    ctx->pc = 0x1BE488u;
}
