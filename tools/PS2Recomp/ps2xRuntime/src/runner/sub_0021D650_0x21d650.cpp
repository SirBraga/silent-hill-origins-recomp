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

// Function: sub_0021D650
// Address: 0x21d650 - 0x21d8c0
void sub_0021D650_0x21d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D650_0x21d650");
#endif

    switch (ctx->pc) {
        case 0x21d650u: goto label_21d650;
        case 0x21d654u: goto label_21d654;
        case 0x21d658u: goto label_21d658;
        case 0x21d65cu: goto label_21d65c;
        case 0x21d660u: goto label_21d660;
        case 0x21d664u: goto label_21d664;
        case 0x21d668u: goto label_21d668;
        case 0x21d66cu: goto label_21d66c;
        case 0x21d670u: goto label_21d670;
        case 0x21d674u: goto label_21d674;
        case 0x21d678u: goto label_21d678;
        case 0x21d67cu: goto label_21d67c;
        case 0x21d680u: goto label_21d680;
        case 0x21d684u: goto label_21d684;
        case 0x21d688u: goto label_21d688;
        case 0x21d68cu: goto label_21d68c;
        case 0x21d690u: goto label_21d690;
        case 0x21d694u: goto label_21d694;
        case 0x21d698u: goto label_21d698;
        case 0x21d69cu: goto label_21d69c;
        case 0x21d6a0u: goto label_21d6a0;
        case 0x21d6a4u: goto label_21d6a4;
        case 0x21d6a8u: goto label_21d6a8;
        case 0x21d6acu: goto label_21d6ac;
        case 0x21d6b0u: goto label_21d6b0;
        case 0x21d6b4u: goto label_21d6b4;
        case 0x21d6b8u: goto label_21d6b8;
        case 0x21d6bcu: goto label_21d6bc;
        case 0x21d6c0u: goto label_21d6c0;
        case 0x21d6c4u: goto label_21d6c4;
        case 0x21d6c8u: goto label_21d6c8;
        case 0x21d6ccu: goto label_21d6cc;
        case 0x21d6d0u: goto label_21d6d0;
        case 0x21d6d4u: goto label_21d6d4;
        case 0x21d6d8u: goto label_21d6d8;
        case 0x21d6dcu: goto label_21d6dc;
        case 0x21d6e0u: goto label_21d6e0;
        case 0x21d6e4u: goto label_21d6e4;
        case 0x21d6e8u: goto label_21d6e8;
        case 0x21d6ecu: goto label_21d6ec;
        case 0x21d6f0u: goto label_21d6f0;
        case 0x21d6f4u: goto label_21d6f4;
        case 0x21d6f8u: goto label_21d6f8;
        case 0x21d6fcu: goto label_21d6fc;
        case 0x21d700u: goto label_21d700;
        case 0x21d704u: goto label_21d704;
        case 0x21d708u: goto label_21d708;
        case 0x21d70cu: goto label_21d70c;
        case 0x21d710u: goto label_21d710;
        case 0x21d714u: goto label_21d714;
        case 0x21d718u: goto label_21d718;
        case 0x21d71cu: goto label_21d71c;
        case 0x21d720u: goto label_21d720;
        case 0x21d724u: goto label_21d724;
        case 0x21d728u: goto label_21d728;
        case 0x21d72cu: goto label_21d72c;
        case 0x21d730u: goto label_21d730;
        case 0x21d734u: goto label_21d734;
        case 0x21d738u: goto label_21d738;
        case 0x21d73cu: goto label_21d73c;
        case 0x21d740u: goto label_21d740;
        case 0x21d744u: goto label_21d744;
        case 0x21d748u: goto label_21d748;
        case 0x21d74cu: goto label_21d74c;
        case 0x21d750u: goto label_21d750;
        case 0x21d754u: goto label_21d754;
        case 0x21d758u: goto label_21d758;
        case 0x21d75cu: goto label_21d75c;
        case 0x21d760u: goto label_21d760;
        case 0x21d764u: goto label_21d764;
        case 0x21d768u: goto label_21d768;
        case 0x21d76cu: goto label_21d76c;
        case 0x21d770u: goto label_21d770;
        case 0x21d774u: goto label_21d774;
        case 0x21d778u: goto label_21d778;
        case 0x21d77cu: goto label_21d77c;
        case 0x21d780u: goto label_21d780;
        case 0x21d784u: goto label_21d784;
        case 0x21d788u: goto label_21d788;
        case 0x21d78cu: goto label_21d78c;
        case 0x21d790u: goto label_21d790;
        case 0x21d794u: goto label_21d794;
        case 0x21d798u: goto label_21d798;
        case 0x21d79cu: goto label_21d79c;
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7a4u: goto label_21d7a4;
        case 0x21d7a8u: goto label_21d7a8;
        case 0x21d7acu: goto label_21d7ac;
        case 0x21d7b0u: goto label_21d7b0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7b8u: goto label_21d7b8;
        case 0x21d7bcu: goto label_21d7bc;
        case 0x21d7c0u: goto label_21d7c0;
        case 0x21d7c4u: goto label_21d7c4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7ccu: goto label_21d7cc;
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d7d4u: goto label_21d7d4;
        case 0x21d7d8u: goto label_21d7d8;
        case 0x21d7dcu: goto label_21d7dc;
        case 0x21d7e0u: goto label_21d7e0;
        case 0x21d7e4u: goto label_21d7e4;
        case 0x21d7e8u: goto label_21d7e8;
        case 0x21d7ecu: goto label_21d7ec;
        case 0x21d7f0u: goto label_21d7f0;
        case 0x21d7f4u: goto label_21d7f4;
        case 0x21d7f8u: goto label_21d7f8;
        case 0x21d7fcu: goto label_21d7fc;
        case 0x21d800u: goto label_21d800;
        case 0x21d804u: goto label_21d804;
        case 0x21d808u: goto label_21d808;
        case 0x21d80cu: goto label_21d80c;
        case 0x21d810u: goto label_21d810;
        case 0x21d814u: goto label_21d814;
        case 0x21d818u: goto label_21d818;
        case 0x21d81cu: goto label_21d81c;
        case 0x21d820u: goto label_21d820;
        case 0x21d824u: goto label_21d824;
        case 0x21d828u: goto label_21d828;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d830u: goto label_21d830;
        case 0x21d834u: goto label_21d834;
        case 0x21d838u: goto label_21d838;
        case 0x21d83cu: goto label_21d83c;
        case 0x21d840u: goto label_21d840;
        case 0x21d844u: goto label_21d844;
        case 0x21d848u: goto label_21d848;
        case 0x21d84cu: goto label_21d84c;
        case 0x21d850u: goto label_21d850;
        case 0x21d854u: goto label_21d854;
        case 0x21d858u: goto label_21d858;
        case 0x21d85cu: goto label_21d85c;
        case 0x21d860u: goto label_21d860;
        case 0x21d864u: goto label_21d864;
        case 0x21d868u: goto label_21d868;
        case 0x21d86cu: goto label_21d86c;
        case 0x21d870u: goto label_21d870;
        case 0x21d874u: goto label_21d874;
        case 0x21d878u: goto label_21d878;
        case 0x21d87cu: goto label_21d87c;
        case 0x21d880u: goto label_21d880;
        case 0x21d884u: goto label_21d884;
        case 0x21d888u: goto label_21d888;
        case 0x21d88cu: goto label_21d88c;
        case 0x21d890u: goto label_21d890;
        case 0x21d894u: goto label_21d894;
        case 0x21d898u: goto label_21d898;
        case 0x21d89cu: goto label_21d89c;
        case 0x21d8a0u: goto label_21d8a0;
        case 0x21d8a4u: goto label_21d8a4;
        case 0x21d8a8u: goto label_21d8a8;
        case 0x21d8acu: goto label_21d8ac;
        case 0x21d8b0u: goto label_21d8b0;
        case 0x21d8b4u: goto label_21d8b4;
        case 0x21d8b8u: goto label_21d8b8;
        case 0x21d8bcu: goto label_21d8bc;
        default: break;
    }

    ctx->pc = 0x21d650u;

