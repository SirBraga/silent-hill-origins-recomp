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

// Function: sub_0015D700
// Address: 0x15d700 - 0x15d980
void sub_0015D700_0x15d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D700_0x15d700");
#endif

    switch (ctx->pc) {
        case 0x15d700u: goto label_15d700;
        case 0x15d704u: goto label_15d704;
        case 0x15d708u: goto label_15d708;
        case 0x15d70cu: goto label_15d70c;
        case 0x15d710u: goto label_15d710;
        case 0x15d714u: goto label_15d714;
        case 0x15d718u: goto label_15d718;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d720u: goto label_15d720;
        case 0x15d724u: goto label_15d724;
        case 0x15d728u: goto label_15d728;
        case 0x15d72cu: goto label_15d72c;
        case 0x15d730u: goto label_15d730;
        case 0x15d734u: goto label_15d734;
        case 0x15d738u: goto label_15d738;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d740u: goto label_15d740;
        case 0x15d744u: goto label_15d744;
        case 0x15d748u: goto label_15d748;
        case 0x15d74cu: goto label_15d74c;
        case 0x15d750u: goto label_15d750;
        case 0x15d754u: goto label_15d754;
        case 0x15d758u: goto label_15d758;
        case 0x15d75cu: goto label_15d75c;
        case 0x15d760u: goto label_15d760;
        case 0x15d764u: goto label_15d764;
        case 0x15d768u: goto label_15d768;
        case 0x15d76cu: goto label_15d76c;
        case 0x15d770u: goto label_15d770;
        case 0x15d774u: goto label_15d774;
        case 0x15d778u: goto label_15d778;
        case 0x15d77cu: goto label_15d77c;
        case 0x15d780u: goto label_15d780;
        case 0x15d784u: goto label_15d784;
        case 0x15d788u: goto label_15d788;
        case 0x15d78cu: goto label_15d78c;
        case 0x15d790u: goto label_15d790;
        case 0x15d794u: goto label_15d794;
        case 0x15d798u: goto label_15d798;
        case 0x15d79cu: goto label_15d79c;
        case 0x15d7a0u: goto label_15d7a0;
        case 0x15d7a4u: goto label_15d7a4;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b0u: goto label_15d7b0;
        case 0x15d7b4u: goto label_15d7b4;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7bcu: goto label_15d7bc;
        case 0x15d7c0u: goto label_15d7c0;
        case 0x15d7c4u: goto label_15d7c4;
        case 0x15d7c8u: goto label_15d7c8;
        case 0x15d7ccu: goto label_15d7cc;
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7d8u: goto label_15d7d8;
        case 0x15d7dcu: goto label_15d7dc;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7e8u: goto label_15d7e8;
        case 0x15d7ecu: goto label_15d7ec;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d7f4u: goto label_15d7f4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d7fcu: goto label_15d7fc;
        case 0x15d800u: goto label_15d800;
        case 0x15d804u: goto label_15d804;
        case 0x15d808u: goto label_15d808;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d810u: goto label_15d810;
        case 0x15d814u: goto label_15d814;
        case 0x15d818u: goto label_15d818;
        case 0x15d81cu: goto label_15d81c;
        case 0x15d820u: goto label_15d820;
        case 0x15d824u: goto label_15d824;
        case 0x15d828u: goto label_15d828;
        case 0x15d82cu: goto label_15d82c;
        case 0x15d830u: goto label_15d830;
        case 0x15d834u: goto label_15d834;
        case 0x15d838u: goto label_15d838;
        case 0x15d83cu: goto label_15d83c;
        case 0x15d840u: goto label_15d840;
        case 0x15d844u: goto label_15d844;
        case 0x15d848u: goto label_15d848;
        case 0x15d84cu: goto label_15d84c;
        case 0x15d850u: goto label_15d850;
        case 0x15d854u: goto label_15d854;
        case 0x15d858u: goto label_15d858;
        case 0x15d85cu: goto label_15d85c;
        case 0x15d860u: goto label_15d860;
        case 0x15d864u: goto label_15d864;
        case 0x15d868u: goto label_15d868;
        case 0x15d86cu: goto label_15d86c;
        case 0x15d870u: goto label_15d870;
        case 0x15d874u: goto label_15d874;
        case 0x15d878u: goto label_15d878;
        case 0x15d87cu: goto label_15d87c;
        case 0x15d880u: goto label_15d880;
        case 0x15d884u: goto label_15d884;
        case 0x15d888u: goto label_15d888;
        case 0x15d88cu: goto label_15d88c;
        case 0x15d890u: goto label_15d890;
        case 0x15d894u: goto label_15d894;
        case 0x15d898u: goto label_15d898;
        case 0x15d89cu: goto label_15d89c;
        case 0x15d8a0u: goto label_15d8a0;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8a8u: goto label_15d8a8;
        case 0x15d8acu: goto label_15d8ac;
        case 0x15d8b0u: goto label_15d8b0;
        case 0x15d8b4u: goto label_15d8b4;
        case 0x15d8b8u: goto label_15d8b8;
        case 0x15d8bcu: goto label_15d8bc;
        case 0x15d8c0u: goto label_15d8c0;
        case 0x15d8c4u: goto label_15d8c4;
        case 0x15d8c8u: goto label_15d8c8;
        case 0x15d8ccu: goto label_15d8cc;
        case 0x15d8d0u: goto label_15d8d0;
        case 0x15d8d4u: goto label_15d8d4;
        case 0x15d8d8u: goto label_15d8d8;
        case 0x15d8dcu: goto label_15d8dc;
        case 0x15d8e0u: goto label_15d8e0;
        case 0x15d8e4u: goto label_15d8e4;
        case 0x15d8e8u: goto label_15d8e8;
        case 0x15d8ecu: goto label_15d8ec;
        case 0x15d8f0u: goto label_15d8f0;
        case 0x15d8f4u: goto label_15d8f4;
        case 0x15d8f8u: goto label_15d8f8;
        case 0x15d8fcu: goto label_15d8fc;
        case 0x15d900u: goto label_15d900;
        case 0x15d904u: goto label_15d904;
        case 0x15d908u: goto label_15d908;
        case 0x15d90cu: goto label_15d90c;
        case 0x15d910u: goto label_15d910;
        case 0x15d914u: goto label_15d914;
        case 0x15d918u: goto label_15d918;
        case 0x15d91cu: goto label_15d91c;
        case 0x15d920u: goto label_15d920;
        case 0x15d924u: goto label_15d924;
        case 0x15d928u: goto label_15d928;
        case 0x15d92cu: goto label_15d92c;
        case 0x15d930u: goto label_15d930;
        case 0x15d934u: goto label_15d934;
        case 0x15d938u: goto label_15d938;
        case 0x15d93cu: goto label_15d93c;
        case 0x15d940u: goto label_15d940;
        case 0x15d944u: goto label_15d944;
        case 0x15d948u: goto label_15d948;
        case 0x15d94cu: goto label_15d94c;
        case 0x15d950u: goto label_15d950;
        case 0x15d954u: goto label_15d954;
        case 0x15d958u: goto label_15d958;
        case 0x15d95cu: goto label_15d95c;
        case 0x15d960u: goto label_15d960;
        case 0x15d964u: goto label_15d964;
        case 0x15d968u: goto label_15d968;
        case 0x15d96cu: goto label_15d96c;
        case 0x15d970u: goto label_15d970;
        case 0x15d974u: goto label_15d974;
        case 0x15d978u: goto label_15d978;
        case 0x15d97cu: goto label_15d97c;
        default: break;
    }

    ctx->pc = 0x15d700u;

