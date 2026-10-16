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

// Function: sub_00304878
// Address: 0x304878 - 0x304a18
void sub_00304878_0x304878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304878_0x304878");
#endif

    switch (ctx->pc) {
        case 0x304878u: goto label_304878;
        case 0x30487cu: goto label_30487c;
        case 0x304880u: goto label_304880;
        case 0x304884u: goto label_304884;
        case 0x304888u: goto label_304888;
        case 0x30488cu: goto label_30488c;
        case 0x304890u: goto label_304890;
        case 0x304894u: goto label_304894;
        case 0x304898u: goto label_304898;
        case 0x30489cu: goto label_30489c;
        case 0x3048a0u: goto label_3048a0;
        case 0x3048a4u: goto label_3048a4;
        case 0x3048a8u: goto label_3048a8;
        case 0x3048acu: goto label_3048ac;
        case 0x3048b0u: goto label_3048b0;
        case 0x3048b4u: goto label_3048b4;
        case 0x3048b8u: goto label_3048b8;
        case 0x3048bcu: goto label_3048bc;
        case 0x3048c0u: goto label_3048c0;
        case 0x3048c4u: goto label_3048c4;
        case 0x3048c8u: goto label_3048c8;
        case 0x3048ccu: goto label_3048cc;
        case 0x3048d0u: goto label_3048d0;
        case 0x3048d4u: goto label_3048d4;
        case 0x3048d8u: goto label_3048d8;
        case 0x3048dcu: goto label_3048dc;
        case 0x3048e0u: goto label_3048e0;
        case 0x3048e4u: goto label_3048e4;
        case 0x3048e8u: goto label_3048e8;
        case 0x3048ecu: goto label_3048ec;
        case 0x3048f0u: goto label_3048f0;
        case 0x3048f4u: goto label_3048f4;
        case 0x3048f8u: goto label_3048f8;
        case 0x3048fcu: goto label_3048fc;
        case 0x304900u: goto label_304900;
        case 0x304904u: goto label_304904;
        case 0x304908u: goto label_304908;
        case 0x30490cu: goto label_30490c;
        case 0x304910u: goto label_304910;
        case 0x304914u: goto label_304914;
        case 0x304918u: goto label_304918;
        case 0x30491cu: goto label_30491c;
        case 0x304920u: goto label_304920;
        case 0x304924u: goto label_304924;
        case 0x304928u: goto label_304928;
        case 0x30492cu: goto label_30492c;
        case 0x304930u: goto label_304930;
        case 0x304934u: goto label_304934;
        case 0x304938u: goto label_304938;
        case 0x30493cu: goto label_30493c;
        case 0x304940u: goto label_304940;
        case 0x304944u: goto label_304944;
        case 0x304948u: goto label_304948;
        case 0x30494cu: goto label_30494c;
        case 0x304950u: goto label_304950;
        case 0x304954u: goto label_304954;
        case 0x304958u: goto label_304958;
        case 0x30495cu: goto label_30495c;
        case 0x304960u: goto label_304960;
        case 0x304964u: goto label_304964;
        case 0x304968u: goto label_304968;
        case 0x30496cu: goto label_30496c;
        case 0x304970u: goto label_304970;
        case 0x304974u: goto label_304974;
        case 0x304978u: goto label_304978;
        case 0x30497cu: goto label_30497c;
        case 0x304980u: goto label_304980;
        case 0x304984u: goto label_304984;
        case 0x304988u: goto label_304988;
        case 0x30498cu: goto label_30498c;
        case 0x304990u: goto label_304990;
        case 0x304994u: goto label_304994;
        case 0x304998u: goto label_304998;
        case 0x30499cu: goto label_30499c;
        case 0x3049a0u: goto label_3049a0;
        case 0x3049a4u: goto label_3049a4;
        case 0x3049a8u: goto label_3049a8;
        case 0x3049acu: goto label_3049ac;
        case 0x3049b0u: goto label_3049b0;
        case 0x3049b4u: goto label_3049b4;
        case 0x3049b8u: goto label_3049b8;
        case 0x3049bcu: goto label_3049bc;
        case 0x3049c0u: goto label_3049c0;
        case 0x3049c4u: goto label_3049c4;
        case 0x3049c8u: goto label_3049c8;
        case 0x3049ccu: goto label_3049cc;
        case 0x3049d0u: goto label_3049d0;
        case 0x3049d4u: goto label_3049d4;
        case 0x3049d8u: goto label_3049d8;
        case 0x3049dcu: goto label_3049dc;
        case 0x3049e0u: goto label_3049e0;
        case 0x3049e4u: goto label_3049e4;
        case 0x3049e8u: goto label_3049e8;
        case 0x3049ecu: goto label_3049ec;
        case 0x3049f0u: goto label_3049f0;
        case 0x3049f4u: goto label_3049f4;
        case 0x3049f8u: goto label_3049f8;
        case 0x3049fcu: goto label_3049fc;
        case 0x304a00u: goto label_304a00;
        case 0x304a04u: goto label_304a04;
        case 0x304a08u: goto label_304a08;
        case 0x304a0cu: goto label_304a0c;
        case 0x304a10u: goto label_304a10;
        case 0x304a14u: goto label_304a14;
        default: break;
    }

    ctx->pc = 0x304878u;

