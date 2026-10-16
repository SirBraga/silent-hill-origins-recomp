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

// Function: sub_00219978
// Address: 0x219978 - 0x219a30
void sub_00219978_0x219978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219978_0x219978");
#endif

    switch (ctx->pc) {
        case 0x219994u: goto label_219994;
        case 0x21999cu: goto label_21999c;
        case 0x2199acu: goto label_2199ac;
        case 0x2199b4u: goto label_2199b4;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199f0u: goto label_2199f0;
        case 0x219a08u: goto label_219a08;
        case 0x219a18u: goto label_219a18;
        default: break;
    }

    ctx->pc = 0x219978u;

    // 0x219978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21997c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x219980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x219984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21998c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21998Cu;
    SET_GPR_U32(ctx, 31, 0x219994u);
    ctx->pc = 0x219990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21998Cu;
    // 0x219990: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21998Cu, 0x219994u)) {
        return;
    }
    ctx->pc = 0x219994u;
label_219994:
    // 0x219994: 0xc086acc  jal         func_21AB30
    ctx->pc = 0x219994u;
    SET_GPR_U32(ctx, 31, 0x21999Cu);
    ctx->pc = 0x219998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219994u;
    // 0x219998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AB30u, 0x219994u, 0x21999Cu)) {
        return;
    }
    ctx->pc = 0x21999Cu;
label_21999c:
    // 0x21999c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2199a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2199a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2199a4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2199A4u;
    SET_GPR_U32(ctx, 31, 0x2199ACu);
    ctx->pc = 0x2199A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A4u;
    // 0x2199a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2199A4u, 0x2199ACu)) {
        return;
    }
    ctx->pc = 0x2199ACu;
label_2199ac:
    // 0x2199ac: 0xc086bcc  jal         func_21AF30
    ctx->pc = 0x2199ACu;
    SET_GPR_U32(ctx, 31, 0x2199B4u);
    ctx->pc = 0x2199B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199ACu;
    // 0x2199b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF30u, 0x2199ACu, 0x2199B4u)) {
        return;
    }
    ctx->pc = 0x2199B4u;
label_2199b4:
    // 0x2199b4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2199b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2199b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2199bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2199bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2199c0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2199C0u;
    SET_GPR_U32(ctx, 31, 0x2199C8u);
    ctx->pc = 0x2199C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199C0u;
    // 0x2199c4: 0x34843884  ori         $a0, $a0, 0x3884 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14468);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2199C0u, 0x2199C8u)) {
        return;
    }
    ctx->pc = 0x2199C8u;
label_2199c8:
    // 0x2199c8: 0xc086b2a  jal         func_21ACA8
    ctx->pc = 0x2199C8u;
    SET_GPR_U32(ctx, 31, 0x2199D0u);
    ctx->pc = 0x2199CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199C8u;
    // 0x2199cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21ACA8u, 0x2199C8u, 0x2199D0u)) {
        return;
    }
    ctx->pc = 0x2199D0u;
label_2199d0:
    // 0x2199d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2199d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2199d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2199d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2199d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2199d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2199dc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2199dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2199e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2199e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2199e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2199e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2199e8: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x2199E8u;
    SET_GPR_U32(ctx, 31, 0x2199F0u);
    ctx->pc = 0x2199ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199E8u;
    // 0x2199ec: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x2199E8u, 0x2199F0u)) {
        return;
    }
    ctx->pc = 0x2199F0u;
label_2199f0:
    // 0x2199f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2199f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2199f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2199fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x219a00: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x219A00u;
    SET_GPR_U32(ctx, 31, 0x219A08u);
    ctx->pc = 0x219A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A00u;
    // 0x219a04: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x219A00u, 0x219A08u)) {
        return;
    }
    ctx->pc = 0x219A08u;
label_219a08:
    // 0x219a08: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x219a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x219a0c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x219a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x219a10: 0xc086a94  jal         func_21AA50
    ctx->pc = 0x219A10u;
    SET_GPR_U32(ctx, 31, 0x219A18u);
    ctx->pc = 0x219A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A10u;
    // 0x219a14: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AA50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AA50u, 0x219A10u, 0x219A18u)) {
        return;
    }
    ctx->pc = 0x219A18u;
label_219a18:
    // 0x219a18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x219a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a24: 0x3e00008  jr          $ra
    ctx->pc = 0x219A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A24u;
        // 0x219a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A2Cu;
    // 0x219a2c: 0x0  nop
    ctx->pc = 0x219a2cu;
    // NOP
    ctx->pc = 0x219a30u;
}