label_15d700:
    // 0x15d700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_15d704:
    // 0x15d704: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x15d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_15d708:
    // 0x15d708: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x15d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_15d70c:
    // 0x15d70c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15d710:
    // 0x15d710: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x15d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_15d714:
    // 0x15d714: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x15d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_15d718:
    // 0x15d718: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x15d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_15d71c:
    // 0x15d71c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x15d71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_15d720:
    // 0x15d720: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15d724:
    // 0x15d724: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x15d724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_15d728:
    // 0x15d728: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x15d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_15d72c:
    // 0x15d72c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15d730:
    // 0x15d730: 0xc04efda  jal         func_13BF68
label_15d734:
    if (ctx->pc == 0x15D734u) {
        ctx->pc = 0x15D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D730u;
        // 0x15d734: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D738u;
        goto label_15d738;
    }
    ctx->pc = 0x15D730u;
    SET_GPR_U32(ctx, 31, 0x15D738u);
    ctx->pc = 0x15D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D730u;
    // 0x15d734: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x15D730u, 0x15D738u)) {
        return;
    }
    ctx->pc = 0x15D738u;
label_15d738:
    // 0x15d738: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15d73c:
    // 0x15d73c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d740:
    // 0x15d740: 0x8c46f0d0  lw          $a2, -0xF30($v0)
    ctx->pc = 0x15d740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963408)));
