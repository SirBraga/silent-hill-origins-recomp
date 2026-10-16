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

// Function: sub_00174028
// Address: 0x174028 - 0x174070
void sub_00174028_0x174028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174028_0x174028");
#endif

    switch (ctx->pc) {
        case 0x174044u: goto label_174044;
        case 0x174050u: goto label_174050;
        default: break;
    }

    ctx->pc = 0x174028u;

    // 0x174028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17402c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17402cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17403c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17403Cu;
    SET_GPR_U32(ctx, 31, 0x174044u);
    ctx->pc = 0x174040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17403Cu;
    // 0x174040: 0x240400ec  addiu       $a0, $zero, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17403Cu, 0x174044u)) {
        return;
    }
    ctx->pc = 0x174044u;
label_174044:
    // 0x174044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174048: 0xc05d01c  jal         func_174070
    ctx->pc = 0x174048u;
    SET_GPR_U32(ctx, 31, 0x174050u);
    ctx->pc = 0x17404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174048u;
    // 0x17404c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174070u, 0x174048u, 0x174050u)) {
        return;
    }
    ctx->pc = 0x174050u;
label_174050:
    // 0x174050: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x174054: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174058: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x174058u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17405c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174060: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x174060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174064: 0x3e00008  jr          $ra
    ctx->pc = 0x174064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174064u;
        // 0x174068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17406Cu;
    // 0x17406c: 0x0  nop
    ctx->pc = 0x17406cu;
    // NOP
    ctx->pc = 0x174070u;
}
