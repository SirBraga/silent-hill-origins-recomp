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

// Function: sub_00170070
// Address: 0x170070 - 0x170110
void sub_00170070_0x170070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170070_0x170070");
#endif

    switch (ctx->pc) {
        case 0x1700b4u: goto label_1700b4;
        case 0x1700c0u: goto label_1700c0;
        case 0x1700ccu: goto label_1700cc;
        case 0x1700d8u: goto label_1700d8;
        case 0x1700e4u: goto label_1700e4;
        case 0x1700f0u: goto label_1700f0;
        default: break;
    }

    ctx->pc = 0x170070u;

    // 0x170070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170074: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x170074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x170078: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x170078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17007c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x170080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170088: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x170088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17008c: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x17008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
    // 0x170090: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x170090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x170094: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x170094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x170098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17009c: 0x26320114  addiu       $s2, $s1, 0x114
    ctx->pc = 0x17009cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x1700a0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1700a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1700a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1700a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700a8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1700a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1700ac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1700ACu;
    SET_GPR_U32(ctx, 31, 0x1700B4u);
    ctx->pc = 0x1700B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700ACu;
    // 0x1700b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1700ACu, 0x1700B4u)) {
        return;
    }
    ctx->pc = 0x1700B4u;
label_1700b4:
    // 0x1700b4: 0x2630011c  addiu       $s0, $s1, 0x11C
    ctx->pc = 0x1700b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x1700b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1700B8u;
    SET_GPR_U32(ctx, 31, 0x1700C0u);
    ctx->pc = 0x1700BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700B8u;
    // 0x1700bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1700B8u, 0x1700C0u)) {
        return;
    }
    ctx->pc = 0x1700C0u;
label_1700c0:
    // 0x1700c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1700c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700c4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1700C4u;
    SET_GPR_U32(ctx, 31, 0x1700CCu);
    ctx->pc = 0x1700C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700C4u;
    // 0x1700c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1700C4u, 0x1700CCu)) {
        return;
    }
    ctx->pc = 0x1700CCu;
label_1700cc:
    // 0x1700cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1700ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700d0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1700D0u;
    SET_GPR_U32(ctx, 31, 0x1700D8u);
    ctx->pc = 0x1700D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700D0u;
    // 0x1700d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1700D0u, 0x1700D8u)) {
        return;
    }
    ctx->pc = 0x1700D8u;
label_1700d8:
    // 0x1700d8: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1700dc: 0xc065a70  jal         func_1969C0
    ctx->pc = 0x1700DCu;
    SET_GPR_U32(ctx, 31, 0x1700E4u);
    ctx->pc = 0x1700E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700DCu;
    // 0x1700e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1969C0u, 0x1700DCu, 0x1700E4u)) {
        return;
    }
    ctx->pc = 0x1700E4u;
label_1700e4:
    // 0x1700e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1700e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700e8: 0xc05c2d0  jal         func_170B40
    ctx->pc = 0x1700E8u;
    SET_GPR_U32(ctx, 31, 0x1700F0u);
    ctx->pc = 0x1700ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700E8u;
    // 0x1700ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170B40u, 0x1700E8u, 0x1700F0u)) {
        return;
    }
    ctx->pc = 0x1700F0u;
label_1700f0:
    // 0x1700f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1700f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1700f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1700f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1700f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1700f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1700fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1700fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170104: 0x3e00008  jr          $ra
    ctx->pc = 0x170104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170104u;
        // 0x170108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17010Cu;
    // 0x17010c: 0x0  nop
    ctx->pc = 0x17010cu;
    // NOP
    ctx->pc = 0x170110u;
}