label_15d744:
    // 0x15d744: 0xc07f1c0  jal         func_1FC700
label_15d748:
    if (ctx->pc == 0x15D748u) {
        ctx->pc = 0x15D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D744u;
        // 0x15d748: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D74Cu;
        goto label_15d74c;
    }
    ctx->pc = 0x15D744u;
    SET_GPR_U32(ctx, 31, 0x15D74Cu);
    ctx->pc = 0x15D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D744u;
    // 0x15d748: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15D744u, 0x15D74Cu)) {
        return;
    }
    ctx->pc = 0x15D74Cu;
label_15d74c:
    // 0x15d74c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d750:
    // 0x15d750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d754:
    // 0x15d754: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_15d758:
    if (ctx->pc == 0x15D758u) {
        ctx->pc = 0x15D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D754u;
        // 0x15d758: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D75Cu;
        goto label_15d75c;
    }
    ctx->pc = 0x15D754u;
    {
        const bool branch_taken_0x15d754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D754u;
        // 0x15d758: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d754) {
            ctx->pc = 0x15D828u;
            goto label_15d828;
        }
    }
    ctx->pc = 0x15D75Cu;
label_15d75c:
    // 0x15d75c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d760:
    // 0x15d760: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d764:
    // 0x15d764: 0x0  nop
    ctx->pc = 0x15d764u;
    // NOP
label_15d768:
    // 0x15d768: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x15d768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_15d76c:
    // 0x15d76c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_15d770:
    if (ctx->pc == 0x15D770u) {
        ctx->pc = 0x15D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D76Cu;
        // 0x15d770: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D774u;
        goto label_15d774;
    }
    ctx->pc = 0x15D76Cu;
    {
        const bool branch_taken_0x15d76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D76Cu;
        // 0x15d770: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d76c) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D774u;
label_15d774:
    // 0x15d774: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15d778:
    // 0x15d778: 0x244232a0  addiu       $v0, $v0, 0x32A0
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12960));
label_15d77c:
    // 0x15d77c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d780:
    // 0x15d780: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d784:
    // 0x15d784: 0x800008  jr          $a0
label_15d788:
    if (ctx->pc == 0x15D788u) {
        ctx->pc = 0x15D78Cu;
        goto label_15d78c;
    }
    ctx->pc = 0x15D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D78Cu: goto label_15d78c;
            case 0x15D79Cu: goto label_15d79c;
            case 0x15D7ACu: goto label_15d7ac;
            case 0x15D7BCu: goto label_15d7bc;
            case 0x15D7CCu: goto label_15d7cc;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15D78Cu;
label_15d78c:
    // 0x15d78c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d790:
    // 0x15d790: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d794:
    // 0x15d794: 0x10000019  b           . + 4 + (0x19 << 2)