label_304878:
    // 0x304878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x304878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30487c:
    // 0x30487c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_304880:
    // 0x304880: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x304880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_304884:
    // 0x304884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304888:
    // 0x304888: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x304888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_30488c:
    // 0x30488c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_304890:
    // 0x304890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_304894:
    // 0x304894: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x304894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_304898:
    // 0x304898: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_30489c:
    if (ctx->pc == 0x30489Cu) {
        ctx->pc = 0x30489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304898u;
        // 0x30489c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048A0u;
        goto label_3048a0;
    }
    ctx->pc = 0x304898u;
    {
        const bool branch_taken_0x304898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304898u;
        // 0x30489c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304898) {
            ctx->pc = 0x3049F4u;
            goto label_3049f4;
        }
    }
    ctx->pc = 0x3048A0u;
label_3048a0:
    // 0x3048a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3048a4:
    // 0x3048a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3048a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3048a8:
    // 0x3048a8: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x3048a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_3048ac:
    // 0x3048ac: 0x24460fc8  addiu       $a2, $v0, 0xFC8
    ctx->pc = 0x3048acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_3048b0:
    // 0x3048b0: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3048b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3048b4:
    // 0x3048b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3048b8:
    // 0x3048b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3048bc:
    // 0x3048bc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x3048bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_3048c0:
    // 0x3048c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3048c4:
    if (ctx->pc == 0x3048C4u) {
        ctx->pc = 0x3048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048C0u;
        // 0x3048c4: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048C8u;
        goto label_3048c8;
    }
    ctx->pc = 0x3048C0u;
    {
        const bool branch_taken_0x3048c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048C0u;
        // 0x3048c4: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048c0) {
            ctx->pc = 0x304904u;
            goto label_304904;
        }
    }
    ctx->pc = 0x3048C8u;
label_3048c8:
    // 0x3048c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3048c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3048cc:
    // 0x3048cc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3048ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3048d0:
    // 0x3048d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3048d4:
    if (ctx->pc == 0x3048D4u) {
        ctx->pc = 0x3048D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048D0u;
        // 0x3048d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048D8u;
        goto label_3048d8;
    }
    ctx->pc = 0x3048D0u;
    {
        const bool branch_taken_0x3048d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048D0u;
        // 0x3048d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048d0) {
            ctx->pc = 0x3048E8u;
            goto label_3048e8;
        }
    }
    ctx->pc = 0x3048D8u;
label_3048d8:
    // 0x3048d8: 0xc0c0d48  jal         func_303520
label_3048dc:
    if (ctx->pc == 0x3048DCu) {
        ctx->pc = 0x3048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048D8u;
        // 0x3048dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048E0u;
        goto label_3048e0;
    }
    ctx->pc = 0x3048D8u;
    SET_GPR_U32(ctx, 31, 0x3048E0u);
    ctx->pc = 0x3048DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048D8u;
    // 0x3048dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303520u, 0x3048D8u, 0x3048E0u)) {
        return;
    }
    ctx->pc = 0x3048E0u;
label_3048e0:
    // 0x3048e0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3048e4:
    if (ctx->pc == 0x3048E4u) {
        ctx->pc = 0x3048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048E0u;
        // 0x3048e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048E8u;
        goto label_3048e8;
    }
    ctx->pc = 0x3048E0u;
    {
        const bool branch_taken_0x3048e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048E0u;
        // 0x3048e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048e0) {
            ctx->pc = 0x3049F4u;
            goto label_3049f4;
        }
    }
    ctx->pc = 0x3048E8u;
label_3048e8:
    // 0x3048e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3048e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3048ec:
    // 0x3048ec: 0xc0c0da6  jal         func_303698
label_3048f0:
    if (ctx->pc == 0x3048F0u) {
        ctx->pc = 0x3048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048ECu;
        // 0x3048f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048F4u;
        goto label_3048f4;
    }
    ctx->pc = 0x3048ECu;
    SET_GPR_U32(ctx, 31, 0x3048F4u);
    ctx->pc = 0x3048F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048ECu;
    // 0x3048f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303698u, 0x3048ECu, 0x3048F4u)) {
        return;
    }
    ctx->pc = 0x3048F4u;
