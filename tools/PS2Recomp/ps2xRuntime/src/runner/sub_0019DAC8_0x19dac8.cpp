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

// Function: sub_0019DAC8
// Address: 0x19dac8 - 0x19db38
void sub_0019DAC8_0x19dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DAC8_0x19dac8");
#endif

    switch (ctx->pc) {
        case 0x19dae8u: goto label_19dae8;
        case 0x19daf4u: goto label_19daf4;
        case 0x19db08u: goto label_19db08;
        case 0x19db1cu: goto label_19db1c;
        default: break;
    }

    ctx->pc = 0x19dac8u;

    // 0x19dac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dacc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19dad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dad4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19dad8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19dadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dae0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19DAE0u;
    SET_GPR_U32(ctx, 31, 0x19DAE8u);
    ctx->pc = 0x19DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAE0u;
    // 0x19dae4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19DAE0u, 0x19DAE8u)) {
        return;
    }
    ctx->pc = 0x19DAE8u;
label_19dae8:
    // 0x19dae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19dae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daec: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19DAECu;
    SET_GPR_U32(ctx, 31, 0x19DAF4u);
    ctx->pc = 0x19DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAECu;
    // 0x19daf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19DAECu, 0x19DAF4u)) {
        return;
    }
    ctx->pc = 0x19DAF4u;
label_19daf4:
    // 0x19daf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19daf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dafc: 0x2463ac48  addiu       $v1, $v1, -0x53B8
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945864));
    // 0x19db00: 0xc094f76  jal         func_253DD8
    ctx->pc = 0x19DB00u;
    SET_GPR_U32(ctx, 31, 0x19DB08u);
    ctx->pc = 0x19DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB00u;
    // 0x19db04: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253DD8u, 0x19DB00u, 0x19DB08u)) {
        return;
    }
    ctx->pc = 0x19DB08u;
label_19db08:
    // 0x19db08: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x19db0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19db0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db10: 0x24846290  addiu       $a0, $a0, 0x6290
    ctx->pc = 0x19db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25232));
    // 0x19db14: 0xc0bba22  jal         func_2EE888
    ctx->pc = 0x19DB14u;
    SET_GPR_U32(ctx, 31, 0x19DB1Cu);
    ctx->pc = 0x19DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB14u;
    // 0x19db18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE888u, 0x19DB14u, 0x19DB1Cu)) {
        return;
    }
    ctx->pc = 0x19DB1Cu;
label_19db1c:
    // 0x19db1c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x19db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x19db20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19db20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19db24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19db28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19db28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19db2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db30: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB30u;
        // 0x19db34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DB38u;
}