label_15d798:
    if (ctx->pc == 0x15D798u) {
        ctx->pc = 0x15D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D794u;
        // 0x15d798: 0xe66007e0  swc1        $f0, 0x7E0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2016), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D79Cu;
        goto label_15d79c;
    }
    ctx->pc = 0x15D794u;
    {
        const bool branch_taken_0x15d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D794u;
        // 0x15d798: 0xe66007e0  swc1        $f0, 0x7E0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d794) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D79Cu;
label_15d79c:
    // 0x15d79c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7a0:
    // 0x15d7a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7a4:
    // 0x15d7a4: 0x10000015  b           . + 4 + (0x15 << 2)
label_15d7a8:
    if (ctx->pc == 0x15D7A8u) {
        ctx->pc = 0x15D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A4u;
        // 0x15d7a8: 0xe66007e4  swc1        $f0, 0x7E4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2020), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7ACu;
        goto label_15d7ac;
    }
    ctx->pc = 0x15D7A4u;
    {
        const bool branch_taken_0x15d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A4u;
        // 0x15d7a8: 0xe66007e4  swc1        $f0, 0x7E4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2020), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a4) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D7ACu;
label_15d7ac:
    // 0x15d7ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7b0:
    // 0x15d7b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7b4:
    // 0x15d7b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_15d7b8:
    if (ctx->pc == 0x15D7B8u) {
        ctx->pc = 0x15D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B4u;
        // 0x15d7b8: 0xe66007e8  swc1        $f0, 0x7E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2024), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7BCu;
        goto label_15d7bc;
    }
    ctx->pc = 0x15D7B4u;
    {
        const bool branch_taken_0x15d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B4u;
        // 0x15d7b8: 0xe66007e8  swc1        $f0, 0x7E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2024), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7b4) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D7BCu;
label_15d7bc:
    // 0x15d7bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7c0:
    // 0x15d7c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7c4:
    // 0x15d7c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_15d7c8:
    if (ctx->pc == 0x15D7C8u) {
        ctx->pc = 0x15D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C4u;
        // 0x15d7c8: 0xe66007ec  swc1        $f0, 0x7EC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2028), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7CCu;
        goto label_15d7cc;
    }
    ctx->pc = 0x15D7C4u;
    {
        const bool branch_taken_0x15d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C4u;
        // 0x15d7c8: 0xe66007ec  swc1        $f0, 0x7EC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7c4) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D7CCu;
label_15d7cc:
    // 0x15d7cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7d0:
    // 0x15d7d0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_15d7d4:
    // 0x15d7d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7d8:
    // 0x15d7d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_15d7dc:
    if (ctx->pc == 0x15D7DCu) {
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0xe460863c  swc1        $f0, -0x79C4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7E0u;
        goto label_15d7e0;
    }
    ctx->pc = 0x15D7D8u;
    {
        const bool branch_taken_0x15d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0xe460863c  swc1        $f0, -0x79C4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d8) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D7E0u;
label_15d7e0:
    // 0x15d7e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7e4:
    // 0x15d7e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7e8:
    // 0x15d7e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15d7ec:
    if (ctx->pc == 0x15D7ECu) {
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7E8u;
        // 0x15d7ec: 0xe66007f0  swc1        $f0, 0x7F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2032), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7F0u;
        goto label_15d7f0;
    }
    ctx->pc = 0x15D7E8u;
    {
        const bool branch_taken_0x15d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7E8u;
        // 0x15d7ec: 0xe66007f0  swc1        $f0, 0x7F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2032), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7e8) {
            ctx->pc = 0x15D7FCu;
            goto label_15d7fc;
        }
    }
    ctx->pc = 0x15D7F0u;
label_15d7f0:
    // 0x15d7f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d7f4:
    // 0x15d7f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d7f8:
    // 0x15d7f8: 0xe66007f4  swc1        $f0, 0x7F4($s3)
    ctx->pc = 0x15d7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2036), bits); }
label_15d7fc:
    // 0x15d7fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d800:
    // 0x15d800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d804:
    // 0x15d804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d808:
    // 0x15d808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d80c:
    // 0x15d80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d810:
    // 0x15d810: 0xc07f0c8  jal         func_1FC320
label_15d814:
    if (ctx->pc == 0x15D814u) {
        ctx->pc = 0x15D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D810u;
        // 0x15d814: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D818u;
        goto label_15d818;
    }
    ctx->pc = 0x15D810u;
    SET_GPR_U32(ctx, 31, 0x15D818u);
    ctx->pc = 0x15D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D810u;
    // 0x15d814: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15D810u, 0x15D818u)) {
        return;
    }
    ctx->pc = 0x15D818u;
label_15d818:
    // 0x15d818: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d81c:
    // 0x15d81c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d820:
    // 0x15d820: 0x5460ffd1  bnel        $v1, $zero, . + 4 + (-0x2F << 2)
