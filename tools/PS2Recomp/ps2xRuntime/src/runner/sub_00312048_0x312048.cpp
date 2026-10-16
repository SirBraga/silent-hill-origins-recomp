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

// Function: sub_00312048
// Address: 0x312048 - 0x3120a0
void sub_00312048_0x312048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312048_0x312048");
#endif

    switch (ctx->pc) {
        case 0x31206cu: goto label_31206c;
        case 0x312074u: goto label_312074;
        case 0x31207cu: goto label_31207c;
        default: break;
    }

    ctx->pc = 0x312048u;

    // 0x312048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31204c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312058: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x312058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31205c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31205Cu;
    {
        const bool branch_taken_0x31205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31205c) {
            ctx->pc = 0x31206Cu;
            goto label_31206c;
        }
    }
    ctx->pc = 0x312064u;
    // 0x312064: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x312064u;
    SET_GPR_U32(ctx, 31, 0x31206Cu);
    ctx->pc = 0x312068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312064u;
    // 0x312068: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x312064u, 0x31206Cu)) {
        return;
    }
    ctx->pc = 0x31206Cu;
label_31206c:
    // 0x31206c: 0xc0c845c  jal         func_321170
    ctx->pc = 0x31206Cu;
    SET_GPR_U32(ctx, 31, 0x312074u);
    ctx->pc = 0x312070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31206Cu;
    // 0x312070: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321170u, 0x31206Cu, 0x312074u)) {
        return;
    }
    ctx->pc = 0x312074u;
label_312074:
    // 0x312074: 0xc0c844c  jal         func_321130
    ctx->pc = 0x312074u;
    SET_GPR_U32(ctx, 31, 0x31207Cu);
    ctx->pc = 0x312078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312074u;
    // 0x312078: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321130u, 0x312074u, 0x31207Cu)) {
        return;
    }
    ctx->pc = 0x31207Cu;
label_31207c:
    // 0x31207c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31207cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312084: 0x3e00008  jr          $ra
    ctx->pc = 0x312084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312084u;
        // 0x312088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31208Cu;
    // 0x31208c: 0x0  nop
    ctx->pc = 0x31208cu;
    // NOP
    // 0x312090: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x312090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312094: 0x0  nop
    ctx->pc = 0x312094u;
    // NOP
    // 0x312098: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x312098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31209c: 0x0  nop
    ctx->pc = 0x31209cu;
    // NOP
    ctx->pc = 0x3120a0u;
}
