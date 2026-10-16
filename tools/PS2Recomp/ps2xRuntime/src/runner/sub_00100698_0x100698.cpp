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

// Function: sub_00100698
// Address: 0x100698 - 0x100880
void sub_00100698_0x100698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100698_0x100698");
#endif

    switch (ctx->pc) {
        case 0x1006c0u: goto label_1006c0;
        case 0x1006d8u: goto label_1006d8;
        case 0x100700u: goto label_100700;
        case 0x100780u: goto label_100780;
        case 0x10078cu: goto label_10078c;
        case 0x1007b0u: goto label_1007b0;
        case 0x1007c8u: goto label_1007c8;
        case 0x1007e0u: goto label_1007e0;
        case 0x100868u: goto label_100868;
        default: break;
    }

    ctx->pc = 0x100698u;

    // 0x100698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10069c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10069cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1006a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1006a4: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x1006a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1006a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1006a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1006acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1006b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1006b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1006b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1006b8: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x1006B8u;
    SET_GPR_U32(ctx, 31, 0x1006C0u);
    ctx->pc = 0x1006BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1006B8u;
    // 0x1006bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1006B8u, 0x1006C0u)) {
        return;
    }
    ctx->pc = 0x1006C0u;
label_1006c0:
    // 0x1006c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1006c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006c4: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1006C4u;
    {
        const bool branch_taken_0x1006c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006C4u;
        // 0x1006c8: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006c4) {
            ctx->pc = 0x10082Cu;
            goto label_10082c;
        }
    }
    ctx->pc = 0x1006CCu;
    // 0x1006cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1006ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1006d0: 0xc065c58  jal         func_197160
    ctx->pc = 0x1006D0u;
    SET_GPR_U32(ctx, 31, 0x1006D8u);
    ctx->pc = 0x1006D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1006D0u;
    // 0x1006d4: 0x248492e8  addiu       $a0, $a0, -0x6D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1006D0u, 0x1006D8u)) {
        return;
    }
    ctx->pc = 0x1006D8u;
label_1006d8:
    // 0x1006d8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1006D8u;
    {
        const bool branch_taken_0x1006d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006D8u;
        // 0x1006dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006d8) {
            ctx->pc = 0x10082Cu;
            goto label_10082c;
        }
    }
    ctx->pc = 0x1006E0u;
    // 0x1006e0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1006e4: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x1006e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1006e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1006E8u;
    {
        const bool branch_taken_0x1006e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E8u;
        // 0x1006ec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e8) {
            ctx->pc = 0x100720u;
            goto label_100720;
        }
    }
    ctx->pc = 0x1006F0u;
    // 0x1006f0: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1006f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1006f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006f8: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1006fc: 0x0  nop
    ctx->pc = 0x1006fcu;
    // NOP
label_100700:
    // 0x100700: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100704: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100704u;
    {
        const bool branch_taken_0x100704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x100704) {
            ctx->pc = 0x100708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100704u;
            // 0x100708: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100714u;
            goto label_100714;
        }
    }
    ctx->pc = 0x10070Cu;
    // 0x10070c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10070Cu;
    {
        const bool branch_taken_0x10070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10070Cu;
        // 0x100710: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10070c) {
            ctx->pc = 0x100724u;
            goto label_100724;
        }
    }
    ctx->pc = 0x100714u;
label_100714:
    // 0x100714: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x100714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x100718: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100718u;
    {
        const bool branch_taken_0x100718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100718u;
        // 0x10071c: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100718) {
            ctx->pc = 0x100700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100700;
        }
    }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100724:
    // 0x100724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100728: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x100728u;
    {
        const bool branch_taken_0x100728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100728u;
        // 0x10072c: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100728) {
            ctx->pc = 0x100868u;
            goto label_100868;
        }
    }
    ctx->pc = 0x100730u;
    // 0x100730: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x100730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100734: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x100734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100738: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x100738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10073c: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x10073cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x100740: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x100740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x100744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100748: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x100748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x10074c: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x10074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100750: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x100750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100754: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x100754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10075c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x10075cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x100760: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100764: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x100764u;
    {
        const bool branch_taken_0x100764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x100768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100764u;
        // 0x100768: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100764) {
            ctx->pc = 0x100808u;
            goto label_100808;
        }
    }
    ctx->pc = 0x10076Cu;
    // 0x10076c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100770: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x100770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100774: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x100774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x100778: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x100778u;
    SET_GPR_U32(ctx, 31, 0x100780u);
    ctx->pc = 0x10077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100778u;
    // 0x10077c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x100778u, 0x100780u)) {
        return;
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100784: 0xc065c40  jal         func_197100
    ctx->pc = 0x100784u;
    SET_GPR_U32(ctx, 31, 0x10078Cu);
    ctx->pc = 0x100788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100784u;
    // 0x100788: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x100784u, 0x10078Cu)) {
        return;
    }
    ctx->pc = 0x10078Cu;