label_15d824:
    if (ctx->pc == 0x15D824u) {
        ctx->pc = 0x15D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D820u;
        // 0x15d824: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D828u;
        goto label_15d828;
    }
    ctx->pc = 0x15D820u;
    {
        const bool branch_taken_0x15d820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d820) {
            ctx->pc = 0x15D824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D820u;
            // 0x15d824: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d768;
        }
    }
    ctx->pc = 0x15D828u;
label_15d828:
    // 0x15d828: 0xa2600044  sb          $zero, 0x44($s3)
    ctx->pc = 0x15d828u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 0));
label_15d82c:
    // 0x15d82c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_15d830:
    // 0x15d830: 0xa2600047  sb          $zero, 0x47($s3)
    ctx->pc = 0x15d830u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 71), (uint8_t)GPR_U32(ctx, 0));
label_15d834:
    // 0x15d834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d838:
    // 0x15d838: 0xa2600046  sb          $zero, 0x46($s3)
    ctx->pc = 0x15d838u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
label_15d83c:
    // 0x15d83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d840:
    // 0x15d840: 0xa2600045  sb          $zero, 0x45($s3)
    ctx->pc = 0x15d840u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 69), (uint8_t)GPR_U32(ctx, 0));
label_15d844:
    // 0x15d844: 0xc07f1c0  jal         func_1FC700
label_15d848:
    if (ctx->pc == 0x15D848u) {
        ctx->pc = 0x15D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D844u;
        // 0x15d848: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D84Cu;
        goto label_15d84c;
    }
    ctx->pc = 0x15D844u;
    SET_GPR_U32(ctx, 31, 0x15D84Cu);
    ctx->pc = 0x15D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D844u;
    // 0x15d848: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15D844u, 0x15D84Cu)) {
        return;
    }
    ctx->pc = 0x15D84Cu;
label_15d84c:
    // 0x15d84c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15d850:
    // 0x15d850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d854:
    // 0x15d854: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_15d858:
    if (ctx->pc == 0x15D858u) {
        ctx->pc = 0x15D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D854u;
        // 0x15d858: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D85Cu;
        goto label_15d85c;
    }
    ctx->pc = 0x15D854u;
    {
        const bool branch_taken_0x15d854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D854u;
        // 0x15d858: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d854) {
            ctx->pc = 0x15D950u;
            goto label_15d950;
        }
    }
    ctx->pc = 0x15D85Cu;
label_15d85c:
    // 0x15d85c: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x15d85cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
label_15d860:
    // 0x15d860: 0x2457108c  addiu       $s7, $v0, 0x108C
    ctx->pc = 0x15d860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_15d864:
    // 0x15d864: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15d868:
    // 0x15d868: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15d86c:
    // 0x15d86c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_15d870:
    if (ctx->pc == 0x15D870u) {
        ctx->pc = 0x15D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D86Cu;
        // 0x15d870: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D874u;
        goto label_15d874;
    }
    ctx->pc = 0x15D86Cu;
    {
        const bool branch_taken_0x15d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D86Cu;
        // 0x15d870: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d86c) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D874u;
label_15d874:
    // 0x15d874: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x15d874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_15d878:
    // 0x15d878: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15d87c:
    // 0x15d87c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15d880:
    // 0x15d880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d884:
    // 0x15d884: 0xc08063c  jal         func_2018F0
label_15d888:
    if (ctx->pc == 0x15D888u) {
        ctx->pc = 0x15D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D884u;
        // 0x15d888: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D88Cu;
        goto label_15d88c;
    }
    ctx->pc = 0x15D884u;
    SET_GPR_U32(ctx, 31, 0x15D88Cu);
    ctx->pc = 0x15D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D884u;
    // 0x15d888: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x15D884u, 0x15D88Cu)) {
        return;
    }
    ctx->pc = 0x15D88Cu;
