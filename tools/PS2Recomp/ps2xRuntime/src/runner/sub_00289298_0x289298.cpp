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

// Function: sub_00289298
// Address: 0x289298 - 0x289410
void sub_00289298_0x289298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289298_0x289298");
#endif

    switch (ctx->pc) {
        case 0x289298u: goto label_289298;
        case 0x28929cu: goto label_28929c;
        case 0x2892a0u: goto label_2892a0;
        case 0x2892a4u: goto label_2892a4;
        case 0x2892a8u: goto label_2892a8;
        case 0x2892acu: goto label_2892ac;
        case 0x2892b0u: goto label_2892b0;
        case 0x2892b4u: goto label_2892b4;
        case 0x2892b8u: goto label_2892b8;
        case 0x2892bcu: goto label_2892bc;
        case 0x2892c0u: goto label_2892c0;
        case 0x2892c4u: goto label_2892c4;
        case 0x2892c8u: goto label_2892c8;
        case 0x2892ccu: goto label_2892cc;
        case 0x2892d0u: goto label_2892d0;
        case 0x2892d4u: goto label_2892d4;
        case 0x2892d8u: goto label_2892d8;
        case 0x2892dcu: goto label_2892dc;
        case 0x2892e0u: goto label_2892e0;
        case 0x2892e4u: goto label_2892e4;
        case 0x2892e8u: goto label_2892e8;
        case 0x2892ecu: goto label_2892ec;
        case 0x2892f0u: goto label_2892f0;
        case 0x2892f4u: goto label_2892f4;
        case 0x2892f8u: goto label_2892f8;
        case 0x2892fcu: goto label_2892fc;
        case 0x289300u: goto label_289300;
        case 0x289304u: goto label_289304;
        case 0x289308u: goto label_289308;
        case 0x28930cu: goto label_28930c;
        case 0x289310u: goto label_289310;
        case 0x289314u: goto label_289314;
        case 0x289318u: goto label_289318;
        case 0x28931cu: goto label_28931c;
        case 0x289320u: goto label_289320;
        case 0x289324u: goto label_289324;
        case 0x289328u: goto label_289328;
        case 0x28932cu: goto label_28932c;
        case 0x289330u: goto label_289330;
        case 0x289334u: goto label_289334;
        case 0x289338u: goto label_289338;
        case 0x28933cu: goto label_28933c;
        case 0x289340u: goto label_289340;
        case 0x289344u: goto label_289344;
        case 0x289348u: goto label_289348;
        case 0x28934cu: goto label_28934c;
        case 0x289350u: goto label_289350;
        case 0x289354u: goto label_289354;
        case 0x289358u: goto label_289358;
        case 0x28935cu: goto label_28935c;
        case 0x289360u: goto label_289360;
        case 0x289364u: goto label_289364;
        case 0x289368u: goto label_289368;
        case 0x28936cu: goto label_28936c;
        case 0x289370u: goto label_289370;
        case 0x289374u: goto label_289374;
        case 0x289378u: goto label_289378;
        case 0x28937cu: goto label_28937c;
        case 0x289380u: goto label_289380;
        case 0x289384u: goto label_289384;
        case 0x289388u: goto label_289388;
        case 0x28938cu: goto label_28938c;
        case 0x289390u: goto label_289390;
        case 0x289394u: goto label_289394;
        case 0x289398u: goto label_289398;
        case 0x28939cu: goto label_28939c;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893a4u: goto label_2893a4;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893acu: goto label_2893ac;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893b4u: goto label_2893b4;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893bcu: goto label_2893bc;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893c4u: goto label_2893c4;
        case 0x2893c8u: goto label_2893c8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893d4u: goto label_2893d4;
        case 0x2893d8u: goto label_2893d8;
        case 0x2893dcu: goto label_2893dc;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893e4u: goto label_2893e4;
        case 0x2893e8u: goto label_2893e8;
        case 0x2893ecu: goto label_2893ec;
        case 0x2893f0u: goto label_2893f0;
        case 0x2893f4u: goto label_2893f4;
        case 0x2893f8u: goto label_2893f8;
        case 0x2893fcu: goto label_2893fc;
        case 0x289400u: goto label_289400;
        case 0x289404u: goto label_289404;
        case 0x289408u: goto label_289408;
        case 0x28940cu: goto label_28940c;
        default: break;
    }

    ctx->pc = 0x289298u;

