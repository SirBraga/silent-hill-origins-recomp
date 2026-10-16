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

// Function: sub_0019DE00
// Address: 0x19de00 - 0x19deb0
void sub_0019DE00_0x19de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DE00_0x19de00");
#endif

    switch (ctx->pc) {
        case 0x19de24u: goto label_19de24;
        case 0x19de30u: goto label_19de30;
        case 0x19de40u: goto label_19de40;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de54u: goto label_19de54;
        case 0x19de60u: goto label_19de60;
        case 0x19de68u: goto label_19de68;
        case 0x19de70u: goto label_19de70;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de90u: goto label_19de90;
        default: break;
    }

    ctx->pc = 0x19de00u;

    // 0x19de00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19de04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19de08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19de0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19de10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19de14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19de18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19de1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19DE1Cu;
    SET_GPR_U32(ctx, 31, 0x19DE24u);
    ctx->pc = 0x19DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE1Cu;
    // 0x19de20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19DE1Cu, 0x19DE24u)) {
        return;
    }
    ctx->pc = 0x19DE24u;
label_19de24:
    // 0x19de24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19de24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de28: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19DE28u;
    SET_GPR_U32(ctx, 31, 0x19DE30u);
    ctx->pc = 0x19DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE28u;
    // 0x19de2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19DE28u, 0x19DE30u)) {
        return;
    }
    ctx->pc = 0x19DE30u;
label_19de30:
    // 0x19de30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19de34: 0x2463aba8  addiu       $v1, $v1, -0x5458
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945704));
    // 0x19de38: 0xc0776d8  jal         func_1DDB60
    ctx->pc = 0x19DE38u;
    SET_GPR_U32(ctx, 31, 0x19DE40u);
    ctx->pc = 0x19DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE38u;
    // 0x19de3c: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB60u, 0x19DE38u, 0x19DE40u)) {
        return;
    }
    ctx->pc = 0x19DE40u;
label_19de40:
    // 0x19de40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19de40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de44: 0xc0bba22  jal         func_2EE888
    ctx->pc = 0x19DE44u;
    SET_GPR_U32(ctx, 31, 0x19DE4Cu);
    ctx->pc = 0x19DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE44u;
    // 0x19de48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE888u, 0x19DE44u, 0x19DE4Cu)) {
        return;
    }
    ctx->pc = 0x19DE4Cu;
label_19de4c:
    // 0x19de4c: 0xc07b834  jal         func_1EE0D0
    ctx->pc = 0x19DE4Cu;
    SET_GPR_U32(ctx, 31, 0x19DE54u);
    ctx->pc = 0x1EE0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0D0u, 0x19DE4Cu, 0x19DE54u)) {
        return;
    }
    ctx->pc = 0x19DE54u;
label_19de54:
    // 0x19de54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19de54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de58: 0xc0bba22  jal         func_2EE888
    ctx->pc = 0x19DE58u;
    SET_GPR_U32(ctx, 31, 0x19DE60u);
    ctx->pc = 0x19DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE58u;
    // 0x19de5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE888u, 0x19DE58u, 0x19DE60u)) {
        return;
    }
    ctx->pc = 0x19DE60u;
label_19de60:
    // 0x19de60: 0xc09567e  jal         func_2559F8
    ctx->pc = 0x19DE60u;
    SET_GPR_U32(ctx, 31, 0x19DE68u);
    ctx->pc = 0x19DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE60u;
    // 0x19de64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2559F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2559F8u, 0x19DE60u, 0x19DE68u)) {
        return;
    }
    ctx->pc = 0x19DE68u;
label_19de68:
    // 0x19de68: 0xc076198  jal         func_1D8660
    ctx->pc = 0x19DE68u;
    SET_GPR_U32(ctx, 31, 0x19DE70u);
    ctx->pc = 0x19DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE68u;
    // 0x19de6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8660u, 0x19DE68u, 0x19DE70u)) {
        return;
    }
    ctx->pc = 0x19DE70u;
label_19de70:
    // 0x19de70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19de70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de74: 0xc0a4b48  jal         func_292D20
    ctx->pc = 0x19DE74u;
    SET_GPR_U32(ctx, 31, 0x19DE7Cu);
    ctx->pc = 0x19DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE74u;
    // 0x19de78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x292D20u, 0x19DE74u, 0x19DE7Cu)) {
        return;
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19de80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19de80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19de84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de88: 0xc09545a  jal         func_255168
    ctx->pc = 0x19DE88u;
    SET_GPR_U32(ctx, 31, 0x19DE90u);
    ctx->pc = 0x19DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE88u;
    // 0x19de8c: 0x24a5dbc0  addiu       $a1, $a1, -0x2440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x19DE88u, 0x19DE90u)) {
        return;
    }
    ctx->pc = 0x19DE90u;
label_19de90:
    // 0x19de90: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x19de90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x19de94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19de98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19de9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19de9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dea0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19dea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dea8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEA8u;
        // 0x19deac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DEB0u;
}
