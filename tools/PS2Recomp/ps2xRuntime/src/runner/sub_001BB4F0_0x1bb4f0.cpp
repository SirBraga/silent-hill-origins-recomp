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

// Function: sub_001BB4F0
// Address: 0x1bb4f0 - 0x1bb588
void sub_001BB4F0_0x1bb4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB4F0_0x1bb4f0");
#endif

    switch (ctx->pc) {
        case 0x1bb4f0u: goto label_1bb4f0;
        case 0x1bb4f4u: goto label_1bb4f4;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb4fcu: goto label_1bb4fc;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb504u: goto label_1bb504;
        case 0x1bb508u: goto label_1bb508;
        case 0x1bb50cu: goto label_1bb50c;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb514u: goto label_1bb514;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb51cu: goto label_1bb51c;
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb524u: goto label_1bb524;
        case 0x1bb528u: goto label_1bb528;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb538u: goto label_1bb538;
        case 0x1bb53cu: goto label_1bb53c;
        case 0x1bb540u: goto label_1bb540;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb548u: goto label_1bb548;
        case 0x1bb54cu: goto label_1bb54c;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb554u: goto label_1bb554;
        case 0x1bb558u: goto label_1bb558;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb560u: goto label_1bb560;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb56cu: goto label_1bb56c;
        case 0x1bb570u: goto label_1bb570;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb578u: goto label_1bb578;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb584u: goto label_1bb584;
        default: break;
    }

    ctx->pc = 0x1bb4f0u;

label_1bb4f0:
    // 0x1bb4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bb4f4:
    // 0x1bb4f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bb4f8:
    // 0x1bb4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bb4fc:
    // 0x1bb4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb500:
    // 0x1bb500: 0x8e07027c  lw          $a3, 0x27C($s0)
    ctx->pc = 0x1bb500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_1bb504:
    // 0x1bb504: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1bb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1bb508:
    // 0x1bb508: 0x8ce30258  lw          $v1, 0x258($a3)
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_1bb50c:
    // 0x1bb50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bb510:
    // 0x1bb510: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bb510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb514:
    // 0x1bb514: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1bb514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1bb518:
    // 0x1bb518: 0x8c4502b0  lw          $a1, 0x2B0($v0)
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
label_1bb51c:
    // 0x1bb51c: 0x8c6600bc  lw          $a2, 0xBC($v1)
    ctx->pc = 0x1bb51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1bb520:
    // 0x1bb520: 0xc0f809  jalr        $a2
label_1bb524:
    if (ctx->pc == 0x1BB524u) {
        ctx->pc = 0x1BB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB520u;
        // 0x1bb524: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB528u;
        goto label_1bb528;
    }
    ctx->pc = 0x1BB520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BB528u);
        ctx->pc = 0x1BB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB520u;
        // 0x1bb524: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB520u, 0x1BB528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB528u;
label_1bb528:
    // 0x1bb528: 0x8e0402ac  lw          $a0, 0x2AC($s0)
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1bb52c:
    // 0x1bb52c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bb530:
    // 0x1bb530: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x1bb530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1bb534:
    // 0x1bb534: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1bb538:
    if (ctx->pc == 0x1BB538u) {
        ctx->pc = 0x1BB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB534u;
        // 0x1bb538: 0x8c458b2c  lw          $a1, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB53Cu;
        goto label_1bb53c;
    }
    ctx->pc = 0x1BB534u;
    {
        const bool branch_taken_0x1bb534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB534u;
        // 0x1bb538: 0x8c458b2c  lw          $a1, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb534) {
            ctx->pc = 0x1BB588u;
            return;
        }
    }
    ctx->pc = 0x1BB53Cu;
label_1bb53c:
    // 0x1bb53c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1bb540:
    // 0x1bb540: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bb540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bb544:
    // 0x1bb544: 0x2442d5a0  addiu       $v0, $v0, -0x2A60
    ctx->pc = 0x1bb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956448));
label_1bb548:
    // 0x1bb548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bb54c:
    // 0x1bb54c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb550:
    // 0x1bb550: 0x800008  jr          $a0
label_1bb554:
    if (ctx->pc == 0x1BB554u) {
        ctx->pc = 0x1BB558u;
        goto label_1bb558;
    }
    ctx->pc = 0x1BB550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB558u: goto label_1bb558;
            case 0x1BB560u: goto label_1bb560;
            case 0x1BB568u: goto label_1bb568;
            case 0x1BB578u: goto label_1bb578;
            case 0x1BB580u: goto label_1bb580;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BB558u;
label_1bb558:
    // 0x1bb558: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bb55c:
    if (ctx->pc == 0x1BB55Cu) {
        ctx->pc = 0x1BB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB558u;
        // 0x1bb55c: 0x24a2001c  addiu       $v0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB560u;
        goto label_1bb560;
    }
    ctx->pc = 0x1BB558u;
    {
        const bool branch_taken_0x1bb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB558u;
        // 0x1bb55c: 0x24a2001c  addiu       $v0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb558) {
            ctx->pc = 0x1BB584u;
            goto label_1bb584;
        }
    }
    ctx->pc = 0x1BB560u;
label_1bb560:
    // 0x1bb560: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bb564:
    if (ctx->pc == 0x1BB564u) {
        ctx->pc = 0x1BB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB560u;
        // 0x1bb564: 0x24a2002c  addiu       $v0, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB568u;
        goto label_1bb568;
    }
    ctx->pc = 0x1BB560u;
    {
        const bool branch_taken_0x1bb560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB560u;
        // 0x1bb564: 0x24a2002c  addiu       $v0, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb560) {
            ctx->pc = 0x1BB584u;
            goto label_1bb584;
        }
    }
    ctx->pc = 0x1BB568u;
label_1bb568:
    // 0x1bb568: 0xc06f84a  jal         func_1BE128
label_1bb56c:
    if (ctx->pc == 0x1BB56Cu) {
        ctx->pc = 0x1BB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB568u;
        // 0x1bb56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB570u;
        goto label_1bb570;
    }
    ctx->pc = 0x1BB568u;
    SET_GPR_U32(ctx, 31, 0x1BB570u);
    ctx->pc = 0x1BB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB568u;
    // 0x1bb56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE128u, 0x1BB568u, 0x1BB570u)) {
        return;
    }
    ctx->pc = 0x1BB570u;
label_1bb570:
    // 0x1bb570: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bb574:
    if (ctx->pc == 0x1BB574u) {
        ctx->pc = 0x1BB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB570u;
        // 0x1bb574: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB578u;
        goto label_1bb578;
    }
    ctx->pc = 0x1BB570u;
    {
        const bool branch_taken_0x1bb570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB570u;
        // 0x1bb574: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb570) {
            ctx->pc = 0x1BB58Cu;
            return;
        }
    }
    ctx->pc = 0x1BB578u;
label_1bb578:
    // 0x1bb578: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bb57c:
    if (ctx->pc == 0x1BB57Cu) {
        ctx->pc = 0x1BB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB578u;
        // 0x1bb57c: 0x24a2004c  addiu       $v0, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB580u;
        goto label_1bb580;
    }
    ctx->pc = 0x1BB578u;
    {
        const bool branch_taken_0x1bb578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB578u;
        // 0x1bb57c: 0x24a2004c  addiu       $v0, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb578) {
            ctx->pc = 0x1BB584u;
            goto label_1bb584;
        }
    }
    ctx->pc = 0x1BB580u;
label_1bb580:
    // 0x1bb580: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x1bb580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1bb584:
    // 0x1bb584: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x1bb584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
    ctx->pc = 0x1bb588u;
}
