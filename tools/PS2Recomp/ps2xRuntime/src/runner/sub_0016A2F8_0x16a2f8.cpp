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

// Function: sub_0016A2F8
// Address: 0x16a2f8 - 0x16a380
void sub_0016A2F8_0x16a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A2F8_0x16a2f8");
#endif

    switch (ctx->pc) {
        case 0x16a338u: goto label_16a338;
        case 0x16a344u: goto label_16a344;
        case 0x16a34cu: goto label_16a34c;
        case 0x16a358u: goto label_16a358;
        case 0x16a364u: goto label_16a364;
        default: break;
    }

    ctx->pc = 0x16a2f8u;

    // 0x16a2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a2fc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16a304: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16a308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a30c: 0x24424538  addiu       $v0, $v0, 0x4538
    ctx->pc = 0x16a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17720));
    // 0x16a310: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16a314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a31c: 0x24634558  addiu       $v1, $v1, 0x4558
    ctx->pc = 0x16a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17752));
    // 0x16a320: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x16a320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x16a324: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16a324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a328: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x16a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16a32c: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16a330: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16A330u;
    SET_GPR_U32(ctx, 31, 0x16A338u);
    ctx->pc = 0x16A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A330u;
    // 0x16a334: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16A330u, 0x16A338u)) {
        return;
    }
    ctx->pc = 0x16A338u;
label_16a338:
    // 0x16a338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a33c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16A33Cu;
    SET_GPR_U32(ctx, 31, 0x16A344u);
    ctx->pc = 0x16A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A33Cu;
    // 0x16a340: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16A33Cu, 0x16A344u)) {
        return;
    }
    ctx->pc = 0x16A344u;
label_16a344:
    // 0x16a344: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16A344u;
    SET_GPR_U32(ctx, 31, 0x16A34Cu);
    ctx->pc = 0x16A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A344u;
    // 0x16a348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16A344u, 0x16A34Cu)) {
        return;
    }
    ctx->pc = 0x16A34Cu;
label_16a34c:
    // 0x16a34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a350: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16A350u;
    SET_GPR_U32(ctx, 31, 0x16A358u);
    ctx->pc = 0x16A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A350u;
    // 0x16a354: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16A350u, 0x16A358u)) {
        return;
    }
    ctx->pc = 0x16A358u;
label_16a358:
    // 0x16a358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a35c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16A35Cu;
    SET_GPR_U32(ctx, 31, 0x16A364u);
    ctx->pc = 0x16A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A35Cu;
    // 0x16a360: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16A35Cu, 0x16A364u)) {
        return;
    }
    ctx->pc = 0x16A364u;
label_16a364:
    // 0x16a364: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16a364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a36c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16a36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a374: 0x3e00008  jr          $ra
    ctx->pc = 0x16A374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A374u;
        // 0x16a378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A37Cu;
    // 0x16a37c: 0x0  nop
    ctx->pc = 0x16a37cu;
    // NOP
    ctx->pc = 0x16a380u;
}
