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

// Function: sub_00259570
// Address: 0x259570 - 0x259660
void sub_00259570_0x259570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259570_0x259570");
#endif

    switch (ctx->pc) {
        case 0x259570u: goto label_259570;
        case 0x259574u: goto label_259574;
        case 0x259578u: goto label_259578;
        case 0x25957cu: goto label_25957c;
        case 0x259580u: goto label_259580;
        case 0x259584u: goto label_259584;
        case 0x259588u: goto label_259588;
        case 0x25958cu: goto label_25958c;
        case 0x259590u: goto label_259590;
        case 0x259594u: goto label_259594;
        case 0x259598u: goto label_259598;
        case 0x25959cu: goto label_25959c;
        case 0x2595a0u: goto label_2595a0;
        case 0x2595a4u: goto label_2595a4;
        case 0x2595a8u: goto label_2595a8;
        case 0x2595acu: goto label_2595ac;
        case 0x2595b0u: goto label_2595b0;
        case 0x2595b4u: goto label_2595b4;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595bcu: goto label_2595bc;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595c4u: goto label_2595c4;
        case 0x2595c8u: goto label_2595c8;
        case 0x2595ccu: goto label_2595cc;
        case 0x2595d0u: goto label_2595d0;
        case 0x2595d4u: goto label_2595d4;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595dcu: goto label_2595dc;
        case 0x2595e0u: goto label_2595e0;
        case 0x2595e4u: goto label_2595e4;
        case 0x2595e8u: goto label_2595e8;
        case 0x2595ecu: goto label_2595ec;
        case 0x2595f0u: goto label_2595f0;
        case 0x2595f4u: goto label_2595f4;
        case 0x2595f8u: goto label_2595f8;
        case 0x2595fcu: goto label_2595fc;
        case 0x259600u: goto label_259600;
        case 0x259604u: goto label_259604;
        case 0x259608u: goto label_259608;
        case 0x25960cu: goto label_25960c;
        case 0x259610u: goto label_259610;
        case 0x259614u: goto label_259614;
        case 0x259618u: goto label_259618;
        case 0x25961cu: goto label_25961c;
        case 0x259620u: goto label_259620;
        case 0x259624u: goto label_259624;
        case 0x259628u: goto label_259628;
        case 0x25962cu: goto label_25962c;
        case 0x259630u: goto label_259630;
        case 0x259634u: goto label_259634;
        case 0x259638u: goto label_259638;
        case 0x25963cu: goto label_25963c;
        case 0x259640u: goto label_259640;
        case 0x259644u: goto label_259644;
        case 0x259648u: goto label_259648;
        case 0x25964cu: goto label_25964c;
        case 0x259650u: goto label_259650;
        case 0x259654u: goto label_259654;
        case 0x259658u: goto label_259658;
        case 0x25965cu: goto label_25965c;
        default: break;
    }

    ctx->pc = 0x259570u;

label_259570:
    // 0x259570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x259570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_259574:
    // 0x259574: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x259574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_259578:
    // 0x259578: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x259578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25957c:
    // 0x25957c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25957cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259580:
    // 0x259580: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x259580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_259584:
    // 0x259584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x259584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259588:
    // 0x259588: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x259588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25958c:
    // 0x25958c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x25958cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_259590:
    // 0x259590: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x259590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_259594:
    // 0x259594: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x259594u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
label_259598:
    // 0x259598: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x259598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25959c:
    // 0x25959c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2595a0:
    // 0x2595a0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_2595a4:
    if (ctx->pc == 0x2595A4u) {
        ctx->pc = 0x2595A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595A0u;
        // 0x2595a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595A8u;
        goto label_2595a8;
    }
    ctx->pc = 0x2595A0u;
    {
        const bool branch_taken_0x2595a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595A0u;
        // 0x2595a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595a0) {
            ctx->pc = 0x2595CCu;
            goto label_2595cc;
        }
    }
    ctx->pc = 0x2595A8u;
label_2595a8:
    // 0x2595a8: 0x26d10fc8  addiu       $s1, $s6, 0xFC8
    ctx->pc = 0x2595a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_2595ac:
    // 0x2595ac: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2595acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2595b0:
    // 0x2595b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2595b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2595b4:
    // 0x2595b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2595b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2595b8:
    // 0x2595b8: 0x40f809  jalr        $v0
label_2595bc:
    if (ctx->pc == 0x2595BCu) {
        ctx->pc = 0x2595BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595B8u;
        // 0x2595bc: 0x8cd0000c  lw          $s0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595C0u;
        goto label_2595c0;
    }
    ctx->pc = 0x2595B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2595C0u);
        ctx->pc = 0x2595BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595B8u;
        // 0x2595bc: 0x8cd0000c  lw          $s0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2595B8u, 0x2595C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2595C0u;
label_2595c0:
    // 0x2595c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2595c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2595c4:
    // 0x2595c4: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