label_21d650:
    // 0x21d650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21d654:
    // 0x21d654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d658:
    // 0x21d658: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21d65c:
    // 0x21d65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21d660:
    // 0x21d660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d664:
    // 0x21d664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d668:
    // 0x21d668: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d66c:
    // 0x21d66c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d670:
    // 0x21d670: 0x40f809  jalr        $v0
label_21d674:
    if (ctx->pc == 0x21D674u) {
        ctx->pc = 0x21D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D670u;
        // 0x21d674: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D678u;
        goto label_21d678;
    }
    ctx->pc = 0x21D670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D678u);
        ctx->pc = 0x21D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D670u;
        // 0x21d674: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D670u, 0x21D678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D678u;
label_21d678:
    // 0x21d678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d67c:
    // 0x21d67c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d680:
    // 0x21d680: 0xae1101c8  sw          $s1, 0x1C8($s0)
    ctx->pc = 0x21d680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 17));
label_21d684:
    // 0x21d684: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x21d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_21d688:
    // 0x21d688: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21d688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21d68c:
    // 0x21d68c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x21d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21d690:
    // 0x21d690: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21d694:
    // 0x21d694: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x21d694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21d698:
    // 0x21d698: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_21d69c:
    if (ctx->pc == 0x21D69Cu) {
        ctx->pc = 0x21D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D698u;
        // 0x21d69c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6A0u;
        goto label_21d6a0;
    }
    ctx->pc = 0x21D698u;
    {
        const bool branch_taken_0x21d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D698u;
        // 0x21d69c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d698) {
            ctx->pc = 0x21D700u;
            goto label_21d700;
        }
    }
    ctx->pc = 0x21D6A0u;