label_15d88c:
    // 0x15d88c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_15d890:
    if (ctx->pc == 0x15D890u) {
        ctx->pc = 0x15D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D88Cu;
        // 0x15d890: 0x27c43280  addiu       $a0, $fp, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 12928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D894u;
        goto label_15d894;
    }
    ctx->pc = 0x15D88Cu;
    {
        const bool branch_taken_0x15d88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D88Cu;
        // 0x15d890: 0x27c43280  addiu       $a0, $fp, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 12928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d88c) {
            ctx->pc = 0x15D924u;
            goto label_15d924;
        }
    }
    ctx->pc = 0x15D894u;
label_15d894:
    // 0x15d894: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_15d898:
    // 0x15d898: 0x40f809  jalr        $v0
label_15d89c:
    if (ctx->pc == 0x15D89Cu) {
        ctx->pc = 0x15D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D898u;
        // 0x15d89c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8A0u;
        goto label_15d8a0;
    }
    ctx->pc = 0x15D898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D8A0u);
        ctx->pc = 0x15D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D898u;
        // 0x15d89c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D898u, 0x15D8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D8A0u;
label_15d8a0:
    // 0x15d8a0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_15d8a4:
    if (ctx->pc == 0x15D8A4u) {
        ctx->pc = 0x15D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8A0u;
        // 0x15d8a4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8A8u;
        goto label_15d8a8;
    }
    ctx->pc = 0x15D8A0u;
    {
        const bool branch_taken_0x15d8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8A0u;
        // 0x15d8a4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8a0) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D8A8u;
label_15d8a8:
    // 0x15d8a8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_15d8ac:
    // 0x15d8ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_15d8b0:
    if (ctx->pc == 0x15D8B0u) {
        ctx->pc = 0x15D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8ACu;
        // 0x15d8b0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8B4u;
        goto label_15d8b4;
    }
    ctx->pc = 0x15D8ACu;
    {
        const bool branch_taken_0x15d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8ACu;
        // 0x15d8b0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8ac) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D8B4u;
label_15d8b4:
    // 0x15d8b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d8b8:
    // 0x15d8b8: 0x24513390  addiu       $s1, $v0, 0x3390
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
label_15d8bc:
    // 0x15d8bc: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_15d8c0:
    // 0x15d8c0: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
label_15d8c4:
    // 0x15d8c4: 0x26700048  addiu       $s0, $s3, 0x48
    ctx->pc = 0x15d8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_15d8c8:
    // 0x15d8c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d8cc:
    // 0x15d8cc: 0xc065c68  jal         func_1971A0
label_15d8d0:
    if (ctx->pc == 0x15D8D0u) {
        ctx->pc = 0x15D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8CCu;
        // 0x15d8d0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8D4u;
        goto label_15d8d4;
    }
    ctx->pc = 0x15D8CCu;
    SET_GPR_U32(ctx, 31, 0x15D8D4u);
    ctx->pc = 0x15D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D8CCu;
    // 0x15d8d0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x15D8CCu, 0x15D8D4u)) {
        return;
    }
    ctx->pc = 0x15D8D4u;
label_15d8d4:
    // 0x15d8d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_15d8d8:
    if (ctx->pc == 0x15D8D8u) {
        ctx->pc = 0x15D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D4u;
        // 0x15d8d8: 0x8ec48668  lw          $a0, -0x7998($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8DCu;
        goto label_15d8dc;
    }
    ctx->pc = 0x15D8D4u;
    {
        const bool branch_taken_0x15d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D4u;
        // 0x15d8d8: 0x8ec48668  lw          $a0, -0x7998($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8d4) {
            ctx->pc = 0x15D910u;
            goto label_15d910;
        }
    }
    ctx->pc = 0x15D8DCu;
label_15d8dc:
    // 0x15d8dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15d8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15d8e0:
    // 0x15d8e0: 0x26a63290  addiu       $a2, $s5, 0x3290
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12944));
label_15d8e4:
    // 0x15d8e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15d8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d8e8:
    // 0x15d8e8: 0xc058d5a  jal         func_163568
label_15d8ec:
    if (ctx->pc == 0x15D8ECu) {
        ctx->pc = 0x15D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8E8u;
        // 0x15d8ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8F0u;
        goto label_15d8f0;
    }
    ctx->pc = 0x15D8E8u;
    SET_GPR_U32(ctx, 31, 0x15D8F0u);
    ctx->pc = 0x15D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D8E8u;
    // 0x15d8ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x15D8E8u, 0x15D8F0u)) {
        return;
    }
    ctx->pc = 0x15D8F0u;