label_2595c8:
    if (ctx->pc == 0x2595C8u) {
        ctx->pc = 0x2595C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595C4u;
        // 0x2595c8: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595CCu;
        goto label_2595cc;
    }
    ctx->pc = 0x2595C4u;
    {
        const bool branch_taken_0x2595c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2595c4) {
            ctx->pc = 0x2595C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2595C4u;
            // 0x2595c8: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2595B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2595b0;
        }
    }
    ctx->pc = 0x2595CCu;
label_2595cc:
    // 0x2595cc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2595ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2595d0:
    // 0x2595d0: 0xc093106  jal         func_24C418
label_2595d4:
    if (ctx->pc == 0x2595D4u) {
        ctx->pc = 0x2595D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595D0u;
        // 0x2595d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595D8u;
        goto label_2595d8;
    }
    ctx->pc = 0x2595D0u;
    SET_GPR_U32(ctx, 31, 0x2595D8u);
    ctx->pc = 0x2595D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595D0u;
    // 0x2595d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x2595D0u, 0x2595D8u)) {
        return;
    }
    ctx->pc = 0x2595D8u;
label_2595d8:
    // 0x2595d8: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2595dc:
    if (ctx->pc == 0x2595DCu) {
        ctx->pc = 0x2595DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595D8u;
        // 0x2595dc: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595E0u;
        goto label_2595e0;
    }
    ctx->pc = 0x2595D8u;
    {
        const bool branch_taken_0x2595d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595D8u;
        // 0x2595dc: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595d8) {
            ctx->pc = 0x259614u;
            goto label_259614;
        }
    }
    ctx->pc = 0x2595E0u;
label_2595e0:
    // 0x2595e0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2595e4:
    // 0x2595e4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2595e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2595e8:
    // 0x2595e8: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x2595e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2595ec:
    // 0x2595ec: 0x0  nop
    ctx->pc = 0x2595ecu;
    // NOP
label_2595f0:
    // 0x2595f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2595f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2595f4:
    // 0x2595f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2595f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2595f8:
    // 0x2595f8: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2595f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_2595fc:
    // 0x2595fc: 0x40f809  jalr        $v0
label_259600:
    if (ctx->pc == 0x259600u) {
        ctx->pc = 0x259600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595FCu;
        // 0x259600: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259604u;
        goto label_259604;
    }
    ctx->pc = 0x2595FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259604u);
        ctx->pc = 0x259600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595FCu;
        // 0x259600: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2595FCu, 0x259604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259604u;
label_259604:
    // 0x259604: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x259604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_259608:
    // 0x259608: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x259608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_25960c:
    // 0x25960c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_259610:
    if (ctx->pc == 0x259610u) {
        ctx->pc = 0x259610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25960Cu;
        // 0x259610: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259614u;
        goto label_259614;
    }
    ctx->pc = 0x25960Cu;
    {
        const bool branch_taken_0x25960c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25960Cu;
        // 0x259610: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25960c) {
            ctx->pc = 0x2595F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2595f0;
        }
    }
    ctx->pc = 0x259614u;
label_259614:
    // 0x259614: 0xc093106  jal         func_24C418
label_259618:
    if (ctx->pc == 0x259618u) {
        ctx->pc = 0x259618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259614u;
        // 0x259618: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25961Cu;
        goto label_25961c;
    }
    ctx->pc = 0x259614u;
    SET_GPR_U32(ctx, 31, 0x25961Cu);
    ctx->pc = 0x259618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259614u;
    // 0x259618: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x259614u, 0x25961Cu)) {
        return;
    }
    ctx->pc = 0x25961Cu;
label_25961c:
    // 0x25961c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25961cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_259620:
    // 0x259620: 0x26c30fc8  addiu       $v1, $s6, 0xFC8
    ctx->pc = 0x259620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_259624:
    // 0x259624: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x259624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_259628:
    // 0x259628: 0x40f809  jalr        $v0
label_25962c:
    if (ctx->pc == 0x25962Cu) {
        ctx->pc = 0x25962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259628u;
        // 0x25962c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259630u;
        goto label_259630;
    }
    ctx->pc = 0x259628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259630u);
        ctx->pc = 0x25962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259628u;
        // 0x25962c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259628u, 0x259630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x259630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_259634:
    // 0x259634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x259634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259638:
    // 0x259638: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x259638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25963c:
    // 0x25963c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25963cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259640:
    // 0x259640: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x259640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_259644:
    // 0x259644: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x259644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_259648:
    // 0x259648: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x259648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25964c:
    // 0x25964c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25964cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_259650:
    // 0x259650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_259654:
    // 0x259654: 0x3e00008  jr          $ra
label_259658:
    if (ctx->pc == 0x259658u) {
        ctx->pc = 0x259658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259654u;
        // 0x259658: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25965Cu;
        goto label_25965c;
    }
    ctx->pc = 0x259654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259654u;
        // 0x259658: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25965Cu;
label_25965c:
    // 0x25965c: 0x0  nop
    ctx->pc = 0x25965cu;
    // NOP
    ctx->pc = 0x259660u;
}