label_21d6a0:
    // 0x21d6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21d6a4:
    // 0x21d6a4: 0x24426590  addiu       $v0, $v0, 0x6590
    ctx->pc = 0x21d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26000));
label_21d6a8:
    // 0x21d6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21d6ac:
    // 0x21d6ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d6b0:
    // 0x21d6b0: 0x800008  jr          $a0
label_21d6b4:
    if (ctx->pc == 0x21D6B4u) {
        ctx->pc = 0x21D6B8u;
        goto label_21d6b8;
    }
    ctx->pc = 0x21D6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D6B8u: goto label_21d6b8;
            case 0x21D6C4u: goto label_21d6c4;
            case 0x21D6D0u: goto label_21d6d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21D6B8u;
label_21d6b8:
    // 0x21d6b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d6bc:
    // 0x21d6bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_21d6c0:
    if (ctx->pc == 0x21D6C0u) {
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6C4u;
        goto label_21d6c4;
    }
    ctx->pc = 0x21D6BCu;
    {
        const bool branch_taken_0x21d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6bc) {
            ctx->pc = 0x21D6D8u;
            goto label_21d6d8;
        }
    }
    ctx->pc = 0x21D6C4u;
label_21d6c4:
    // 0x21d6c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d6c8:
    // 0x21d6c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_21d6cc:
    if (ctx->pc == 0x21D6CCu) {
        ctx->pc = 0x21D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C8u;
        // 0x21d6cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6D0u;
        goto label_21d6d0;
    }
    ctx->pc = 0x21D6C8u;
    {
        const bool branch_taken_0x21d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C8u;
        // 0x21d6cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c8) {
            ctx->pc = 0x21D6D8u;
            goto label_21d6d8;
        }
    }
    ctx->pc = 0x21D6D0u;