label_289298:
    // 0x289298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x289298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28929c:
    // 0x28929c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2892a0:
    // 0x2892a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2892a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2892a4:
    // 0x2892a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2892a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2892a8:
    // 0x2892a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2892a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2892ac:
    // 0x2892ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2892acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2892b0:
    // 0x2892b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2892b4:
    // 0x2892b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2892b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2892b8:
    // 0x2892b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2892bc:
    if (ctx->pc == 0x2892BCu) {
        ctx->pc = 0x2892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B8u;
        // 0x2892bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892C0u;
        goto label_2892c0;
    }
    ctx->pc = 0x2892B8u;
    {
        const bool branch_taken_0x2892b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B8u;
        // 0x2892bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892b8) {
            ctx->pc = 0x289304u;
            goto label_289304;
        }
    }
    ctx->pc = 0x2892C0u;
label_2892c0:
    // 0x2892c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2892c4:
    // 0x2892c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2892c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2892c8:
    // 0x2892c8: 0x2442cd60  addiu       $v0, $v0, -0x32A0
    ctx->pc = 0x2892c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954336));
label_2892cc:
    // 0x2892cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2892d0:
    // 0x2892d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2892d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2892d4:
    // 0x2892d4: 0x800008  jr          $a0
label_2892d8:
    if (ctx->pc == 0x2892D8u) {
        ctx->pc = 0x2892DCu;
        goto label_2892dc;
    }
    ctx->pc = 0x2892D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2892DCu: goto label_2892dc;
            case 0x2892F0u: goto label_2892f0;
            case 0x289304u: goto label_289304;
            case 0x28930Cu: goto label_28930c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2892DCu;
label_2892dc:
    // 0x2892dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2892dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2892e0:
    // 0x2892e0: 0xc0a2e0e  jal         func_28B838
label_2892e4:
    if (ctx->pc == 0x2892E4u) {
        ctx->pc = 0x2892E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892E0u;
        // 0x2892e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892E8u;
        goto label_2892e8;
    }
    ctx->pc = 0x2892E0u;
    SET_GPR_U32(ctx, 31, 0x2892E8u);
    ctx->pc = 0x2892E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892E0u;
    // 0x2892e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B838u, 0x2892E0u, 0x2892E8u)) {
        return;
    }
    ctx->pc = 0x2892E8u;
label_2892e8:
    // 0x2892e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2892ec:
    if (ctx->pc == 0x2892ECu) {
        ctx->pc = 0x2892F0u;
        goto label_2892f0;
    }
    ctx->pc = 0x2892E8u;
    {
        const bool branch_taken_0x2892e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2892e8) {
            ctx->pc = 0x2892FCu;
            goto label_2892fc;
        }
    }
    ctx->pc = 0x2892F0u;
label_2892f0:
    // 0x2892f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2892f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2892f4:
    // 0x2892f4: 0xc0a36e8  jal         func_28DBA0
label_2892f8:
    if (ctx->pc == 0x2892F8u) {
        ctx->pc = 0x2892F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892F4u;
        // 0x2892f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892FCu;
        goto label_2892fc;
    }
    ctx->pc = 0x2892F4u;
    SET_GPR_U32(ctx, 31, 0x2892FCu);
    ctx->pc = 0x2892F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892F4u;
    // 0x2892f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DBA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28DBA0u, 0x2892F4u, 0x2892FCu)) {
        return;
    }
    ctx->pc = 0x2892FCu;
label_2892fc:
    // 0x2892fc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_289300:
    if (ctx->pc == 0x289300u) {
        ctx->pc = 0x289300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892FCu;
        // 0x289300: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289304u;
        goto label_289304;
    }
    ctx->pc = 0x2892FCu;
    {
        const bool branch_taken_0x2892fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892FCu;
        // 0x289300: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892fc) {
            ctx->pc = 0x2893A0u;
            goto label_2893a0;
        }
    }
    ctx->pc = 0x289304u;
label_289304:
    // 0x289304: 0x10000026  b           . + 4 + (0x26 << 2)
