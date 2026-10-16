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

// Function: sub_001416D0
// Address: 0x1416d0 - 0x141748
void sub_001416D0_0x1416d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001416D0_0x1416d0");
#endif

    switch (ctx->pc) {
        case 0x1416f8u: goto label_1416f8;
        case 0x14171cu: goto label_14171c;
        case 0x141734u: goto label_141734;
        default: break;
    }

    ctx->pc = 0x1416d0u;

    // 0x1416d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1416d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1416d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1416d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1416d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1416dc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1416DCu;
    {
        const bool branch_taken_0x1416dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1416E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416DCu;
        // 0x1416e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416dc) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x1416E4u;
    // 0x1416e4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1416E4u;
    {
        const bool branch_taken_0x1416e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416E4u;
        // 0x1416e8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416e4) {
            ctx->pc = 0x141724u;
            goto label_141724;
        }
    }
    ctx->pc = 0x1416ECu;
    // 0x1416ec: 0x26100bf0  addiu       $s0, $s0, 0xBF0
    ctx->pc = 0x1416ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3056));
    // 0x1416f0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1416F0u;
    SET_GPR_U32(ctx, 31, 0x1416F8u);
    ctx->pc = 0x1416F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416F0u;
    // 0x1416f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1416F0u, 0x1416F8u)) {
        return;
    }
    ctx->pc = 0x1416F8u;
label_1416f8:
    // 0x1416f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1416f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1416fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1416fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x141700: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x141704: 0xac624850  sw          $v0, 0x4850($v1)
    ctx->pc = 0x141704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4850u, _value); } while (0);
    // 0x141708: 0x24844858  addiu       $a0, $a0, 0x4858
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18520));
    // 0x14170c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141710: 0x24c61748  addiu       $a2, $a2, 0x1748
    ctx->pc = 0x141710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5960));
    // 0x141714: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x141714u;
    SET_GPR_U32(ctx, 31, 0x14171Cu);
    ctx->pc = 0x141718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141714u;
    // 0x141718: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x141714u, 0x14171Cu)) {
        return;
    }
    ctx->pc = 0x14171Cu;
label_14171c:
    // 0x14171c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14171Cu;
    {
        const bool branch_taken_0x14171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14171Cu;
        // 0x141720: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14171c) {
            ctx->pc = 0x141738u;
            goto label_141738;
        }
    }
    ctx->pc = 0x141724u;
label_141724:
    // 0x141724: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x141728: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14172c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x14172Cu;
    SET_GPR_U32(ctx, 31, 0x141734u);
    ctx->pc = 0x141730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14172Cu;
    // 0x141730: 0x24844858  addiu       $a0, $a0, 0x4858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x14172Cu, 0x141734u)) {
        return;
    }
    ctx->pc = 0x141734u;
label_141734:
    // 0x141734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141738:
    // 0x141738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14173c: 0x3e00008  jr          $ra
    ctx->pc = 0x14173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14173Cu;
        // 0x141740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141744u;
    // 0x141744: 0x0  nop
    ctx->pc = 0x141744u;
    // NOP
    ctx->pc = 0x141748u;
}
