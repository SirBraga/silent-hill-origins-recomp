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

// Function: sub_00161FA8
// Address: 0x161fa8 - 0x162040
void sub_00161FA8_0x161fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161FA8_0x161fa8");
#endif

    switch (ctx->pc) {
        case 0x161fd0u: goto label_161fd0;
        case 0x161ff8u: goto label_161ff8;
        case 0x16200cu: goto label_16200c;
        default: break;
    }

    ctx->pc = 0x161fa8u;

    // 0x161fa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161fb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x161fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x161fb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x161fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x161fbc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x161fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x161fc0: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x161fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x161fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161fc8: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x161FC8u;
    SET_GPR_U32(ctx, 31, 0x161FD0u);
    ctx->pc = 0x161FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FC8u;
    // 0x161fcc: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x161FC8u, 0x161FD0u)) {
        return;
    }
    ctx->pc = 0x161FD0u;
label_161fd0:
    // 0x161fd0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x161fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fd4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x161fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x161fd8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x161fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x161fdc: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x161fe0: 0x24633850  addiu       $v1, $v1, 0x3850
    ctx->pc = 0x161fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14416));
    // 0x161fe4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x161fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x161fe8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x161fec: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x161fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x161ff0: 0xac928658  sw          $s2, -0x79A8($a0)
    ctx->pc = 0x161ff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x338658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338658u, _value); } while (0);
    // 0x161ff4: 0x0  nop
    ctx->pc = 0x161ff4u;
    // NOP
label_161ff8:
    // 0x161ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162000: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162004: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x162004u;
    SET_GPR_U32(ctx, 31, 0x16200Cu);
    ctx->pc = 0x162008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162004u;
    // 0x162008: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x162004u, 0x16200Cu)) {
        return;
    }
    ctx->pc = 0x16200Cu;
label_16200c:
    // 0x16200c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x162010: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x162010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x162014: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x162014u;
    {
        const bool branch_taken_0x162014 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x162018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162014u;
        // 0x162018: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162014) {
            ctx->pc = 0x161FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161ff8;
        }
    }
    ctx->pc = 0x16201Cu;
    // 0x16201c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16201cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162020: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x162020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162024: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x162024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16202c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16202cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162034: 0x3e00008  jr          $ra
    ctx->pc = 0x162034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162034u;
        // 0x162038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16203Cu;
    // 0x16203c: 0x0  nop
    ctx->pc = 0x16203cu;
    // NOP
    ctx->pc = 0x162040u;
}