label_3048f4:
    // 0x3048f4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3048f8:
    if (ctx->pc == 0x3048F8u) {
        ctx->pc = 0x3048F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048F4u;
        // 0x3048f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048FCu;
        goto label_3048fc;
    }
    ctx->pc = 0x3048F4u;
    {
        const bool branch_taken_0x3048f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3048F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048F4u;
        // 0x3048f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048f4) {
            ctx->pc = 0x30495Cu;
            goto label_30495c;
        }
    }
    ctx->pc = 0x3048FCu;
label_3048fc:
    // 0x3048fc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_304900:
    if (ctx->pc == 0x304900u) {
        ctx->pc = 0x304900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048FCu;
        // 0x304900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304904u;
        goto label_304904;
    }
    ctx->pc = 0x3048FCu;
    {
        const bool branch_taken_0x3048fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048FCu;
        // 0x304900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048fc) {
            ctx->pc = 0x3049F4u;
            goto label_3049f4;
        }
    }
    ctx->pc = 0x304904u;
label_304904:
    // 0x304904: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x304904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_304908:
    // 0x304908: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x304908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_30490c:
    // 0x30490c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304910:
    // 0x304910: 0x40f809  jalr        $v0
label_304914:
    if (ctx->pc == 0x304914u) {
        ctx->pc = 0x304914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304910u;
        // 0x304914: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304918u;
        goto label_304918;
    }
    ctx->pc = 0x304910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304918u);
        ctx->pc = 0x304914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304910u;
        // 0x304914: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304910u, 0x304918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304918u;
label_304918:
    // 0x304918: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_30491c:
    if (ctx->pc == 0x30491Cu) {
        ctx->pc = 0x30491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304918u;
        // 0x30491c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304920u;
        goto label_304920;
    }
    ctx->pc = 0x304918u;
    {
        const bool branch_taken_0x304918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304918u;
        // 0x30491c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304918) {
            ctx->pc = 0x304950u;
            goto label_304950;
        }
    }
    ctx->pc = 0x304920u;
label_304920:
    // 0x304920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304924:
    // 0x304924: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x304924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_304928:
    // 0x304928: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_30492c:
    // 0x30492c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304930:
    // 0x304930: 0xc092848  jal         func_24A120
label_304934:
    if (ctx->pc == 0x304934u) {
        ctx->pc = 0x304934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304930u;
        // 0x304934: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304938u;
        goto label_304938;
    }
    ctx->pc = 0x304930u;
    SET_GPR_U32(ctx, 31, 0x304938u);
    ctx->pc = 0x304934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304930u;
    // 0x304934: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x304930u, 0x304938u)) {
        return;
    }
    ctx->pc = 0x304938u;
label_304938:
    // 0x304938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30493c:
    // 0x30493c: 0xc09281a  jal         func_24A068
label_304940:
    if (ctx->pc == 0x304940u) {
        ctx->pc = 0x304940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30493Cu;
        // 0x304940: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304944u;
        goto label_304944;
    }
    ctx->pc = 0x30493Cu;
    SET_GPR_U32(ctx, 31, 0x304944u);
    ctx->pc = 0x304940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30493Cu;
    // 0x304940: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x30493Cu, 0x304944u)) {
        return;
    }
    ctx->pc = 0x304944u;
label_304944:
    // 0x304944: 0x1000002b  b           . + 4 + (0x2B << 2)
label_304948:
    if (ctx->pc == 0x304948u) {
        ctx->pc = 0x304948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304944u;
        // 0x304948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30494Cu;
        goto label_30494c;
    }
    ctx->pc = 0x304944u;
    {
        const bool branch_taken_0x304944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304944u;
        // 0x304948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304944) {
            ctx->pc = 0x3049F4u;
            goto label_3049f4;
        }
    }
    ctx->pc = 0x30494Cu;
label_30494c:
    // 0x30494c: 0x0  nop
    ctx->pc = 0x30494cu;
    // NOP
label_304950:
    // 0x304950: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x304950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_304954:
    // 0x304954: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x304954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_304958:
    // 0x304958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30495c:
    // 0x30495c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_304960:
    // 0x304960: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_304964:
    if (ctx->pc == 0x304964u) {
        ctx->pc = 0x304964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304960u;
        // 0x304964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304968u;
        goto label_304968;
    }
    ctx->pc = 0x304960u;
    {
        const bool branch_taken_0x304960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304960u;
        // 0x304964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304960) {
            ctx->pc = 0x3049F0u;
            goto label_3049f0;
        }
    }
    ctx->pc = 0x304968u;
