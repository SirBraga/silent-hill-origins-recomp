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

// Function: sub_001656B8
// Address: 0x1656b8 - 0x165718
void sub_001656B8_0x1656b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001656B8_0x1656b8");
#endif

    switch (ctx->pc) {
        case 0x1656b8u: goto label_1656b8;
        case 0x1656bcu: goto label_1656bc;
        case 0x1656c0u: goto label_1656c0;
        case 0x1656c4u: goto label_1656c4;
        case 0x1656c8u: goto label_1656c8;
        case 0x1656ccu: goto label_1656cc;
        case 0x1656d0u: goto label_1656d0;
        case 0x1656d4u: goto label_1656d4;
        case 0x1656d8u: goto label_1656d8;
        case 0x1656dcu: goto label_1656dc;
        case 0x1656e0u: goto label_1656e0;
        case 0x1656e4u: goto label_1656e4;
        case 0x1656e8u: goto label_1656e8;
        case 0x1656ecu: goto label_1656ec;
        case 0x1656f0u: goto label_1656f0;
        case 0x1656f4u: goto label_1656f4;
        case 0x1656f8u: goto label_1656f8;
        case 0x1656fcu: goto label_1656fc;
        case 0x165700u: goto label_165700;
        case 0x165704u: goto label_165704;
        case 0x165708u: goto label_165708;
        case 0x16570cu: goto label_16570c;
        case 0x165710u: goto label_165710;
        case 0x165714u: goto label_165714;
        default: break;
    }

    ctx->pc = 0x1656b8u;

label_1656b8:
    // 0x1656b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1656bc:
    // 0x1656bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1656c0:
    // 0x1656c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1656c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1656c4:
    // 0x1656c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1656c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1656c8:
    // 0x1656c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1656c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1656cc:
    // 0x1656cc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1656ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1656d0:
    // 0x1656d0: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x1656d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_1656d4:
    // 0x1656d4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1656d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1656d8:
    // 0x1656d8: 0x40f809  jalr        $v0
label_1656dc:
    if (ctx->pc == 0x1656DCu) {
        ctx->pc = 0x1656DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D8u;
        // 0x1656dc: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656E0u;
        goto label_1656e0;
    }
    ctx->pc = 0x1656D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1656E0u);
        ctx->pc = 0x1656DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D8u;
        // 0x1656dc: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1656D8u, 0x1656E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1656E0u;
label_1656e0:
    // 0x1656e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1656e4:
    if (ctx->pc == 0x1656E4u) {
        ctx->pc = 0x1656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656E0u;
        // 0x1656e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656E8u;
        goto label_1656e8;
    }
    ctx->pc = 0x1656E0u;
    {
        const bool branch_taken_0x1656e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656e0) {
            ctx->pc = 0x1656E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656E0u;
            // 0x1656e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165708u;
            goto label_165708;
        }
    }
    ctx->pc = 0x1656E8u;
label_1656e8:
    // 0x1656e8: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x1656e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1656ec:
    // 0x1656ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1656ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1656f0:
    // 0x1656f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1656f4:
    if (ctx->pc == 0x1656F4u) {
        ctx->pc = 0x1656F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F0u;
        // 0x1656f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656F8u;
        goto label_1656f8;
    }
    ctx->pc = 0x1656F0u;
    {
        const bool branch_taken_0x1656f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656f0) {
            ctx->pc = 0x1656F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656F0u;
            // 0x1656f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165708u;
            goto label_165708;
        }
    }
    ctx->pc = 0x1656F8u;
label_1656f8:
    // 0x1656f8: 0xc0808b8  jal         func_2022E0
label_1656fc:
    if (ctx->pc == 0x1656FCu) {
        ctx->pc = 0x165700u;
        goto label_165700;
    }
    ctx->pc = 0x1656F8u;
    SET_GPR_U32(ctx, 31, 0x165700u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1656F8u, 0x165700u)) {
        return;
    }
    ctx->pc = 0x165700u;
label_165700:
    // 0x165700: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_165704:
    // 0x165704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165708:
    // 0x165708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16570c:
    // 0x16570c: 0x3e00008  jr          $ra
label_165710:
    if (ctx->pc == 0x165710u) {
        ctx->pc = 0x165710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16570Cu;
        // 0x165710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165714u;
        goto label_165714;
    }
    ctx->pc = 0x16570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16570Cu;
        // 0x165710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16570Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165714u;
label_165714:
    // 0x165714: 0x0  nop
    ctx->pc = 0x165714u;
    // NOP
    ctx->pc = 0x165718u;
}
