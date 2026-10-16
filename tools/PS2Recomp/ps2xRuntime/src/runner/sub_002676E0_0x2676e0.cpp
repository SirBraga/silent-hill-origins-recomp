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

// Function: sub_002676E0
// Address: 0x2676e0 - 0x267748
void sub_002676E0_0x2676e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002676E0_0x2676e0");
#endif

    switch (ctx->pc) {
        case 0x267710u: goto label_267710;
        case 0x267720u: goto label_267720;
        case 0x267730u: goto label_267730;
        case 0x26773cu: goto label_26773c;
        default: break;
    }

    ctx->pc = 0x2676e0u;

    // 0x2676e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2676e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2676e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2676e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2676e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2676ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2676ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2676f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2676F0u;
    {
        const bool branch_taken_0x2676f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F0u;
        // 0x2676f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f0) {
            ctx->pc = 0x267708u;
            goto label_267708;
        }
    }
    ctx->pc = 0x2676F8u;
    // 0x2676f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2676F8u;
    {
        const bool branch_taken_0x2676f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F8u;
        // 0x2676fc: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f8) {
            ctx->pc = 0x267718u;
            goto label_267718;
        }
    }
    ctx->pc = 0x267700u;
    // 0x267700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267700u;
    {
        const bool branch_taken_0x267700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267700u;
        // 0x267704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267700) {
            ctx->pc = 0x267728u;
            goto label_267728;
        }
    }
    ctx->pc = 0x267708u;
label_267708:
    // 0x267708: 0xc099d7a  jal         func_2675E8
    ctx->pc = 0x267708u;
    SET_GPR_U32(ctx, 31, 0x267710u);
    ctx->pc = 0x2675E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2675E8u, 0x267708u, 0x267710u)) {
        return;
    }
    ctx->pc = 0x267710u;
label_267710:
    // 0x267710: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x267710u;
    {
        const bool branch_taken_0x267710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267710u;
        // 0x267714: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267710) {
            ctx->pc = 0x267740u;
            goto label_267740;
        }
    }
    ctx->pc = 0x267718u;
label_267718:
    // 0x267718: 0xc099d8c  jal         func_267630
    ctx->pc = 0x267718u;
    SET_GPR_U32(ctx, 31, 0x267720u);
    ctx->pc = 0x267630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267630u, 0x267718u, 0x267720u)) {
        return;
    }
    ctx->pc = 0x267720u;
label_267720:
    // 0x267720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x267720u;
    {
        const bool branch_taken_0x267720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267720u;
        // 0x267724: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267720) {
            ctx->pc = 0x267740u;
            goto label_267740;
        }
    }
    ctx->pc = 0x267728u;
label_267728:
    // 0x267728: 0xc092848  jal         func_24A120
    ctx->pc = 0x267728u;
    SET_GPR_U32(ctx, 31, 0x267730u);
    ctx->pc = 0x26772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267728u;
    // 0x26772c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x267728u, 0x267730u)) {
        return;
    }
    ctx->pc = 0x267730u;
label_267730:
    // 0x267730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267734: 0xc09281a  jal         func_24A068
    ctx->pc = 0x267734u;
    SET_GPR_U32(ctx, 31, 0x26773Cu);
    ctx->pc = 0x267738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267734u;
    // 0x267738: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x267734u, 0x26773Cu)) {
        return;
    }
    ctx->pc = 0x26773Cu;
label_26773c:
    // 0x26773c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267740:
    // 0x267740: 0x3e00008  jr          $ra
    ctx->pc = 0x267740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267740u;
        // 0x267744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267748u;
}
