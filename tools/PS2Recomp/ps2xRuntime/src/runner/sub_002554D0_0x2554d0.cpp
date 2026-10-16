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

// Function: sub_002554D0
// Address: 0x2554d0 - 0x255558
void sub_002554D0_0x2554d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002554D0_0x2554d0");
#endif

    switch (ctx->pc) {
        case 0x2554d0u: goto label_2554d0;
        case 0x2554d4u: goto label_2554d4;
        case 0x2554d8u: goto label_2554d8;
        case 0x2554dcu: goto label_2554dc;
        case 0x2554e0u: goto label_2554e0;
        case 0x2554e4u: goto label_2554e4;
        case 0x2554e8u: goto label_2554e8;
        case 0x2554ecu: goto label_2554ec;
        case 0x2554f0u: goto label_2554f0;
        case 0x2554f4u: goto label_2554f4;
        case 0x2554f8u: goto label_2554f8;
        case 0x2554fcu: goto label_2554fc;
        case 0x255500u: goto label_255500;
        case 0x255504u: goto label_255504;
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        default: break;
    }

    ctx->pc = 0x2554d0u;

label_2554d0:
    // 0x2554d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2554d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2554d4:
    // 0x2554d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2554d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2554d8:
    // 0x2554d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2554d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2554dc:
    // 0x2554dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2554dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2554e0:
    // 0x2554e0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2554e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_2554e4:
    // 0x2554e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2554e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2554e8:
    // 0x2554e8: 0xc09397e  jal         func_24E5F8
label_2554ec:
    if (ctx->pc == 0x2554ECu) {
        ctx->pc = 0x2554ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554E8u;
        // 0x2554ec: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554F0u;
        goto label_2554f0;
    }
    ctx->pc = 0x2554E8u;
    SET_GPR_U32(ctx, 31, 0x2554F0u);
    ctx->pc = 0x2554ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554E8u;
    // 0x2554ec: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2554E8u, 0x2554F0u)) {
        return;
    }
    ctx->pc = 0x2554F0u;
label_2554f0:
    // 0x2554f0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2554f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2554f4:
    // 0x2554f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2554f8:
    if (ctx->pc == 0x2554F8u) {
        ctx->pc = 0x2554F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554F4u;
        // 0x2554f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554FCu;
        goto label_2554fc;
    }
    ctx->pc = 0x2554F4u;
    {
        const bool branch_taken_0x2554f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554F4u;
        // 0x2554f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554f4) {
            ctx->pc = 0x255508u;
            goto label_255508;
        }
    }
    ctx->pc = 0x2554FCu;
label_2554fc:
    // 0x2554fc: 0xc093356  jal         func_24CD58
label_255500:
    if (ctx->pc == 0x255500u) {
        ctx->pc = 0x255504u;
        goto label_255504;
    }
    ctx->pc = 0x2554FCu;
    SET_GPR_U32(ctx, 31, 0x255504u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x2554FCu, 0x255504u)) {
        return;
    }
    ctx->pc = 0x255504u;
label_255504:
    // 0x255504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255508:
    // 0x255508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25550c:
    // 0x25550c: 0xc095502  jal         func_255408
label_255510:
    if (ctx->pc == 0x255510u) {
        ctx->pc = 0x255510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25550Cu;
        // 0x255510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255514u;
        goto label_255514;
    }
    ctx->pc = 0x25550Cu;
    SET_GPR_U32(ctx, 31, 0x255514u);
    ctx->pc = 0x255510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25550Cu;
    // 0x255510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255408u, 0x25550Cu, 0x255514u)) {
        return;
    }
    ctx->pc = 0x255514u;
label_255514:
    // 0x255514: 0xc08ad86  jal         func_22B618
label_255518:
    if (ctx->pc == 0x255518u) {
        ctx->pc = 0x255518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255514u;
        // 0x255518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25551Cu;
        goto label_25551c;
    }
    ctx->pc = 0x255514u;
    SET_GPR_U32(ctx, 31, 0x25551Cu);
    ctx->pc = 0x255518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255514u;
    // 0x255518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B618u, 0x255514u, 0x25551Cu)) {
        return;
    }
    ctx->pc = 0x25551Cu;
label_25551c:
    // 0x25551c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_255520:
    // 0x255520: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x255520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16296)));
label_255524:
    // 0x255524: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x255524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_255528:
    // 0x255528: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x255528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_25552c:
    // 0x25552c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255530:
    // 0x255530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255534:
    // 0x255534: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x255534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_255538:
    // 0x255538: 0x40f809  jalr        $v0
label_25553c:
    if (ctx->pc == 0x25553Cu) {
        ctx->pc = 0x25553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255538u;
        // 0x25553c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255540u;
        goto label_255540;
    }
    ctx->pc = 0x255538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255540u);
        ctx->pc = 0x25553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255538u;
        // 0x25553c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255538u, 0x255540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255540u;
label_255540:
    // 0x255540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x255540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255544:
    // 0x255544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255548:
    // 0x255548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25554c:
    // 0x25554c: 0x3e00008  jr          $ra
label_255550:
    if (ctx->pc == 0x255550u) {
        ctx->pc = 0x255550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25554Cu;
        // 0x255550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255554u;
        goto label_255554;
    }
    ctx->pc = 0x25554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25554Cu;
        // 0x255550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255554u;
label_255554:
    // 0x255554: 0x0  nop
    ctx->pc = 0x255554u;
    // NOP
    ctx->pc = 0x255558u;
}
