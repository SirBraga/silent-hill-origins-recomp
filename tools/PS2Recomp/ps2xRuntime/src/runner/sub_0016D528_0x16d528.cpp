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

// Function: sub_0016D528
// Address: 0x16d528 - 0x16d5b0
void sub_0016D528_0x16d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D528_0x16d528");
#endif

    switch (ctx->pc) {
        case 0x16d568u: goto label_16d568;
        case 0x16d574u: goto label_16d574;
        case 0x16d57cu: goto label_16d57c;
        case 0x16d588u: goto label_16d588;
        case 0x16d594u: goto label_16d594;
        default: break;
    }

    ctx->pc = 0x16d528u;

    // 0x16d528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d52c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16d530: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d534: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16d538: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d53c: 0x24424c90  addiu       $v0, $v0, 0x4C90
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19600));
    // 0x16d540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d54c: 0x24634cb0  addiu       $v1, $v1, 0x4CB0
    ctx->pc = 0x16d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19632));
    // 0x16d550: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x16d550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x16d554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16d554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d558: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x16d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16d55c: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x16d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x16d560: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16D560u;
    SET_GPR_U32(ctx, 31, 0x16D568u);
    ctx->pc = 0x16D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D560u;
    // 0x16d564: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16D560u, 0x16D568u)) {
        return;
    }
    ctx->pc = 0x16D568u;
label_16d568:
    // 0x16d568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d56c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16D56Cu;
    SET_GPR_U32(ctx, 31, 0x16D574u);
    ctx->pc = 0x16D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D56Cu;
    // 0x16d570: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16D56Cu, 0x16D574u)) {
        return;
    }
    ctx->pc = 0x16D574u;
label_16d574:
    // 0x16d574: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16D574u;
    SET_GPR_U32(ctx, 31, 0x16D57Cu);
    ctx->pc = 0x16D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D574u;
    // 0x16d578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16D574u, 0x16D57Cu)) {
        return;
    }
    ctx->pc = 0x16D57Cu;
label_16d57c:
    // 0x16d57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d580: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16D580u;
    SET_GPR_U32(ctx, 31, 0x16D588u);
    ctx->pc = 0x16D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D580u;
    // 0x16d584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16D580u, 0x16D588u)) {
        return;
    }
    ctx->pc = 0x16D588u;
label_16d588:
    // 0x16d588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d58c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16D58Cu;
    SET_GPR_U32(ctx, 31, 0x16D594u);
    ctx->pc = 0x16D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D58Cu;
    // 0x16d590: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16D58Cu, 0x16D594u)) {
        return;
    }
    ctx->pc = 0x16D594u;
label_16d594:
    // 0x16d594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d59c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5A4u;
        // 0x16d5a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D5ACu;
    // 0x16d5ac: 0x0  nop
    ctx->pc = 0x16d5acu;
    // NOP
    ctx->pc = 0x16d5b0u;
}