label_15d8f0:
    // 0x15d8f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15d8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d8f4:
    // 0x15d8f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_15d8f8:
    if (ctx->pc == 0x15D8F8u) {
        ctx->pc = 0x15D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8F4u;
        // 0x15d8f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8FCu;
        goto label_15d8fc;
    }
    ctx->pc = 0x15D8F4u;
    {
        const bool branch_taken_0x15d8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d8f4) {
            ctx->pc = 0x15D8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D8F4u;
            // 0x15d8f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D914u;
            goto label_15d914;
        }
    }
    ctx->pc = 0x15D8FCu;
label_15d8fc:
    // 0x15d8fc: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_15d900:
    // 0x15d900: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_15d904:
    if (ctx->pc == 0x15D904u) {
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D908u;
        goto label_15d908;
    }
    ctx->pc = 0x15D900u;
    {
        const bool branch_taken_0x15d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d900) {
            ctx->pc = 0x15D904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D900u;
            // 0x15d904: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D914u;
            goto label_15d914;
        }
    }
    ctx->pc = 0x15D908u;
label_15d908:
    // 0x15d908: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15d90c:
    // 0x15d90c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_15d910:
    // 0x15d910: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15d914:
    // 0x15d914: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15d914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_15d918:
    // 0x15d918: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x15d918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_15d91c:
    // 0x15d91c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_15d920:
    if (ctx->pc == 0x15D920u) {
        ctx->pc = 0x15D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D91Cu;
        // 0x15d920: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D924u;
        goto label_15d924;
    }
    ctx->pc = 0x15D91Cu;
    {
        const bool branch_taken_0x15d91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D91Cu;
        // 0x15d920: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d91c) {
            ctx->pc = 0x15D8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d8c8;
        }
    }
    ctx->pc = 0x15D924u;
label_15d924:
    // 0x15d924: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15d928:
    // 0x15d928: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15d92c:
    // 0x15d92c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d930:
    // 0x15d930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d934:
    // 0x15d934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d938:
    // 0x15d938: 0xc07f0c8  jal         func_1FC320
label_15d93c:
    if (ctx->pc == 0x15D93Cu) {
        ctx->pc = 0x15D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D938u;
        // 0x15d93c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D940u;
        goto label_15d940;
    }
    ctx->pc = 0x15D938u;
    SET_GPR_U32(ctx, 31, 0x15D940u);
    ctx->pc = 0x15D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D938u;
    // 0x15d93c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15D938u, 0x15D940u)) {
        return;
    }
    ctx->pc = 0x15D940u;
label_15d940:
    // 0x15d940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15d944:
    // 0x15d944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d948:
    // 0x15d948: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_15d94c:
    if (ctx->pc == 0x15D94Cu) {
        ctx->pc = 0x15D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D948u;
        // 0x15d94c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D950u;
        goto label_15d950;
    }
    ctx->pc = 0x15D948u;
    {
        const bool branch_taken_0x15d948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D948u;
        // 0x15d94c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d948) {
            ctx->pc = 0x15D868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d868;
        }
    }
    ctx->pc = 0x15D950u;
label_15d950:
    // 0x15d950: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x15d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15d954:
    // 0x15d954: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x15d954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15d958:
    // 0x15d958: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x15d958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15d95c:
    // 0x15d95c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x15d95cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15d960:
    // 0x15d960: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x15d960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15d964:
    // 0x15d964: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x15d964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15d968:
    // 0x15d968: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d968u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15d96c:
    // 0x15d96c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x15d96cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d970:
    // 0x15d970: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x15d970u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d974:
    // 0x15d974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d978:
    // 0x15d978: 0x3e00008  jr          $ra
label_15d97c:
    if (ctx->pc == 0x15D97Cu) {
        ctx->pc = 0x15D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D978u;
        // 0x15d97c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D980u;
        goto label_fallthrough_0x15d978;
    }
    ctx->pc = 0x15D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D978u;
        // 0x15d97c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d978:
    ctx->pc = 0x15D980u;
}