label_10078c:
    // 0x10078c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x10078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100790: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x100790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x100794: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100798: 0x24a59300  addiu       $a1, $a1, -0x6D00
    ctx->pc = 0x100798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
    // 0x10079c: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x10079cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1007a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1007a4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x1007a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1007a8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1007A8u;
    SET_GPR_U32(ctx, 31, 0x1007B0u);
    ctx->pc = 0x1007ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007A8u;
    // 0x1007ac: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1007A8u, 0x1007B0u)) {
        return;
    }
    ctx->pc = 0x1007B0u;
label_1007b0:
    // 0x1007b0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1007B0u;
    {
        const bool branch_taken_0x1007b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1007b0) {
            ctx->pc = 0x1007B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007B0u;
            // 0x1007b4: 0x8e0200e4  lw          $v0, 0xE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007ECu;
            goto label_1007ec;
        }
    }
    ctx->pc = 0x1007B8u;
    // 0x1007b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1007b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1007bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1007c0: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1007C0u;
    SET_GPR_U32(ctx, 31, 0x1007C8u);
    ctx->pc = 0x1007C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007C0u;
    // 0x1007c4: 0x24a59310  addiu       $a1, $a1, -0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1007C0u, 0x1007C8u)) {
        return;
    }
    ctx->pc = 0x1007C8u;
label_1007c8:
    // 0x1007c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1007C8u;
    {
        const bool branch_taken_0x1007c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1007c8) {
            ctx->pc = 0x1007CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007C8u;
            // 0x1007cc: 0x8e0200e4  lw          $v0, 0xE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007ECu;
            goto label_1007ec;
        }
    }
    ctx->pc = 0x1007D0u;
    // 0x1007d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1007d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1007d8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1007D8u;
    SET_GPR_U32(ctx, 31, 0x1007E0u);
    ctx->pc = 0x1007DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007D8u;
    // 0x1007dc: 0x24a59320  addiu       $a1, $a1, -0x6CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1007D8u, 0x1007E0u)) {
        return;
    }
    ctx->pc = 0x1007E0u;
label_1007e0:
    // 0x1007e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1007E0u;
    {
        const bool branch_taken_0x1007e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007e0) {
            ctx->pc = 0x1007E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007E0u;
            // 0x1007e4: 0x8e0300e4  lw          $v1, 0xE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10080Cu;
            goto label_10080c;
        }
    }
    ctx->pc = 0x1007E8u;
    // 0x1007e8: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1007e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1007ec:
    // 0x1007ec: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1007ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1007f0: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1007f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1007f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1007f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1007fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100800: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x100800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x100804: 0xae0302a0  sw          $v1, 0x2A0($s0)
    ctx->pc = 0x100804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 3));
label_100808:
    // 0x100808: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_10080c:
    // 0x10080c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100810: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100814: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x100814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x100818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10081c: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x10081cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x100820: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100828: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x100828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_10082c:
    // 0x10082c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100830: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x100834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100838: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100838u;
    {
        const bool branch_taken_0x100838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100838) {
            ctx->pc = 0x10083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100838u;
            // 0x10083c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10086Cu;
            goto label_10086c;
        }
    }
    ctx->pc = 0x100840u;
    // 0x100840: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100844u;
    {
        const bool branch_taken_0x100844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100844u;
        // 0x100848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100844) {
            ctx->pc = 0x100868u;
            goto label_100868;
        }
    }
    ctx->pc = 0x10084Cu;
    // 0x10084c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x100850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100854: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100858: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10085c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100860: 0xc04074e  jal         func_101D38
    ctx->pc = 0x100860u;
    SET_GPR_U32(ctx, 31, 0x100868u);
    ctx->pc = 0x100864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100860u;
    // 0x100864: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101D38u, 0x100860u, 0x100868u)) {
        return;
    }
    ctx->pc = 0x100868u;
label_100868:
    // 0x100868: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x100868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10086c:
    // 0x10086c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10086cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100874: 0x3e00008  jr          $ra
    ctx->pc = 0x100874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100874u;
        // 0x100878: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10087Cu;
    // 0x10087c: 0x0  nop
    ctx->pc = 0x10087cu;
    // NOP
    ctx->pc = 0x100880u;
}
