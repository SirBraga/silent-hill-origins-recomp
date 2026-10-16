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

// Function: sub_00196A98
// Address: 0x196a98 - 0x196b48
void sub_00196A98_0x196a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196A98_0x196a98");
#endif

    switch (ctx->pc) {
        case 0x196ac0u: goto label_196ac0;
        case 0x196ad0u: goto label_196ad0;
        case 0x196ae0u: goto label_196ae0;
        case 0x196af4u: goto label_196af4;
        case 0x196b10u: goto label_196b10;
        case 0x196b2cu: goto label_196b2c;
        default: break;
    }

    ctx->pc = 0x196a98u;

    // 0x196a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x196a9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196aa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x196aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x196aa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196ab0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x196ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x196ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196ab8: 0xc093546  jal         func_24D518
    ctx->pc = 0x196AB8u;
    SET_GPR_U32(ctx, 31, 0x196AC0u);
    ctx->pc = 0x196ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AB8u;
    // 0x196abc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196AB8u, 0x196AC0u)) {
        return;
    }
    ctx->pc = 0x196AC0u;
label_196ac0:
    // 0x196ac0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x196ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x196ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ac8: 0xc093546  jal         func_24D518
    ctx->pc = 0x196AC8u;
    SET_GPR_U32(ctx, 31, 0x196AD0u);
    ctx->pc = 0x196ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AC8u;
    // 0x196acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196AC8u, 0x196AD0u)) {
        return;
    }
    ctx->pc = 0x196AD0u;
label_196ad0:
    // 0x196ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ad4: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x196ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x196ad8: 0xc093546  jal         func_24D518
    ctx->pc = 0x196AD8u;
    SET_GPR_U32(ctx, 31, 0x196AE0u);
    ctx->pc = 0x196ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AD8u;
    // 0x196adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196AD8u, 0x196AE0u)) {
        return;
    }
    ctx->pc = 0x196AE0u;
label_196ae0:
    // 0x196ae0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x196ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196ae4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x196AE4u;
    {
        const bool branch_taken_0x196ae4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x196AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE4u;
        // 0x196ae8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ae4) {
            ctx->pc = 0x196B2Cu;
            goto label_196b2c;
        }
    }
    ctx->pc = 0x196AECu;
    // 0x196aec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x196AECu;
    SET_GPR_U32(ctx, 31, 0x196AF4u);
    ctx->pc = 0x196AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AECu;
    // 0x196af0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x196AECu, 0x196AF4u)) {
        return;
    }
    ctx->pc = 0x196AF4u;
label_196af4:
    // 0x196af4: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x196af8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196afc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196b04: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x196b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x196b08: 0xc080924  jal         func_202490
    ctx->pc = 0x196B08u;
    SET_GPR_U32(ctx, 31, 0x196B10u);
    ctx->pc = 0x196B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B08u;
    // 0x196b0c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x196B08u, 0x196B10u)) {
        return;
    }
    ctx->pc = 0x196B10u;
label_196b10:
    // 0x196b10: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x196b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b1c: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x196b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x196b20: 0x3012  mflo        $a2
    ctx->pc = 0x196b20u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x196b24: 0xc093546  jal         func_24D518
    ctx->pc = 0x196B24u;
    SET_GPR_U32(ctx, 31, 0x196B2Cu);
    ctx->pc = 0x196B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B24u;
    // 0x196b28: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196B24u, 0x196B2Cu)) {
        return;
    }
    ctx->pc = 0x196B2Cu;
label_196b2c:
    // 0x196b2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x196b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x196b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196b34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x196b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196b40: 0x3e00008  jr          $ra
    ctx->pc = 0x196B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B40u;
        // 0x196b44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196B48u;
}