label_21d6d0:
    // 0x21d6d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d6d4:
    // 0x21d6d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21d6d8:
    // 0x21d6d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_21d6dc:
    if (ctx->pc == 0x21D6DCu) {
        ctx->pc = 0x21D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6D8u;
        // 0x21d6dc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6E0u;
        goto label_21d6e0;
    }
    ctx->pc = 0x21D6D8u;
    {
        const bool branch_taken_0x21d6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6D8u;
        // 0x21d6dc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6d8) {
            ctx->pc = 0x21D728u;
            goto label_21d728;
        }
    }
    ctx->pc = 0x21D6E0u;
label_21d6e0:
    // 0x21d6e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d6e4:
    // 0x21d6e4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21d6e8:
    // 0x21d6e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d6ec:
    // 0x21d6ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21d6f0:
    // 0x21d6f0: 0x60f809  jalr        $v1
label_21d6f4:
    if (ctx->pc == 0x21D6F4u) {
        ctx->pc = 0x21D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6F0u;
        // 0x21d6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6F8u;
        goto label_21d6f8;
    }
    ctx->pc = 0x21D6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D6F8u);
        ctx->pc = 0x21D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6F0u;
        // 0x21d6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D6F0u, 0x21D6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D6F8u;
label_21d6f8:
    // 0x21d6f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_21d6fc:
    if (ctx->pc == 0x21D6FCu) {
        ctx->pc = 0x21D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6F8u;
        // 0x21d6fc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D700u;
        goto label_21d700;
    }
    ctx->pc = 0x21D6F8u;
    {
        const bool branch_taken_0x21d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6F8u;
        // 0x21d6fc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6f8) {
            ctx->pc = 0x21D72Cu;
            goto label_21d72c;
        }
    }
    ctx->pc = 0x21D700u;
label_21d700:
    // 0x21d700: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d704:
    // 0x21d704: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_21d708:
    if (ctx->pc == 0x21D708u) {
        ctx->pc = 0x21D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D704u;
        // 0x21d708: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D70Cu;
        goto label_21d70c;
    }
    ctx->pc = 0x21D704u;
    {
        const bool branch_taken_0x21d704 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x21d704) {
            ctx->pc = 0x21D708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D704u;
            // 0x21d708: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D72Cu;
            goto label_21d72c;
        }
    }
    ctx->pc = 0x21D70Cu;
label_21d70c:
    // 0x21d70c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21d70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d710:
    // 0x21d710: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21d714:
    // 0x21d714: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21d714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21d718:
    // 0x21d718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d71c:
    // 0x21d71c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21d720:
    // 0x21d720: 0x60f809  jalr        $v1
label_21d724:
    if (ctx->pc == 0x21D724u) {
        ctx->pc = 0x21D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D720u;
        // 0x21d724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D728u;
        goto label_21d728;
    }
    ctx->pc = 0x21D720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D728u);
        ctx->pc = 0x21D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D720u;
        // 0x21d724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D720u, 0x21D728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D728u;
label_21d728:
    // 0x21d728: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x21d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_21d72c:
    // 0x21d72c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21d730:
    // 0x21d730: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
label_21d734:
    if (ctx->pc == 0x21D734u) {
        ctx->pc = 0x21D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D730u;
        // 0x21d734: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D738u;
        goto label_21d738;
    }
    ctx->pc = 0x21D730u;
    {
        const bool branch_taken_0x21d730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D730u;
        // 0x21d734: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d730) {
            ctx->pc = 0x21D7C0u;
            goto label_21d7c0;
        }
    }
    ctx->pc = 0x21D738u;
label_21d738:
    // 0x21d738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21d73c:
    if (ctx->pc == 0x21D73Cu) {
        ctx->pc = 0x21D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D738u;
        // 0x21d73c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D740u;
        goto label_21d740;
    }
    ctx->pc = 0x21D738u;
    {
        const bool branch_taken_0x21d738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D738u;
        // 0x21d73c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d738) {
            ctx->pc = 0x21D750u;
            goto label_21d750;
        }
    }
    ctx->pc = 0x21D740u;