label_289308:
    if (ctx->pc == 0x289308u) {
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289304u;
        // 0x289308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28930Cu;
        goto label_28930c;
    }
    ctx->pc = 0x289304u;
    {
        const bool branch_taken_0x289304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289304u;
        // 0x289308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289304) {
            ctx->pc = 0x2893A0u;
            goto label_2893a0;
        }
    }
    ctx->pc = 0x28930Cu;
label_28930c:
    // 0x28930c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_289310:
    // 0x289310: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_289314:
    // 0x289314: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289318:
    // 0x289318: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x289318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_28931c:
    // 0x28931c: 0xc0936ae  jal         func_24DAB8
label_289320:
    if (ctx->pc == 0x289320u) {
        ctx->pc = 0x289320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28931Cu;
        // 0x289320: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289324u;
        goto label_289324;
    }
    ctx->pc = 0x28931Cu;
    SET_GPR_U32(ctx, 31, 0x289324u);
    ctx->pc = 0x289320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28931Cu;
    // 0x289320: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x28931Cu, 0x289324u)) {
        return;
    }
    ctx->pc = 0x289324u;
label_289324:
    // 0x289324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289328:
    // 0x289328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28932c:
    // 0x28932c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289330:
    // 0x289330: 0xc0a263e  jal         func_2898F8
label_289334:
    if (ctx->pc == 0x289334u) {
        ctx->pc = 0x289334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289330u;
        // 0x289334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289338u;
        goto label_289338;
    }
    ctx->pc = 0x289330u;
    SET_GPR_U32(ctx, 31, 0x289338u);
    ctx->pc = 0x289334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289330u;
    // 0x289334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2898F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2898F8u, 0x289330u, 0x289338u)) {
        return;
    }
    ctx->pc = 0x289338u;
label_289338:
    // 0x289338: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_28933c:
    if (ctx->pc == 0x28933Cu) {
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289338u;
        // 0x28933c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289340u;
        goto label_289340;
    }
    ctx->pc = 0x289338u;
    {
        const bool branch_taken_0x289338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289338u;
        // 0x28933c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289338) {
            ctx->pc = 0x289304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289304;
        }
    }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0xc09366a  jal         func_24D9A8
label_289344:
    if (ctx->pc == 0x289344u) {
        ctx->pc = 0x289344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289340u;
        // 0x289344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289348u;
        goto label_289348;
    }
    ctx->pc = 0x289340u;
    SET_GPR_U32(ctx, 31, 0x289348u);
    ctx->pc = 0x289344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289340u;
    // 0x289344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x289340u, 0x289348u)) {
        return;
    }
    ctx->pc = 0x289348u;
label_289348:
    // 0x289348: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28934c:
    // 0x28934c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_289350:
    // 0x289350: 0xc0936ae  jal         func_24DAB8
label_289354:
    if (ctx->pc == 0x289354u) {
        ctx->pc = 0x289354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289350u;
        // 0x289354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289358u;
        goto label_289358;
    }
    ctx->pc = 0x289350u;
    SET_GPR_U32(ctx, 31, 0x289358u);
    ctx->pc = 0x289354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289350u;
    // 0x289354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x289350u, 0x289358u)) {
        return;
    }
    ctx->pc = 0x289358u;
label_289358:
    // 0x289358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28935c:
    // 0x28935c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289360:
    // 0x289360: 0xc0a25e8  jal         func_2897A0
label_289364:
    if (ctx->pc == 0x289364u) {
        ctx->pc = 0x289364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289360u;
        // 0x289364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289368u;
        goto label_289368;
    }
    ctx->pc = 0x289360u;
    SET_GPR_U32(ctx, 31, 0x289368u);
    ctx->pc = 0x289364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289360u;
    // 0x289364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2897A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2897A0u, 0x289360u, 0x289368u)) {
        return;
    }
    ctx->pc = 0x289368u;
label_289368:
    // 0x289368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28936c:
    // 0x28936c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289370:
    // 0x289370: 0xc0a2660  jal         func_289980
label_289374:
    if (ctx->pc == 0x289374u) {
        ctx->pc = 0x289374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289370u;
        // 0x289374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289378u;
        goto label_289378;
    }
    ctx->pc = 0x289370u;
    SET_GPR_U32(ctx, 31, 0x289378u);
    ctx->pc = 0x289374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289370u;
    // 0x289374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289980u, 0x289370u, 0x289378u)) {
        return;
    }
    ctx->pc = 0x289378u;
