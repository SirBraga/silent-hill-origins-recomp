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

// Function: sub_00249D70
// Address: 0x249d70 - 0x249e08
void sub_00249D70_0x249d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D70_0x249d70");
#endif

    switch (ctx->pc) {
        case 0x249da0u: goto label_249da0;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dccu: goto label_249dcc;
        default: break;
    }

    ctx->pc = 0x249d70u;

    // 0x249d70: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x249d74: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x249d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x249d78: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x249d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x249d7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x249d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d80: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x249d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x249d84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x249d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d88: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x249d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x249d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x249d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d90: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x249d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x249d94: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x249D94u;
    {
        const bool branch_taken_0x249d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D94u;
        // 0x249d98: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d94) {
            ctx->pc = 0x249DE4u;
            goto label_249de4;
        }
    }
    ctx->pc = 0x249D9Cu;
    // 0x249d9c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_249da0:
    // 0x249da0: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x249da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x249da4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x249da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249da8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x249da8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
    // 0x249dac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249db4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x249DB4u;
    SET_GPR_U32(ctx, 31, 0x249DBCu);
    ctx->pc = 0x249DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DB4u;
    // 0x249db8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x249DB4u, 0x249DBCu)) {
        return;
    }
    ctx->pc = 0x249DBCu;
label_249dbc:
    // 0x249dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x249dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249dc4: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x249DC4u;
    SET_GPR_U32(ctx, 31, 0x249DCCu);
    ctx->pc = 0x249DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DC4u;
    // 0x249dc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x249DC4u, 0x249DCCu)) {
        return;
    }
    ctx->pc = 0x249DCCu;
label_249dcc:
    // 0x249dcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249DCCu;
    {
        const bool branch_taken_0x249dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DCCu;
        // 0x249dd0: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dcc) {
            ctx->pc = 0x249DDCu;
            goto label_249ddc;
        }
    }
    ctx->pc = 0x249DD4u;
    // 0x249dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249DE8u;
            goto label_249de8;
        }
    }
    ctx->pc = 0x249DDCu;
label_249ddc:
    // 0x249ddc: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x249DDCu;
    {
        const bool branch_taken_0x249ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DDCu;
        // 0x249de0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ddc) {
            ctx->pc = 0x249DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249da0;
        }
    }
    ctx->pc = 0x249DE4u;
label_249de4:
    // 0x249de4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x249de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_249de8:
    // 0x249de8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x249de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x249dec: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x249decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x249df0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x249df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x249df4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x249df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x249df8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x249df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x249dfc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x249dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x249e00: 0x3e00008  jr          $ra
    ctx->pc = 0x249E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E08u;
}
