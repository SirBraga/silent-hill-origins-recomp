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

// Function: sub_00324690
// Address: 0x324690 - 0x324760
void sub_00324690_0x324690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324690_0x324690");
#endif

    switch (ctx->pc) {
        case 0x324690u: goto label_324690;
        case 0x324694u: goto label_324694;
        case 0x324698u: goto label_324698;
        case 0x32469cu: goto label_32469c;
        case 0x3246a0u: goto label_3246a0;
        case 0x3246a4u: goto label_3246a4;
        case 0x3246a8u: goto label_3246a8;
        case 0x3246acu: goto label_3246ac;
        case 0x3246b0u: goto label_3246b0;
        case 0x3246b4u: goto label_3246b4;
        case 0x3246b8u: goto label_3246b8;
        case 0x3246bcu: goto label_3246bc;
        case 0x3246c0u: goto label_3246c0;
        case 0x3246c4u: goto label_3246c4;
        case 0x3246c8u: goto label_3246c8;
        case 0x3246ccu: goto label_3246cc;
        case 0x3246d0u: goto label_3246d0;
        case 0x3246d4u: goto label_3246d4;
        case 0x3246d8u: goto label_3246d8;
        case 0x3246dcu: goto label_3246dc;
        case 0x3246e0u: goto label_3246e0;
        case 0x3246e4u: goto label_3246e4;
        case 0x3246e8u: goto label_3246e8;
        case 0x3246ecu: goto label_3246ec;
        case 0x3246f0u: goto label_3246f0;
        case 0x3246f4u: goto label_3246f4;
        case 0x3246f8u: goto label_3246f8;
        case 0x3246fcu: goto label_3246fc;
        case 0x324700u: goto label_324700;
        case 0x324704u: goto label_324704;
        case 0x324708u: goto label_324708;
        case 0x32470cu: goto label_32470c;
        case 0x324710u: goto label_324710;
        case 0x324714u: goto label_324714;
        case 0x324718u: goto label_324718;
        case 0x32471cu: goto label_32471c;
        case 0x324720u: goto label_324720;
        case 0x324724u: goto label_324724;
        case 0x324728u: goto label_324728;
        case 0x32472cu: goto label_32472c;
        case 0x324730u: goto label_324730;
        case 0x324734u: goto label_324734;
        case 0x324738u: goto label_324738;
        case 0x32473cu: goto label_32473c;
        case 0x324740u: goto label_324740;
        case 0x324744u: goto label_324744;
        case 0x324748u: goto label_324748;
        case 0x32474cu: goto label_32474c;
        case 0x324750u: goto label_324750;
        case 0x324754u: goto label_324754;
        case 0x324758u: goto label_324758;
        case 0x32475cu: goto label_32475c;
        default: break;
    }

    ctx->pc = 0x324690u;

label_324690:
    // 0x324690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_324694:
    // 0x324694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x324694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_324698:
    // 0x324698: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x324698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32469c:
    // 0x32469c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x32469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_3246a0:
    // 0x3246a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3246a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3246a4:
    // 0x3246a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3246a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3246a8:
    // 0x3246a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3246a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3246ac:
    // 0x3246ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3246acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3246b0:
    // 0x3246b0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3246b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3246b4:
    // 0x3246b4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3246b8:
    if (ctx->pc == 0x3246B8u) {
        ctx->pc = 0x3246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246B4u;
        // 0x3246b8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246BCu;
        goto label_3246bc;
    }
    ctx->pc = 0x3246B4u;
    {
        const bool branch_taken_0x3246b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246B4u;
        // 0x3246b8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246b4) {
            ctx->pc = 0x3246DCu;
            goto label_3246dc;
        }
    }
    ctx->pc = 0x3246BCu;
label_3246bc:
    // 0x3246bc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3246c0:
    if (ctx->pc == 0x3246C0u) {
        ctx->pc = 0x3246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246BCu;
        // 0x3246c0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246C4u;
        goto label_3246c4;
    }
    ctx->pc = 0x3246BCu;
    {
        const bool branch_taken_0x3246bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246BCu;
        // 0x3246c0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246bc) {
            ctx->pc = 0x324724u;
            goto label_324724;
        }
    }
    ctx->pc = 0x3246C4u;
label_3246c4:
    // 0x3246c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3246c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3246c8:
    // 0x3246c8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x3246c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_3246cc:
    // 0x3246cc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_3246d0:
    if (ctx->pc == 0x3246D0u) {
        ctx->pc = 0x3246D4u;
        goto label_3246d4;
    }
    ctx->pc = 0x3246CCu;
    {
        const bool branch_taken_0x3246cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3246cc) {
            ctx->pc = 0x324714u;
            goto label_324714;
        }
    }
    ctx->pc = 0x3246D4u;
