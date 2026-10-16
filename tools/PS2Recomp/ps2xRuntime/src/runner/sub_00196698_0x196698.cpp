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

// Function: sub_00196698
// Address: 0x196698 - 0x196780
void sub_00196698_0x196698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196698_0x196698");
#endif

    switch (ctx->pc) {
        case 0x1966c0u: goto label_1966c0;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966ecu: goto label_1966ec;
        case 0x196710u: goto label_196710;
        case 0x196730u: goto label_196730;
        case 0x19673cu: goto label_19673c;
        case 0x196748u: goto label_196748;
        case 0x196760u: goto label_196760;
        case 0x196768u: goto label_196768;
        default: break;
    }

    ctx->pc = 0x196698u;

    // 0x196698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x196698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19669c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1966a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1966a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1966a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1966a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1966a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1966a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966ac: 0x24528060  addiu       $s2, $v0, -0x7FA0
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934624));
    // 0x1966b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1966b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1966b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1966b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1966b8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1966B8u;
    SET_GPR_U32(ctx, 31, 0x1966C0u);
    ctx->pc = 0x1966BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966B8u;
    // 0x1966bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1966B8u, 0x1966C0u)) {
        return;
    }
    ctx->pc = 0x1966C0u;
label_1966c0:
    // 0x1966c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1966C0u;
    {
        const bool branch_taken_0x1966c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966C0u;
        // 0x1966c4: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966c0) {
            ctx->pc = 0x196768u;
            goto label_196768;
        }
    }
    ctx->pc = 0x1966C8u;
    // 0x1966c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1966c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966cc: 0x24a59b20  addiu       $a1, $a1, -0x64E0
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    // 0x1966d0: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1966D0u;
    SET_GPR_U32(ctx, 31, 0x1966D8u);
    ctx->pc = 0x1966D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966D0u;
    // 0x1966d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1966D0u, 0x1966D8u)) {
        return;
    }
    ctx->pc = 0x1966D8u;
label_1966d8:
    // 0x1966d8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1966d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1966dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1966dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1966e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1966e4: 0xc081444  jal         func_205110
    ctx->pc = 0x1966E4u;
    SET_GPR_U32(ctx, 31, 0x1966ECu);
    ctx->pc = 0x1966E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966E4u;
    // 0x1966e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1966E4u, 0x1966ECu)) {
        return;
    }
    ctx->pc = 0x1966ECu;
label_1966ec:
    // 0x1966ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1966ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966f0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1966F0u;
    {
        const bool branch_taken_0x1966f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F0u;
        // 0x1966f4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966f0) {
            ctx->pc = 0x196768u;
            goto label_196768;
        }
    }
    ctx->pc = 0x1966F8u;
    // 0x1966f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1966f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1966fc: 0x3442c0e0  ori         $v0, $v0, 0xC0E0
    ctx->pc = 0x1966fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49376);
    // 0x196700: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196700u;
    {
        const bool branch_taken_0x196700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x196704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196700u;
        // 0x196704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196700) {
            ctx->pc = 0x196718u;
            goto label_196718;
        }
    }
    ctx->pc = 0x196708u;
    // 0x196708: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x196708u;
    SET_GPR_U32(ctx, 31, 0x196710u);
    ctx->pc = 0x19670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196708u;
    // 0x19670c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x196708u, 0x196710u)) {
        return;
    }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196710u;
    {
        const bool branch_taken_0x196710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196710u;
        // 0x196714: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196710) {
            ctx->pc = 0x19676Cu;
            goto label_19676c;
        }
    }
    ctx->pc = 0x196718u;
label_196718:
    // 0x196718: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x19671c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x19671cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x196720: 0x34c6c0e0  ori         $a2, $a2, 0xC0E0
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49376);
    // 0x196724: 0x24a5bf80  addiu       $a1, $a1, -0x4080
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    // 0x196728: 0xc093546  jal         func_24D518
    ctx->pc = 0x196728u;
    SET_GPR_U32(ctx, 31, 0x196730u);
    ctx->pc = 0x19672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196728u;
    // 0x19672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196728u, 0x196730u)) {
        return;
    }
    ctx->pc = 0x196730u;
label_196730:
    // 0x196730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196734: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x196734u;
    SET_GPR_U32(ctx, 31, 0x19673Cu);
    ctx->pc = 0x196738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196734u;
    // 0x196738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x196734u, 0x19673Cu)) {
        return;
    }
    ctx->pc = 0x19673Cu;
label_19673c:
    // 0x19673c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196740: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x196740u;
    SET_GPR_U32(ctx, 31, 0x196748u);
    ctx->pc = 0x196744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196740u;
    // 0x196744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x196740u, 0x196748u)) {
        return;
    }
    ctx->pc = 0x196748u;
label_196748:
    // 0x196748: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x196748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19674c: 0x8c628b98  lw          $v0, -0x7468($v1)
    ctx->pc = 0x19674cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338B98u));
    // 0x196750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196750u;
    {
        const bool branch_taken_0x196750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196750u;
        // 0x196754: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196750) {
            ctx->pc = 0x19676Cu;
            goto label_19676c;
        }
    }
    ctx->pc = 0x196758u;
    // 0x196758: 0xc065a0e  jal         func_196838
    ctx->pc = 0x196758u;
    SET_GPR_U32(ctx, 31, 0x196760u);
    ctx->pc = 0x196838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196838u, 0x196758u, 0x196760u)) {
        return;
    }
    ctx->pc = 0x196760u;
label_196760:
    // 0x196760: 0xc0659e0  jal         func_196780
    ctx->pc = 0x196760u;
    SET_GPR_U32(ctx, 31, 0x196768u);
    ctx->pc = 0x196780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196780u, 0x196760u, 0x196768u)) {
        return;
    }
    ctx->pc = 0x196768u;
label_196768:
    // 0x196768: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x196768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19676c:
    // 0x19676c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196770: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x196770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196774: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x196774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196778: 0x3e00008  jr          $ra
    ctx->pc = 0x196778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196778u;
        // 0x19677c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196780u;
}
