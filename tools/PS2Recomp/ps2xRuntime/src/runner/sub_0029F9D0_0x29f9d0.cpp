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

// Function: sub_0029F9D0
// Address: 0x29f9d0 - 0x29fa48
void sub_0029F9D0_0x29f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F9D0_0x29f9d0");
#endif

    switch (ctx->pc) {
        case 0x29f9f4u: goto label_29f9f4;
        case 0x29fa14u: goto label_29fa14;
        case 0x29fa24u: goto label_29fa24;
        case 0x29fa2cu: goto label_29fa2c;
        default: break;
    }

    ctx->pc = 0x29f9d0u;

    // 0x29f9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29f9d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29f9d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29f9e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f9e4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F9E4u;
    {
        const bool branch_taken_0x29f9e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9E4u;
        // 0x29f9e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9e4) {
            ctx->pc = 0x29F9FCu;
            goto label_29f9fc;
        }
    }
    ctx->pc = 0x29F9ECu;
    // 0x29f9ec: 0xc0a7e40  jal         func_29F900
    ctx->pc = 0x29F9ECu;
    SET_GPR_U32(ctx, 31, 0x29F9F4u);
    ctx->pc = 0x29F900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F900u, 0x29F9ECu, 0x29F9F4u)) {
        return;
    }
    ctx->pc = 0x29F9F4u;
label_29f9f4:
    // 0x29f9f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29F9F4u;
    {
        const bool branch_taken_0x29f9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9F4u;
        // 0x29f9f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9f4) {
            ctx->pc = 0x29FA34u;
            goto label_29fa34;
        }
    }
    ctx->pc = 0x29F9FCu;
label_29f9fc:
    // 0x29f9fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29fa00: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x29fa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29fa04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29FA04u;
    {
        const bool branch_taken_0x29fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA04u;
        // 0x29fa08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa04) {
            ctx->pc = 0x29FA30u;
            goto label_29fa30;
        }
    }
    ctx->pc = 0x29FA0Cu;
    // 0x29fa0c: 0xc0a7e40  jal         func_29F900
    ctx->pc = 0x29FA0Cu;
    SET_GPR_U32(ctx, 31, 0x29FA14u);
    ctx->pc = 0x29F900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F900u, 0x29FA0Cu, 0x29FA14u)) {
        return;
    }
    ctx->pc = 0x29FA14u;
label_29fa14:
    // 0x29fa14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29fa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29fa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa1c: 0xc0a7e62  jal         func_29F988
    ctx->pc = 0x29FA1Cu;
    SET_GPR_U32(ctx, 31, 0x29FA24u);
    ctx->pc = 0x29FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA1Cu;
    // 0x29fa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F988u, 0x29FA1Cu, 0x29FA24u)) {
        return;
    }
    ctx->pc = 0x29FA24u;
label_29fa24:
    // 0x29fa24: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x29FA24u;
    SET_GPR_U32(ctx, 31, 0x29FA2Cu);
    ctx->pc = 0x29FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA24u;
    // 0x29fa28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x29FA24u, 0x29FA2Cu)) {
        return;
    }
    ctx->pc = 0x29FA2Cu;
label_29fa2c:
    // 0x29fa2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29fa2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fa30:
    // 0x29fa30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29fa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29fa34:
    // 0x29fa34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29fa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fa38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fa38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x29FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA3Cu;
        // 0x29fa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FA44u;
    // 0x29fa44: 0x0  nop
    ctx->pc = 0x29fa44u;
    // NOP
    ctx->pc = 0x29fa48u;
}