label_289378:
    // 0x289378: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28937c:
    if (ctx->pc == 0x28937Cu) {
        ctx->pc = 0x28937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289378u;
        // 0x28937c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289380u;
        goto label_289380;
    }
    ctx->pc = 0x289378u;
    {
        const bool branch_taken_0x289378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289378u;
        // 0x28937c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289378) {
            ctx->pc = 0x2893A0u;
            goto label_2893a0;
        }
    }
    ctx->pc = 0x289380u;
label_289380:
    // 0x289380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289384:
    // 0x289384: 0xc09366a  jal         func_24D9A8
label_289388:
    if (ctx->pc == 0x289388u) {
        ctx->pc = 0x289388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289384u;
        // 0x289388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28938Cu;
        goto label_28938c;
    }
    ctx->pc = 0x289384u;
    SET_GPR_U32(ctx, 31, 0x28938Cu);
    ctx->pc = 0x289388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289384u;
    // 0x289388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x289384u, 0x28938Cu)) {
        return;
    }
    ctx->pc = 0x28938Cu;
label_28938c:
    // 0x28938c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28938cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_289390:
    // 0x289390: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x289390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_289394:
    // 0x289394: 0x40f809  jalr        $v0
label_289398:
    if (ctx->pc == 0x289398u) {
        ctx->pc = 0x289398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289394u;
        // 0x289398: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28939Cu;
        goto label_28939c;
    }
    ctx->pc = 0x289394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28939Cu);
        ctx->pc = 0x289398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289394u;
        // 0x289398: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289394u, 0x28939Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28939Cu;
label_28939c:
    // 0x28939c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28939cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2893a0:
    // 0x2893a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2893a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2893a4:
    // 0x2893a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2893a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2893a8:
    // 0x2893a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2893a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2893ac:
    // 0x2893ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2893acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2893b0:
    // 0x2893b0: 0x3e00008  jr          $ra
label_2893b4:
    if (ctx->pc == 0x2893B4u) {
        ctx->pc = 0x2893B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893B0u;
        // 0x2893b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2893B8u;
        goto label_2893b8;
    }
    ctx->pc = 0x2893B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2893B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893B0u;
        // 0x2893b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2893B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2893B8u;
label_2893b8:
    // 0x2893b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2893bc:
    // 0x2893bc: 0x0  nop
    ctx->pc = 0x2893bcu;
    // NOP
label_2893c0:
    // 0x2893c0: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x2893c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
label_2893c4:
    // 0x2893c4: 0x0  nop
    ctx->pc = 0x2893c4u;
    // NOP
label_2893c8:
    // 0x2893c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2893c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2893cc:
    // 0x2893cc: 0x0  nop
    ctx->pc = 0x2893ccu;
    // NOP
label_2893d0:
    // 0x2893d0: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x2893d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
label_2893d4:
    // 0x2893d4: 0x0  nop
    ctx->pc = 0x2893d4u;
    // NOP
label_2893d8:
    // 0x2893d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2893d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2893dc:
    // 0x2893dc: 0x0  nop
    ctx->pc = 0x2893dcu;
    // NOP
label_2893e0:
    // 0x2893e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2893e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2893e4:
    // 0x2893e4: 0x0  nop
    ctx->pc = 0x2893e4u;
    // NOP
label_2893e8:
    // 0x2893e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2893e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2893ec:
    // 0x2893ec: 0x0  nop
    ctx->pc = 0x2893ecu;
    // NOP
label_2893f0:
    // 0x2893f0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2893f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2893f4:
    // 0x2893f4: 0x0  nop
    ctx->pc = 0x2893f4u;
    // NOP
label_2893f8:
    // 0x2893f8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2893f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2893fc:
    // 0x2893fc: 0x0  nop
    ctx->pc = 0x2893fcu;
    // NOP
label_289400:
    // 0x289400: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x289400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_289404:
    // 0x289404: 0x0  nop
    ctx->pc = 0x289404u;
    // NOP
label_289408:
    // 0x289408: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x289408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_28940c:
    // 0x28940c: 0x0  nop
    ctx->pc = 0x28940cu;
    // NOP
    ctx->pc = 0x289410u;
}