label_21d740:
    // 0x21d740: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_21d744:
    if (ctx->pc == 0x21D744u) {
        ctx->pc = 0x21D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D740u;
        // 0x21d744: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D748u;
        goto label_21d748;
    }
    ctx->pc = 0x21D740u;
    {
        const bool branch_taken_0x21d740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21d740) {
            ctx->pc = 0x21D744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D740u;
            // 0x21d744: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D764u;
            goto label_21d764;
        }
    }
    ctx->pc = 0x21D748u;
label_21d748:
    // 0x21d748: 0x10000045  b           . + 4 + (0x45 << 2)
label_21d74c:
    if (ctx->pc == 0x21D74Cu) {
        ctx->pc = 0x21D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D748u;
        // 0x21d74c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D750u;
        goto label_21d750;
    }
    ctx->pc = 0x21D748u;
    {
        const bool branch_taken_0x21d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D748u;
        // 0x21d74c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d748) {
            ctx->pc = 0x21D860u;
            goto label_21d860;
        }
    }
    ctx->pc = 0x21D750u;
label_21d750:
    // 0x21d750: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21d754:
    // 0x21d754: 0x5082002a  beql        $a0, $v0, . + 4 + (0x2A << 2)
label_21d758:
    if (ctx->pc == 0x21D758u) {
        ctx->pc = 0x21D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D754u;
        // 0x21d758: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D75Cu;
        goto label_21d75c;
    }
    ctx->pc = 0x21D754u;
    {
        const bool branch_taken_0x21d754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21d754) {
            ctx->pc = 0x21D758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D754u;
            // 0x21d758: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D800u;
            goto label_21d800;
        }
    }
    ctx->pc = 0x21D75Cu;
label_21d75c:
    // 0x21d75c: 0x10000040  b           . + 4 + (0x40 << 2)
label_21d760:
    if (ctx->pc == 0x21D760u) {
        ctx->pc = 0x21D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D75Cu;
        // 0x21d760: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D764u;
        goto label_21d764;
    }
    ctx->pc = 0x21D75Cu;
    {
        const bool branch_taken_0x21d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D75Cu;
        // 0x21d760: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d75c) {
            ctx->pc = 0x21D860u;
            goto label_21d860;
        }
    }
    ctx->pc = 0x21D764u;
label_21d764:
    // 0x21d764: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_21d768:
    if (ctx->pc == 0x21D768u) {
        ctx->pc = 0x21D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D764u;
        // 0x21d768: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D76Cu;
        goto label_21d76c;
    }
    ctx->pc = 0x21D764u;
    {
        const bool branch_taken_0x21d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D764u;
        // 0x21d768: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d764) {
            ctx->pc = 0x21D778u;
            goto label_21d778;
        }
    }
    ctx->pc = 0x21D76Cu;
label_21d76c:
    // 0x21d76c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21d770:
    // 0x21d770: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_21d774:
    if (ctx->pc == 0x21D774u) {
        ctx->pc = 0x21D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D770u;
        // 0x21d774: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D778u;
        goto label_21d778;
    }
    ctx->pc = 0x21D770u;
    {
        const bool branch_taken_0x21d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d770) {
            ctx->pc = 0x21D774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D770u;
            // 0x21d774: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D840u;
            goto label_21d840;
        }
    }
    ctx->pc = 0x21D778u;
label_21d778:
    // 0x21d778: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21d778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_21d77c:
    // 0x21d77c: 0x2463dab8  addiu       $v1, $v1, -0x2548
    ctx->pc = 0x21d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957752));
label_21d780:
    // 0x21d780: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x21d780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_21d784:
    // 0x21d784: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d788:
    // 0x21d788: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d78c:
    // 0x21d78c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_21d790:
    if (ctx->pc == 0x21D790u) {
        ctx->pc = 0x21D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D78Cu;
        // 0x21d790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D794u;
        goto label_21d794;
    }
    ctx->pc = 0x21D78Cu;
    {
        const bool branch_taken_0x21d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D78Cu;
        // 0x21d790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d78c) {
            ctx->pc = 0x21D898u;
            goto label_21d898;
        }
    }
    ctx->pc = 0x21D794u;
