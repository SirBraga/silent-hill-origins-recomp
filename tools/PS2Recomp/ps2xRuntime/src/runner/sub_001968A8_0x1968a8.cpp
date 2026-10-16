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

// Function: sub_001968A8
// Address: 0x1968a8 - 0x196938
void sub_001968A8_0x1968a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001968A8_0x1968a8");
#endif

    switch (ctx->pc) {
        case 0x1968c8u: goto label_1968c8;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968f8u: goto label_1968f8;
        case 0x196908u: goto label_196908;
        case 0x196920u: goto label_196920;
        default: break;
    }

    ctx->pc = 0x1968a8u;

    // 0x1968a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1968ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1968acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1968b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1968b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1968b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1968b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1968b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1968bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1968bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1968c0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1968C0u;
    SET_GPR_U32(ctx, 31, 0x1968C8u);
    ctx->pc = 0x1968C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968C0u;
    // 0x1968c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1968C0u, 0x1968C8u)) {
        return;
    }
    ctx->pc = 0x1968C8u;
label_1968c8:
    // 0x1968c8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1968c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1968cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1968ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1968d0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1968D0u;
    SET_GPR_U32(ctx, 31, 0x1968D8u);
    ctx->pc = 0x1968D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968D0u;
    // 0x1968d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1968D0u, 0x1968D8u)) {
        return;
    }
    ctx->pc = 0x1968D8u;
label_1968d8:
    // 0x1968d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1968dc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1968DCu;
    SET_GPR_U32(ctx, 31, 0x1968E4u);
    ctx->pc = 0x1968E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968DCu;
    // 0x1968e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1968DCu, 0x1968E4u)) {
        return;
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1968e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1968ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1968ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968f0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1968F0u;
    SET_GPR_U32(ctx, 31, 0x1968F8u);
    ctx->pc = 0x1968F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968F0u;
    // 0x1968f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1968F0u, 0x1968F8u)) {
        return;
    }
    ctx->pc = 0x1968F8u;
label_1968f8:
    // 0x1968f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1968fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1968fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196900: 0xc080924  jal         func_202490
    ctx->pc = 0x196900u;
    SET_GPR_U32(ctx, 31, 0x196908u);
    ctx->pc = 0x196904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196900u;
    // 0x196904: 0x42140  sll         $a0, $a0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x196900u, 0x196908u)) {
        return;
    }
    ctx->pc = 0x196908u;
label_196908:
    // 0x196908: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196914: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x196914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x196918: 0xc093546  jal         func_24D518
    ctx->pc = 0x196918u;
    SET_GPR_U32(ctx, 31, 0x196920u);
    ctx->pc = 0x19691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196918u;
    // 0x19691c: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196918u, 0x196920u)) {
        return;
    }
    ctx->pc = 0x196920u;
label_196920:
    // 0x196920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196924: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196928: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19692c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196930: 0x3e00008  jr          $ra
    ctx->pc = 0x196930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196930u;
        // 0x196934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196938u;
}
