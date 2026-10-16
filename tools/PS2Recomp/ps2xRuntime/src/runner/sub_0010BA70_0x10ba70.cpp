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

// Function: sub_0010BA70
// Address: 0x10ba70 - 0x10bb40
void sub_0010BA70_0x10ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA70_0x10ba70");
#endif

    switch (ctx->pc) {
        case 0x10bac4u: goto label_10bac4;
        case 0x10bad4u: goto label_10bad4;
        case 0x10bae0u: goto label_10bae0;
        case 0x10bae8u: goto label_10bae8;
        case 0x10baf0u: goto label_10baf0;
        case 0x10baf8u: goto label_10baf8;
        case 0x10bb04u: goto label_10bb04;
        case 0x10bb10u: goto label_10bb10;
        case 0x10bb1cu: goto label_10bb1c;
        default: break;
    }

    ctx->pc = 0x10ba70u;

    // 0x10ba70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10ba74: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10ba78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10ba7c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10ba80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10ba84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ba84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10ba8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10ba8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10ba94: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x10ba98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10ba9c: 0x24639de8  addiu       $v1, $v1, -0x6218
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942184));
    // 0x10baa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10baa4: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x10baa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10baa8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10baac: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x10baacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x10bab0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x10bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x10bab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bab8: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10babc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10BABCu;
    SET_GPR_U32(ctx, 31, 0x10BAC4u);
    ctx->pc = 0x10BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BABCu;
    // 0x10bac0: 0x26330044  addiu       $s3, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10BABCu, 0x10BAC4u)) {
        return;
    }
    ctx->pc = 0x10BAC4u;
label_10bac4:
    // 0x10bac4: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x10bac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x10bac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bacc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10BACCu;
    SET_GPR_U32(ctx, 31, 0x10BAD4u);
    ctx->pc = 0x10BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BACCu;
    // 0x10bad0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10BACCu, 0x10BAD4u)) {
        return;
    }
    ctx->pc = 0x10BAD4u;
label_10bad4:
    // 0x10bad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bad8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10BAD8u;
    SET_GPR_U32(ctx, 31, 0x10BAE0u);
    ctx->pc = 0x10BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAD8u;
    // 0x10badc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10BAD8u, 0x10BAE0u)) {
        return;
    }
    ctx->pc = 0x10BAE0u;
label_10bae0:
    // 0x10bae0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10BAE0u;
    SET_GPR_U32(ctx, 31, 0x10BAE8u);
    ctx->pc = 0x10BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAE0u;
    // 0x10bae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10BAE0u, 0x10BAE8u)) {
        return;
    }
    ctx->pc = 0x10BAE8u;
label_10bae8:
    // 0x10bae8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10BAE8u;
    SET_GPR_U32(ctx, 31, 0x10BAF0u);
    ctx->pc = 0x10BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAE8u;
    // 0x10baec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10BAE8u, 0x10BAF0u)) {
        return;
    }
    ctx->pc = 0x10BAF0u;
label_10baf0:
    // 0x10baf0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10BAF0u;
    SET_GPR_U32(ctx, 31, 0x10BAF8u);
    ctx->pc = 0x10BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAF0u;
    // 0x10baf4: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10BAF0u, 0x10BAF8u)) {
        return;
    }
    ctx->pc = 0x10BAF8u;
label_10baf8:
    // 0x10baf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bafc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10BAFCu;
    SET_GPR_U32(ctx, 31, 0x10BB04u);
    ctx->pc = 0x10BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAFCu;
    // 0x10bb00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10BAFCu, 0x10BB04u)) {
        return;
    }
    ctx->pc = 0x10BB04u;
label_10bb04:
    // 0x10bb04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb08: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10BB08u;
    SET_GPR_U32(ctx, 31, 0x10BB10u);
    ctx->pc = 0x10BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB08u;
    // 0x10bb0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10BB08u, 0x10BB10u)) {
        return;
    }
    ctx->pc = 0x10BB10u;
label_10bb10:
    // 0x10bb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb14: 0xc04f084  jal         func_13C210
    ctx->pc = 0x10BB14u;
    SET_GPR_U32(ctx, 31, 0x10BB1Cu);
    ctx->pc = 0x10BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB14u;
    // 0x10bb18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x10BB14u, 0x10BB1Cu)) {
        return;
    }
    ctx->pc = 0x10BB1Cu;
label_10bb1c:
    // 0x10bb1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10bb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bb20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10bb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bb24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10bb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bb28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10bb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bb2c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10bb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bb34: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB34u;
        // 0x10bb38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB3Cu;
    // 0x10bb3c: 0x0  nop
    ctx->pc = 0x10bb3cu;
    // NOP
    ctx->pc = 0x10bb40u;
}