label_21d794:
    // 0x21d794: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x21d794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_21d798:
    // 0x21d798: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x21d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_21d79c:
    // 0x21d79c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d7a0:
    // 0x21d7a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21d7a4:
    // 0x21d7a4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x21d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_21d7a8:
    // 0x21d7a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d7ac:
    // 0x21d7ac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x21d7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d7b0:
    // 0x21d7b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_21d7b4:
    if (ctx->pc == 0x21D7B4u) {
        ctx->pc = 0x21D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B0u;
        // 0x21d7b4: 0x24630054  addiu       $v1, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7B8u;
        goto label_21d7b8;
    }
    ctx->pc = 0x21D7B0u;
    {
        const bool branch_taken_0x21d7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B0u;
        // 0x21d7b4: 0x24630054  addiu       $v1, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b0) {
            ctx->pc = 0x21D798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d798;
        }
    }
    ctx->pc = 0x21D7B8u;
label_21d7b8:
    // 0x21d7b8: 0x10000038  b           . + 4 + (0x38 << 2)
label_21d7bc:
    if (ctx->pc == 0x21D7BCu) {
        ctx->pc = 0x21D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B8u;
        // 0x21d7bc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7C0u;
        goto label_21d7c0;
    }
    ctx->pc = 0x21D7B8u;
    {
        const bool branch_taken_0x21d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B8u;
        // 0x21d7bc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b8) {
            ctx->pc = 0x21D89Cu;
            goto label_21d89c;
        }
    }
    ctx->pc = 0x21D7C0u;
label_21d7c0:
    // 0x21d7c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21d7c4:
    // 0x21d7c4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x21d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21d7c8:
    // 0x21d7c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21d7cc:
    // 0x21d7cc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_21d7d0:
    if (ctx->pc == 0x21D7D0u) {
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7CCu;
        // 0x21d7d0: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7D4u;
        goto label_21d7d4;
    }
    ctx->pc = 0x21D7CCu;
    {
        const bool branch_taken_0x21d7cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7CCu;
        // 0x21d7d0: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7cc) {
            ctx->pc = 0x21D7E4u;
            goto label_21d7e4;
        }
    }
    ctx->pc = 0x21D7D4u;
label_21d7d4:
    // 0x21d7d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d7d8:
    // 0x21d7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d7dc:
    // 0x21d7dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_21d7e0:
    if (ctx->pc == 0x21D7E0u) {
        ctx->pc = 0x21D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7DCu;
        // 0x21d7e0: 0x2442d8c0  addiu       $v0, $v0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7E4u;
        goto label_21d7e4;
    }
    ctx->pc = 0x21D7DCu;
    {
        const bool branch_taken_0x21d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7DCu;
        // 0x21d7e0: 0x2442d8c0  addiu       $v0, $v0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7dc) {
            ctx->pc = 0x21D818u;
            goto label_21d818;
        }
    }
    ctx->pc = 0x21D7E4u;
label_21d7e4:
    // 0x21d7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d7e8:
    // 0x21d7e8: 0x54820015  bnel        $a0, $v0, . + 4 + (0x15 << 2)
label_21d7ec:
    if (ctx->pc == 0x21D7ECu) {
        ctx->pc = 0x21D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7E8u;
        // 0x21d7ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7F0u;
        goto label_21d7f0;
    }
    ctx->pc = 0x21D7E8u;
    {
        const bool branch_taken_0x21d7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d7e8) {
            ctx->pc = 0x21D7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D7E8u;
            // 0x21d7ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D840u;
            goto label_21d840;
        }
    }
    ctx->pc = 0x21D7F0u;
