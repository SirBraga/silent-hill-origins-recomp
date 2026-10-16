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

// Function: sub_0017C4C8
// Address: 0x17c4c8 - 0x17c5c0
void sub_0017C4C8_0x17c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C4C8_0x17c4c8");
#endif

    switch (ctx->pc) {
        case 0x17c518u: goto label_17c518;
        case 0x17c520u: goto label_17c520;
        case 0x17c52cu: goto label_17c52c;
        case 0x17c54cu: goto label_17c54c;
        case 0x17c560u: goto label_17c560;
        case 0x17c574u: goto label_17c574;
        case 0x17c5a4u: goto label_17c5a4;
        default: break;
    }

    ctx->pc = 0x17c4c8u;

    // 0x17c4c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c4cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c4d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17c4d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c4dc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x17c4e0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x17C4E0u;
    {
        const bool branch_taken_0x17c4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4E0u;
        // 0x17c4e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4e0) {
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C4E8u;
    // 0x17c4e8: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x17c4ec: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x17C4ECu;
    {
        const bool branch_taken_0x17c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4ec) {
            ctx->pc = 0x17C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C4ECu;
            // 0x17c4f0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C5B4u;
            goto label_17c5b4;
        }
    }
    ctx->pc = 0x17C4F4u;
    // 0x17c4f4: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x17c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x17c4f8: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x17C4F8u;
    {
        const bool branch_taken_0x17c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4f8) {
            ctx->pc = 0x17C4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C4F8u;
            // 0x17c4fc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C5B4u;
            goto label_17c5b4;
        }
    }
    ctx->pc = 0x17C500u;
    // 0x17c500: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x17c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x17c504: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C504u;
    {
        const bool branch_taken_0x17c504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C504u;
        // 0x17c508: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c504) {
            ctx->pc = 0x17C554u;
            goto label_17c554;
        }
    }
    ctx->pc = 0x17C50Cu;
    // 0x17c50c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17c510: 0xc04309e  jal         func_10C278
    ctx->pc = 0x17C510u;
    SET_GPR_U32(ctx, 31, 0x17C518u);
    ctx->pc = 0x17C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C510u;
    // 0x17c514: 0x8c4482f0  lw          $a0, -0x7D10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C278u, 0x17C510u, 0x17C518u)) {
        return;
    }
    ctx->pc = 0x17C518u;
label_17c518:
    // 0x17c518: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x17C518u;
    SET_GPR_U32(ctx, 31, 0x17C520u);
    ctx->pc = 0x17C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C518u;
    // 0x17c51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x17C518u, 0x17C520u)) {
        return;
    }
    ctx->pc = 0x17C520u;
label_17c520:
    // 0x17c520: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x17c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x17c524: 0xc043e90  jal         func_10FA40
    ctx->pc = 0x17C524u;
    SET_GPR_U32(ctx, 31, 0x17C52Cu);
    ctx->pc = 0x17C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C524u;
    // 0x17c528: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FA40u, 0x17C524u, 0x17C52Cu)) {
        return;
    }
    ctx->pc = 0x17C52Cu;
label_17c52c:
    // 0x17c52c: 0x8e04870c  lw          $a0, -0x78F4($s0)
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936332)));
    // 0x17c530: 0x26280138  addiu       $t0, $s1, 0x138
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x17c534: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17c538: 0x2629014c  addiu       $t1, $s1, 0x14C
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
    // 0x17c53c: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x17c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x17c540: 0x262a0160  addiu       $t2, $s1, 0x160
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x17c544: 0xc05e7fe  jal         func_179FF8
    ctx->pc = 0x17C544u;
    SET_GPR_U32(ctx, 31, 0x17C54Cu);
    ctx->pc = 0x17C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C544u;
    // 0x17c548: 0x8e270110  lw          $a3, 0x110($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179FF8u, 0x17C544u, 0x17C54Cu)) {
        return;
    }
    ctx->pc = 0x17C54Cu;
label_17c54c:
    // 0x17c54c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17C54Cu;
    {
        const bool branch_taken_0x17c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C54Cu;
        // 0x17c550: 0x8e250168  lw          $a1, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c54c) {
            ctx->pc = 0x17C564u;
            goto label_17c564;
        }
    }
    ctx->pc = 0x17C554u;
label_17c554:
    // 0x17c554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c558: 0xc05e94e  jal         func_17A538
    ctx->pc = 0x17C558u;
    SET_GPR_U32(ctx, 31, 0x17C560u);
    ctx->pc = 0x17C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C558u;
    // 0x17c55c: 0x8e04870c  lw          $a0, -0x78F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17A538u, 0x17C558u, 0x17C560u)) {
        return;
    }
    ctx->pc = 0x17C560u;
label_17c560:
    // 0x17c560: 0x8e250168  lw          $a1, 0x168($s1)
    ctx->pc = 0x17c560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_17c564:
    // 0x17c564: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C564u;
    {
        const bool branch_taken_0x17c564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C564u;
        // 0x17c568: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c564) {
            ctx->pc = 0x17C578u;
            goto label_17c578;
        }
    }
    ctx->pc = 0x17C56Cu;
    // 0x17c56c: 0xc05ecbc  jal         func_17B2F0
    ctx->pc = 0x17C56Cu;
    SET_GPR_U32(ctx, 31, 0x17C574u);
    ctx->pc = 0x17C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C56Cu;
    // 0x17c570: 0x8e04870c  lw          $a0, -0x78F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B2F0u, 0x17C56Cu, 0x17C574u)) {
        return;
    }
    ctx->pc = 0x17C574u;
label_17c574:
    // 0x17c574: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_17c578:
    // 0x17c578: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x17c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x17c57c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x17c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x17c580: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C580u;
    {
        const bool branch_taken_0x17c580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C580u;
        // 0x17c584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c580) {
            ctx->pc = 0x17C5A8u;
            goto label_17c5a8;
        }
    }
    ctx->pc = 0x17C588u;
    // 0x17c588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c58c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C58Cu;
    {
        const bool branch_taken_0x17c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C58Cu;
        // 0x17c590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c58c) {
            ctx->pc = 0x17C5A8u;
            goto label_17c5a8;
        }
    }
    ctx->pc = 0x17C594u;
    // 0x17c594: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17c594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17c598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c59c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17C59Cu;
    SET_GPR_U32(ctx, 31, 0x17C5A4u);
    ctx->pc = 0x17C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C59Cu;
    // 0x17c5a0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17C59Cu, 0x17C5A4u)) {
        return;
    }
    ctx->pc = 0x17C5A4u;
label_17c5a4:
    // 0x17c5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c5a8:
    // 0x17c5a8: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x17c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x17c5ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17c5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c5b0:
    // 0x17c5b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17c5b4:
    // 0x17c5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5B8u;
        // 0x17c5bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5C0u;
}