label_3246d4:
    // 0x3246d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3246d8:
    if (ctx->pc == 0x3246D8u) {
        ctx->pc = 0x3246D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246D4u;
        // 0x3246d8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246DCu;
        goto label_3246dc;
    }
    ctx->pc = 0x3246D4u;
    {
        const bool branch_taken_0x3246d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3246D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246D4u;
        // 0x3246d8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246d4) {
            ctx->pc = 0x324728u;
            goto label_324728;
        }
    }
    ctx->pc = 0x3246DCu;
label_3246dc:
    // 0x3246dc: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x3246dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3246e0:
    // 0x3246e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3246e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3246e4:
    // 0x3246e4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3246e8:
    if (ctx->pc == 0x3246E8u) {
        ctx->pc = 0x3246E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246E4u;
        // 0x3246e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246ECu;
        goto label_3246ec;
    }
    ctx->pc = 0x3246E4u;
    {
        const bool branch_taken_0x3246e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246e4) {
            ctx->pc = 0x3246E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3246E4u;
            // 0x3246e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324728u;
            goto label_324728;
        }
    }
    ctx->pc = 0x3246ECu;
label_3246ec:
    // 0x3246ec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3246ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3246f0:
    // 0x3246f0: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3246f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3246f4:
    // 0x3246f4: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3246f4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3246f8:
    // 0x3246f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3246f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3246fc:
    // 0x3246fc: 0x40f809  jalr        $v0
label_324700:
    if (ctx->pc == 0x324700u) {
        ctx->pc = 0x324700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246FCu;
        // 0x324700: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324704u;
        goto label_324704;
    }
    ctx->pc = 0x3246FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324704u);
        ctx->pc = 0x324700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246FCu;
        // 0x324700: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3246FCu, 0x324704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324704u;
label_324704:
    // 0x324704: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x324704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_324708:
    // 0x324708: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x324708u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32470c:
    // 0x32470c: 0x10000005  b           . + 4 + (0x5 << 2)
label_324710:
    if (ctx->pc == 0x324710u) {
        ctx->pc = 0x324710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32470Cu;
        // 0x324710: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324714u;
        goto label_324714;
    }
    ctx->pc = 0x32470Cu;
    {
        const bool branch_taken_0x32470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32470Cu;
        // 0x324710: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32470c) {
            ctx->pc = 0x324724u;
            goto label_324724;
        }
    }
    ctx->pc = 0x324714u;
label_324714:
    // 0x324714: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x324714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_324718:
    // 0x324718: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x324718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_32471c:
    // 0x32471c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x32471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_324720:
    // 0x324720: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x324720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_324724:
    // 0x324724: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x324724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_324728:
    // 0x324728: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_32472c:
    if (ctx->pc == 0x32472Cu) {
        ctx->pc = 0x324730u;
        goto label_324730;
    }
    ctx->pc = 0x324728u;
    {
        const bool branch_taken_0x324728 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x324728) {
            ctx->pc = 0x324738u;
            goto label_324738;
        }
    }
    ctx->pc = 0x324730u;
label_324730:
    // 0x324730: 0xc0c84d4  jal         func_321350
label_324734:
    if (ctx->pc == 0x324734u) {
        ctx->pc = 0x324738u;
        goto label_324738;
    }
    ctx->pc = 0x324730u;
    SET_GPR_U32(ctx, 31, 0x324738u);
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x324730u, 0x324738u)) {
        return;
    }
    ctx->pc = 0x324738u;
label_324738:
    // 0x324738: 0xc0c9180  jal         func_324600
label_32473c:
    if (ctx->pc == 0x32473Cu) {
        ctx->pc = 0x32473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324738u;
        // 0x32473c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324740u;
        goto label_324740;
    }
    ctx->pc = 0x324738u;
    SET_GPR_U32(ctx, 31, 0x324740u);
    ctx->pc = 0x32473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324738u;
    // 0x32473c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324600u, 0x324738u, 0x324740u)) {
        return;
    }
    ctx->pc = 0x324740u;
label_324740:
    // 0x324740: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x324740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_324744:
    // 0x324744: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_324748:
    // 0x324748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x324748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32474c:
    // 0x32474c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324750:
    // 0x324750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_324754:
    // 0x324754: 0x3e00008  jr          $ra
label_324758:
    if (ctx->pc == 0x324758u) {
        ctx->pc = 0x324758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324754u;
        // 0x324758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32475Cu;
        goto label_32475c;
    }
    ctx->pc = 0x324754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324754u;
        // 0x324758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32475Cu;
label_32475c:
    // 0x32475c: 0x0  nop
    ctx->pc = 0x32475cu;
    // NOP
    ctx->pc = 0x324760u;
}