label_21d7f0:
    // 0x21d7f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d7f4:
    // 0x21d7f4: 0x2442dae8  addiu       $v0, $v0, -0x2518
    ctx->pc = 0x21d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957800));
label_21d7f8:
    // 0x21d7f8: 0x10000027  b           . + 4 + (0x27 << 2)
label_21d7fc:
    if (ctx->pc == 0x21D7FCu) {
        ctx->pc = 0x21D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7F8u;
        // 0x21d7fc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D800u;
        goto label_21d800;
    }
    ctx->pc = 0x21D7F8u;
    {
        const bool branch_taken_0x21d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7F8u;
        // 0x21d7fc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7f8) {
            ctx->pc = 0x21D898u;
            goto label_21d898;
        }
    }
    ctx->pc = 0x21D800u;
label_21d800:
    // 0x21d800: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21d804:
    // 0x21d804: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_21d808:
    if (ctx->pc == 0x21D808u) {
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D80Cu;
        goto label_21d80c;
    }
    ctx->pc = 0x21D804u;
    {
        const bool branch_taken_0x21d804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d804) {
            ctx->pc = 0x21D828u;
            goto label_21d828;
        }
    }
    ctx->pc = 0x21D80Cu;
label_21d80c:
    // 0x21d80c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d810:
    // 0x21d810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d814:
    // 0x21d814: 0x2442db58  addiu       $v0, $v0, -0x24A8
    ctx->pc = 0x21d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957912));
label_21d818:
    // 0x21d818: 0xc087546  jal         func_21D518
label_21d81c:
    if (ctx->pc == 0x21D81Cu) {
        ctx->pc = 0x21D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D818u;
        // 0x21d81c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D820u;
        goto label_21d820;
    }
    ctx->pc = 0x21D818u;
    SET_GPR_U32(ctx, 31, 0x21D820u);
    ctx->pc = 0x21D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D818u;
    // 0x21d81c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21D518u, 0x21D818u, 0x21D820u)) {
        return;
    }
    ctx->pc = 0x21D820u;
label_21d820:
    // 0x21d820: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21d824:
    if (ctx->pc == 0x21D824u) {
        ctx->pc = 0x21D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D820u;
        // 0x21d824: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D828u;
        goto label_21d828;
    }
    ctx->pc = 0x21D820u;
    {
        const bool branch_taken_0x21d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D820u;
        // 0x21d824: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d820) {
            ctx->pc = 0x21D89Cu;
            goto label_21d89c;
        }
    }
    ctx->pc = 0x21D828u;
label_21d828:
    // 0x21d828: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_21d82c:
    if (ctx->pc == 0x21D82Cu) {
        ctx->pc = 0x21D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D828u;
        // 0x21d82c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D830u;
        goto label_21d830;
    }
    ctx->pc = 0x21D828u;
    {
        const bool branch_taken_0x21d828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21d828) {
            ctx->pc = 0x21D82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D828u;
            // 0x21d82c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D840u;
            goto label_21d840;
        }
    }
    ctx->pc = 0x21D830u;
label_21d830:
    // 0x21d830: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d834:
    // 0x21d834: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_21d838:
    // 0x21d838: 0x10000017  b           . + 4 + (0x17 << 2)
label_21d83c:
    if (ctx->pc == 0x21D83Cu) {
        ctx->pc = 0x21D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D838u;
        // 0x21d83c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D840u;
        goto label_21d840;
    }
    ctx->pc = 0x21D838u;
    {
        const bool branch_taken_0x21d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D838u;
        // 0x21d83c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d838) {
            ctx->pc = 0x21D898u;
            goto label_21d898;
        }
    }
    ctx->pc = 0x21D840u;
label_21d840:
    // 0x21d840: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x21d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_21d844:
    // 0x21d844: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21d844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21d848:
    // 0x21d848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d84c:
    // 0x21d84c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21d850:
    // 0x21d850: 0x60f809  jalr        $v1
