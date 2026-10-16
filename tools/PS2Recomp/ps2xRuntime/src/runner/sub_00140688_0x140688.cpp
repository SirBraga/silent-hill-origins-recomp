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

// Function: sub_00140688
// Address: 0x140688 - 0x140768
void sub_00140688_0x140688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140688_0x140688");
#endif

    switch (ctx->pc) {
        case 0x1406dcu: goto label_1406dc;
        case 0x1406ecu: goto label_1406ec;
        case 0x1406fcu: goto label_1406fc;
        case 0x140704u: goto label_140704;
        case 0x14070cu: goto label_14070c;
        case 0x140714u: goto label_140714;
        case 0x140720u: goto label_140720;
        case 0x14072cu: goto label_14072c;
        case 0x140738u: goto label_140738;
        case 0x140744u: goto label_140744;
        default: break;
    }

    ctx->pc = 0x140688u;

    // 0x140688: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x140688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14068c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x140690: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x140690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x140694: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x140694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x140698: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x140698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14069c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14069cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1406a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1406a4: 0x24420ab8  addiu       $v0, $v0, 0xAB8
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2744));
    // 0x1406a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1406a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1406ac: 0x24630ad8  addiu       $v1, $v1, 0xAD8
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2776));
    // 0x1406b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1406b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1406b4: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x1406b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1406b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1406b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1406bc: 0x26340054  addiu       $s4, $s1, 0x54
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1406c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1406c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1406c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1406c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406c8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1406c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1406cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1406ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406d0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1406d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1406d4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1406D4u;
    SET_GPR_U32(ctx, 31, 0x1406DCu);
    ctx->pc = 0x1406D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406D4u;
    // 0x1406d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1406D4u, 0x1406DCu)) {
        return;
    }
    ctx->pc = 0x1406DCu;
label_1406dc:
    // 0x1406dc: 0x2633005c  addiu       $s3, $s1, 0x5C
    ctx->pc = 0x1406dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1406e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1406e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1406E4u;
    SET_GPR_U32(ctx, 31, 0x1406ECu);
    ctx->pc = 0x1406E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406E4u;
    // 0x1406e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1406E4u, 0x1406ECu)) {
        return;
    }
    ctx->pc = 0x1406ECu;
label_1406ec:
    // 0x1406ec: 0x26300064  addiu       $s0, $s1, 0x64
    ctx->pc = 0x1406ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1406f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1406f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1406F4u;
    SET_GPR_U32(ctx, 31, 0x1406FCu);
    ctx->pc = 0x1406F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406F4u;
    // 0x1406f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1406F4u, 0x1406FCu)) {
        return;
    }
    ctx->pc = 0x1406FCu;
label_1406fc:
    // 0x1406fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1406FCu;
    SET_GPR_U32(ctx, 31, 0x140704u);
    ctx->pc = 0x140700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406FCu;
    // 0x140700: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1406FCu, 0x140704u)) {
        return;
    }
    ctx->pc = 0x140704u;
label_140704:
    // 0x140704: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x140704u;
    SET_GPR_U32(ctx, 31, 0x14070Cu);
    ctx->pc = 0x140708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140704u;
    // 0x140708: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x140704u, 0x14070Cu)) {
        return;
    }
    ctx->pc = 0x14070Cu;
label_14070c:
    // 0x14070c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14070Cu;
    SET_GPR_U32(ctx, 31, 0x140714u);
    ctx->pc = 0x140710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14070Cu;
    // 0x140710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14070Cu, 0x140714u)) {
        return;
    }
    ctx->pc = 0x140714u;
label_140714:
    // 0x140714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140718: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x140718u;
    SET_GPR_U32(ctx, 31, 0x140720u);
    ctx->pc = 0x14071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140718u;
    // 0x14071c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x140718u, 0x140720u)) {
        return;
    }
    ctx->pc = 0x140720u;
label_140720:
    // 0x140720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140724: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x140724u;
    SET_GPR_U32(ctx, 31, 0x14072Cu);
    ctx->pc = 0x140728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140724u;
    // 0x140728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x140724u, 0x14072Cu)) {
        return;
    }
    ctx->pc = 0x14072Cu;
label_14072c:
    // 0x14072c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140730: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x140730u;
    SET_GPR_U32(ctx, 31, 0x140738u);
    ctx->pc = 0x140734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140730u;
    // 0x140734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x140730u, 0x140738u)) {
        return;
    }
    ctx->pc = 0x140738u;
label_140738:
    // 0x140738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14073c: 0xc05005a  jal         func_140168
    ctx->pc = 0x14073Cu;
    SET_GPR_U32(ctx, 31, 0x140744u);
    ctx->pc = 0x140740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14073Cu;
    // 0x140740: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140168u, 0x14073Cu, 0x140744u)) {
        return;
    }
    ctx->pc = 0x140744u;
label_140744:
    // 0x140744: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x140744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140748: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x140748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14074c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14074cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140754: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x140754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140758: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x140758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14075c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140760: 0x3e00008  jr          $ra
    ctx->pc = 0x140760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140760u;
        // 0x140764: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140768u;
}
