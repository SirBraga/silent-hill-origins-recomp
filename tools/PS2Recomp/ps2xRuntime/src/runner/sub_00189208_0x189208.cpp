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

// Function: sub_00189208
// Address: 0x189208 - 0x1892e8
void sub_00189208_0x189208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189208_0x189208");
#endif

    switch (ctx->pc) {
        case 0x189264u: goto label_189264;
        case 0x18926cu: goto label_18926c;
        case 0x189274u: goto label_189274;
        case 0x18927cu: goto label_18927c;
        case 0x189284u: goto label_189284;
        case 0x18928cu: goto label_18928c;
        case 0x189298u: goto label_189298;
        case 0x1892a4u: goto label_1892a4;
        case 0x1892b0u: goto label_1892b0;
        case 0x1892bcu: goto label_1892bc;
        case 0x1892c8u: goto label_1892c8;
        default: break;
    }

    ctx->pc = 0x189208u;

    // 0x189208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18920c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189210: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x189210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x189214: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189218: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x189218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18921c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18921cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189220: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x189220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x189224: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x189228: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x189228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18922c: 0x24428ba0  addiu       $v0, $v0, -0x7460
    ctx->pc = 0x18922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937504));
    // 0x189230: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x189230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x189234: 0x24638bc0  addiu       $v1, $v1, -0x7440
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937536));
    // 0x189238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18923c: 0x24c68c08  addiu       $a2, $a2, -0x73F8
    ctx->pc = 0x18923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937608));
    // 0x189240: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x189240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x189244: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x189244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189248: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x18924c: 0x26130084  addiu       $s3, $s0, 0x84
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x189250: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x189250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x189254: 0x2612008c  addiu       $s2, $s0, 0x8C
    ctx->pc = 0x189254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x189258: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x189258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x18925c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18925Cu;
    SET_GPR_U32(ctx, 31, 0x189264u);
    ctx->pc = 0x189260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18925Cu;
    // 0x189260: 0x26110094  addiu       $s1, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18925Cu, 0x189264u)) {
        return;
    }
    ctx->pc = 0x189264u;
label_189264:
    // 0x189264: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x189264u;
    SET_GPR_U32(ctx, 31, 0x18926Cu);
    ctx->pc = 0x189268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189264u;
    // 0x189268: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x189264u, 0x18926Cu)) {
        return;
    }
    ctx->pc = 0x18926Cu;
label_18926c:
    // 0x18926c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18926Cu;
    SET_GPR_U32(ctx, 31, 0x189274u);
    ctx->pc = 0x189270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18926Cu;
    // 0x189270: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18926Cu, 0x189274u)) {
        return;
    }
    ctx->pc = 0x189274u;
label_189274:
    // 0x189274: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x189274u;
    SET_GPR_U32(ctx, 31, 0x18927Cu);
    ctx->pc = 0x189278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189274u;
    // 0x189278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x189274u, 0x18927Cu)) {
        return;
    }
    ctx->pc = 0x18927Cu;
label_18927c:
    // 0x18927c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18927Cu;
    SET_GPR_U32(ctx, 31, 0x189284u);
    ctx->pc = 0x189280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18927Cu;
    // 0x189280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18927Cu, 0x189284u)) {
        return;
    }
    ctx->pc = 0x189284u;
label_189284:
    // 0x189284: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x189284u;
    SET_GPR_U32(ctx, 31, 0x18928Cu);
    ctx->pc = 0x189288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189284u;
    // 0x189288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x189284u, 0x18928Cu)) {
        return;
    }
    ctx->pc = 0x18928Cu;
label_18928c:
    // 0x18928c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189290: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x189290u;
    SET_GPR_U32(ctx, 31, 0x189298u);
    ctx->pc = 0x189294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189290u;
    // 0x189294: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x189290u, 0x189298u)) {
        return;
    }
    ctx->pc = 0x189298u;
label_189298:
    // 0x189298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18929c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x18929Cu;
    SET_GPR_U32(ctx, 31, 0x1892A4u);
    ctx->pc = 0x1892A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18929Cu;
    // 0x1892a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x18929Cu, 0x1892A4u)) {
        return;
    }
    ctx->pc = 0x1892A4u;
label_1892a4:
    // 0x1892a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1892a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892a8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1892A8u;
    SET_GPR_U32(ctx, 31, 0x1892B0u);
    ctx->pc = 0x1892ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892A8u;
    // 0x1892ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1892A8u, 0x1892B0u)) {
        return;
    }
    ctx->pc = 0x1892B0u;
label_1892b0:
    // 0x1892b0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1892b4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1892B4u;
    SET_GPR_U32(ctx, 31, 0x1892BCu);
    ctx->pc = 0x1892B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892B4u;
    // 0x1892b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1892B4u, 0x1892BCu)) {
        return;
    }
    ctx->pc = 0x1892BCu;
label_1892bc:
    // 0x1892bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1892bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892c0: 0xc0620d6  jal         func_188358
    ctx->pc = 0x1892C0u;
    SET_GPR_U32(ctx, 31, 0x1892C8u);
    ctx->pc = 0x1892C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892C0u;
    // 0x1892c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188358u, 0x1892C0u, 0x1892C8u)) {
        return;
    }
    ctx->pc = 0x1892C8u;
label_1892c8:
    // 0x1892c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1892c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1892cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1892ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1892d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1892d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1892d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1892d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1892d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1892d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1892dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1892e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1892E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1892E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892E0u;
        // 0x1892e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1892E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1892E8u;
}