label_21d854:
    if (ctx->pc == 0x21D854u) {
        ctx->pc = 0x21D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D850u;
        // 0x21d854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D858u;
        goto label_21d858;
    }
    ctx->pc = 0x21D850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D858u);
        ctx->pc = 0x21D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D850u;
        // 0x21d854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D850u, 0x21D858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D858u;
label_21d858:
    // 0x21d858: 0x10000010  b           . + 4 + (0x10 << 2)
label_21d85c:
    if (ctx->pc == 0x21D85Cu) {
        ctx->pc = 0x21D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D858u;
        // 0x21d85c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D860u;
        goto label_21d860;
    }
    ctx->pc = 0x21D858u;
    {
        const bool branch_taken_0x21d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D858u;
        // 0x21d85c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d858) {
            ctx->pc = 0x21D89Cu;
            goto label_21d89c;
        }
    }
    ctx->pc = 0x21D860u;
label_21d860:
    // 0x21d860: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_21d864:
    if (ctx->pc == 0x21D864u) {
        ctx->pc = 0x21D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D860u;
        // 0x21d864: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D868u;
        goto label_21d868;
    }
    ctx->pc = 0x21D860u;
    {
        const bool branch_taken_0x21d860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d860) {
            ctx->pc = 0x21D864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D860u;
            // 0x21d864: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D880u;
            goto label_21d880;
        }
    }
    ctx->pc = 0x21D868u;
label_21d868:
    // 0x21d868: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21d86c:
    // 0x21d86c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d870:
    // 0x21d870: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x21d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_21d874:
    // 0x21d874: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x21d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_21d878:
    // 0x21d878: 0x10000007  b           . + 4 + (0x7 << 2)
label_21d87c:
    if (ctx->pc == 0x21D87Cu) {
        ctx->pc = 0x21D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D878u;
        // 0x21d87c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D880u;
        goto label_21d880;
    }
    ctx->pc = 0x21D878u;
    {
        const bool branch_taken_0x21d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D878u;
        // 0x21d87c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d878) {
            ctx->pc = 0x21D898u;
            goto label_21d898;
        }
    }
    ctx->pc = 0x21D880u;
label_21d880:
    // 0x21d880: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x21d880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_21d884:
    // 0x21d884: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21d884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21d888:
    // 0x21d888: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d88c:
    // 0x21d88c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21d890:
    // 0x21d890: 0x60f809  jalr        $v1
label_21d894:
    if (ctx->pc == 0x21D894u) {
        ctx->pc = 0x21D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D890u;
        // 0x21d894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D898u;
        goto label_21d898;
    }
    ctx->pc = 0x21D890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D898u);
        ctx->pc = 0x21D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D890u;
        // 0x21d894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D890u, 0x21D898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D898u;
label_21d898:
    // 0x21d898: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x21d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_21d89c:
    // 0x21d89c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_21d8a0:
    if (ctx->pc == 0x21D8A0u) {
        ctx->pc = 0x21D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D89Cu;
        // 0x21d8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D8A4u;
        goto label_21d8a4;
    }
    ctx->pc = 0x21D89Cu;
    {
        const bool branch_taken_0x21d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D89Cu;
        // 0x21d8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d89c) {
            ctx->pc = 0x21D8A8u;
            goto label_21d8a8;
        }
    }
    ctx->pc = 0x21D8A4u;
label_21d8a4:
    // 0x21d8a4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x21d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_21d8a8:
    // 0x21d8a8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x21d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_21d8ac:
    // 0x21d8ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21d8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d8b0:
    // 0x21d8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d8b4:
    // 0x21d8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d8b8:
    // 0x21d8b8: 0x3e00008  jr          $ra
label_21d8bc:
    if (ctx->pc == 0x21D8BCu) {
        ctx->pc = 0x21D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B8u;
        // 0x21d8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D8C0u;
        goto label_fallthrough_0x21d8b8;
    }
    ctx->pc = 0x21D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B8u;
        // 0x21d8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21d8b8:
    ctx->pc = 0x21D8C0u;
}