label_304968:
    // 0x304968: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x304968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30496c:
    // 0x30496c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_304970:
    if (ctx->pc == 0x304970u) {
        ctx->pc = 0x304970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30496Cu;
        // 0x304970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304974u;
        goto label_304974;
    }
    ctx->pc = 0x30496Cu;
    {
        const bool branch_taken_0x30496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30496Cu;
        // 0x304970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30496c) {
            ctx->pc = 0x3049F0u;
            goto label_3049f0;
        }
    }
    ctx->pc = 0x304974u;
label_304974:
    // 0x304974: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x304974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304978:
    // 0x304978: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30497c:
    // 0x30497c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x30497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_304980:
    // 0x304980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x304980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_304984:
    // 0x304984: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x304984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_304988:
    // 0x304988: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_30498c:
    // 0x30498c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_304990:
    if (ctx->pc == 0x304990u) {
        ctx->pc = 0x304990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30498Cu;
        // 0x304990: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304994u;
        goto label_304994;
    }
    ctx->pc = 0x30498Cu;
    {
        const bool branch_taken_0x30498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30498c) {
            ctx->pc = 0x304990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30498Cu;
            // 0x304990: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3049A0u;
            goto label_3049a0;
        }
    }
    ctx->pc = 0x304994u;
label_304994:
    // 0x304994: 0x40f809  jalr        $v0
label_304998:
    if (ctx->pc == 0x304998u) {
        ctx->pc = 0x30499Cu;
        goto label_30499c;
    }
    ctx->pc = 0x304994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30499Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304994u, 0x30499Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30499Cu;
label_30499c:
    // 0x30499c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3049a0:
    // 0x3049a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3049a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3049a4:
    // 0x3049a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3049a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3049a8:
    // 0x3049a8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x3049a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3049ac:
    // 0x3049ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3049b0:
    // 0x3049b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3049b4:
    if (ctx->pc == 0x3049B4u) {
        ctx->pc = 0x3049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049B0u;
        // 0x3049b4: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049B8u;
        goto label_3049b8;
    }
    ctx->pc = 0x3049B0u;
    {
        const bool branch_taken_0x3049b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049B0u;
        // 0x3049b4: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049b0) {
            ctx->pc = 0x3049D0u;
            goto label_3049d0;
        }
    }
    ctx->pc = 0x3049B8u;
label_3049b8:
    // 0x3049b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3049b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3049bc:
    // 0x3049bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3049c0:
    if (ctx->pc == 0x3049C0u) {
        ctx->pc = 0x3049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049BCu;
        // 0x3049c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049C4u;
        goto label_3049c4;
    }
    ctx->pc = 0x3049BCu;
    {
        const bool branch_taken_0x3049bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049BCu;
        // 0x3049c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049bc) {
            ctx->pc = 0x3049D4u;
            goto label_3049d4;
        }
    }
    ctx->pc = 0x3049C4u;
label_3049c4:
    // 0x3049c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3049c8:
    // 0x3049c8: 0x60f809  jalr        $v1
label_3049cc:
    if (ctx->pc == 0x3049CCu) {
        ctx->pc = 0x3049CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049C8u;
        // 0x3049cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049D0u;
        goto label_3049d0;
    }
    ctx->pc = 0x3049C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3049D0u);
        ctx->pc = 0x3049CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049C8u;
        // 0x3049cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3049C8u, 0x3049D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3049D0u;
label_3049d0:
    // 0x3049d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3049d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3049d4:
    // 0x3049d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3049d8:
    // 0x3049d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3049dc:
    // 0x3049dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3049dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3049e0:
    // 0x3049e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3049e4:
    // 0x3049e4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3049e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3049e8:
    // 0x3049e8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_3049ec:
    if (ctx->pc == 0x3049ECu) {
        ctx->pc = 0x3049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049E8u;
        // 0x3049ec: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049F0u;
        goto label_3049f0;
    }
    ctx->pc = 0x3049E8u;
    {
        const bool branch_taken_0x3049e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049E8u;
        // 0x3049ec: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049e8) {
            ctx->pc = 0x304978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304978;
        }
    }
    ctx->pc = 0x3049F0u;
label_3049f0:
    // 0x3049f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3049f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3049f4:
    // 0x3049f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3049f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3049f8:
    // 0x3049f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3049f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3049fc:
    // 0x3049fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3049fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304a00:
    // 0x304a00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x304a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304a04:
    // 0x304a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304a08:
    // 0x304a08: 0x3e00008  jr          $ra
label_304a0c:
    if (ctx->pc == 0x304A0Cu) {
        ctx->pc = 0x304A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A08u;
        // 0x304a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A10u;
        goto label_304a10;
    }
    ctx->pc = 0x304A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A08u;
        // 0x304a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304A10u;
label_304a10:
    // 0x304a10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x304a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_304a14:
    // 0x304a14: 0x0  nop
    ctx->pc = 0x304a14u;
    // NOP
    ctx->pc = 0x304a18u;
}
