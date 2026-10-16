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

// Function: sub_00276040
// Address: 0x276040 - 0x276200
void sub_00276040_0x276040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276040_0x276040");
#endif

    switch (ctx->pc) {
        case 0x276040u: goto label_276040;
        case 0x276044u: goto label_276044;
        case 0x276048u: goto label_276048;
        case 0x27604cu: goto label_27604c;
        case 0x276050u: goto label_276050;
        case 0x276054u: goto label_276054;
        case 0x276058u: goto label_276058;
        case 0x27605cu: goto label_27605c;
        case 0x276060u: goto label_276060;
        case 0x276064u: goto label_276064;
        case 0x276068u: goto label_276068;
        case 0x27606cu: goto label_27606c;
        case 0x276070u: goto label_276070;
        case 0x276074u: goto label_276074;
        case 0x276078u: goto label_276078;
        case 0x27607cu: goto label_27607c;
        case 0x276080u: goto label_276080;
        case 0x276084u: goto label_276084;
        case 0x276088u: goto label_276088;
        case 0x27608cu: goto label_27608c;
        case 0x276090u: goto label_276090;
        case 0x276094u: goto label_276094;
        case 0x276098u: goto label_276098;
        case 0x27609cu: goto label_27609c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760a4u: goto label_2760a4;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760acu: goto label_2760ac;
        case 0x2760b0u: goto label_2760b0;
        case 0x2760b4u: goto label_2760b4;
        case 0x2760b8u: goto label_2760b8;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760c0u: goto label_2760c0;
        case 0x2760c4u: goto label_2760c4;
        case 0x2760c8u: goto label_2760c8;
        case 0x2760ccu: goto label_2760cc;
        case 0x2760d0u: goto label_2760d0;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760d8u: goto label_2760d8;
        case 0x2760dcu: goto label_2760dc;
        case 0x2760e0u: goto label_2760e0;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760e8u: goto label_2760e8;
        case 0x2760ecu: goto label_2760ec;
        case 0x2760f0u: goto label_2760f0;
        case 0x2760f4u: goto label_2760f4;
        case 0x2760f8u: goto label_2760f8;
        case 0x2760fcu: goto label_2760fc;
        case 0x276100u: goto label_276100;
        case 0x276104u: goto label_276104;
        case 0x276108u: goto label_276108;
        case 0x27610cu: goto label_27610c;
        case 0x276110u: goto label_276110;
        case 0x276114u: goto label_276114;
        case 0x276118u: goto label_276118;
        case 0x27611cu: goto label_27611c;
        case 0x276120u: goto label_276120;
        case 0x276124u: goto label_276124;
        case 0x276128u: goto label_276128;
        case 0x27612cu: goto label_27612c;
        case 0x276130u: goto label_276130;
        case 0x276134u: goto label_276134;
        case 0x276138u: goto label_276138;
        case 0x27613cu: goto label_27613c;
        case 0x276140u: goto label_276140;
        case 0x276144u: goto label_276144;
        case 0x276148u: goto label_276148;
        case 0x27614cu: goto label_27614c;
        case 0x276150u: goto label_276150;
        case 0x276154u: goto label_276154;
        case 0x276158u: goto label_276158;
        case 0x27615cu: goto label_27615c;
        case 0x276160u: goto label_276160;
        case 0x276164u: goto label_276164;
        case 0x276168u: goto label_276168;
        case 0x27616cu: goto label_27616c;
        case 0x276170u: goto label_276170;
        case 0x276174u: goto label_276174;
        case 0x276178u: goto label_276178;
        case 0x27617cu: goto label_27617c;
        case 0x276180u: goto label_276180;
        case 0x276184u: goto label_276184;
        case 0x276188u: goto label_276188;
        case 0x27618cu: goto label_27618c;
        case 0x276190u: goto label_276190;
        case 0x276194u: goto label_276194;
        case 0x276198u: goto label_276198;
        case 0x27619cu: goto label_27619c;
        case 0x2761a0u: goto label_2761a0;
        case 0x2761a4u: goto label_2761a4;
        case 0x2761a8u: goto label_2761a8;
        case 0x2761acu: goto label_2761ac;
        case 0x2761b0u: goto label_2761b0;
        case 0x2761b4u: goto label_2761b4;
        case 0x2761b8u: goto label_2761b8;
        case 0x2761bcu: goto label_2761bc;
        case 0x2761c0u: goto label_2761c0;
        case 0x2761c4u: goto label_2761c4;
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        default: break;
    }

    ctx->pc = 0x276040u;

label_276040:
    // 0x276040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x276040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_276044:
    // 0x276044: 0x8f8287b4  lw          $v0, -0x784C($gp)
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
label_276048:
    // 0x276048: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x276048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_27604c:
    // 0x27604c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27604cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276050:
    // 0x276050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_276054:
    // 0x276054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x276054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276058:
    // 0x276058: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x276058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_27605c:
    // 0x27605c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27605cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276060:
    // 0x276060: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x276060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_276064:
    // 0x276064: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x276064u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_276068:
    // 0x276068: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
label_27606c:
    if (ctx->pc == 0x27606Cu) {
        ctx->pc = 0x27606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276068u;
        // 0x27606c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276070u;
        goto label_276070;
    }
    ctx->pc = 0x276068u;
    {
        const bool branch_taken_0x276068 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276068u;
        // 0x27606c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276068) {
            ctx->pc = 0x276144u;
            goto label_276144;
        }
    }
    ctx->pc = 0x276070u;
label_276070:
    // 0x276070: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_276074:
    // 0x276074: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x276074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276078:
    // 0x276078: 0x24a65668  addiu       $a2, $a1, 0x5668
    ctx->pc = 0x276078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 22120));
label_27607c:
    // 0x27607c: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x27607cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_276080:
    // 0x276080: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_276084:
    if (ctx->pc == 0x276084u) {
        ctx->pc = 0x276084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276080u;
        // 0x276084: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276088u;
        goto label_276088;
    }
    ctx->pc = 0x276080u;
    {
        const bool branch_taken_0x276080 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x276084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276080u;
        // 0x276084: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276080) {
            ctx->pc = 0x2760D8u;
            goto label_2760d8;
        }
    }
    ctx->pc = 0x276088u;
label_276088:
    // 0x276088: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_27608c:
    if (ctx->pc == 0x27608Cu) {
        ctx->pc = 0x27608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276088u;
        // 0x27608c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276090u;
        goto label_276090;
    }
    ctx->pc = 0x276088u;
    {
        const bool branch_taken_0x276088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276088u;
        // 0x27608c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276088) {
            ctx->pc = 0x2760F8u;
            goto label_2760f8;
        }
    }
    ctx->pc = 0x276090u;
label_276090:
    // 0x276090: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_276094:
    if (ctx->pc == 0x276094u) {
        ctx->pc = 0x276094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276090u;
        // 0x276094: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276098u;
        goto label_276098;
    }
    ctx->pc = 0x276090u;
    {
        const bool branch_taken_0x276090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276090) {
            ctx->pc = 0x276094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276090u;
            // 0x276094: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760DCu;
            goto label_2760dc;
        }
    }
    ctx->pc = 0x276098u;
label_276098:
    // 0x276098: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x276098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_27609c:
    // 0x27609c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2760a0:
    if (ctx->pc == 0x2760A0u) {
        ctx->pc = 0x2760A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27609Cu;
        // 0x2760a0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2760A4u;
        goto label_2760a4;
    }
    ctx->pc = 0x27609Cu;
    {
        const bool branch_taken_0x27609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27609c) {
            ctx->pc = 0x2760A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27609Cu;
            // 0x2760a0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760C4u;
            goto label_2760c4;
        }
    }
    ctx->pc = 0x2760A4u;
label_2760a4:
    // 0x2760a4: 0x8ca25668  lw          $v0, 0x5668($a1)
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22120)));
label_2760a8:
    // 0x2760a8: 0x10440033  beq         $v0, $a0, . + 4 + (0x33 << 2)
label_2760ac:
    if (ctx->pc == 0x2760ACu) {
        ctx->pc = 0x2760ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A8u;
        // 0x2760ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2760B0u;
        goto label_2760b0;
    }
    ctx->pc = 0x2760A8u;
    {
        const bool branch_taken_0x2760a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2760ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A8u;
        // 0x2760ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760a8) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x2760B0u;
label_2760b0:
    // 0x2760b0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2760b4:
    // 0x2760b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2760b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2760b8:
    // 0x2760b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2760b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2760bc:
    // 0x2760bc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2760c0:
    // 0x2760c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2760c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2760c4:
    // 0x2760c4: 0x1044002c  beq         $v0, $a0, . + 4 + (0x2C << 2)
label_2760c8:
    if (ctx->pc == 0x2760C8u) {
        ctx->pc = 0x2760C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760C4u;
        // 0x2760c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2760CCu;
        goto label_2760cc;
    }
    ctx->pc = 0x2760C4u;
    {
        const bool branch_taken_0x2760c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2760C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760C4u;
        // 0x2760c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760c4) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x2760CCu;
label_2760cc:
    // 0x2760cc: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x2760ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2760d0:
    // 0x2760d0: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2760d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_2760d4:
    // 0x2760d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2760d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2760d8:
    // 0x2760d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2760d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2760dc:
    // 0x2760dc: 0x10440026  beq         $v0, $a0, . + 4 + (0x26 << 2)
label_2760e0:
    if (ctx->pc == 0x2760E0u) {
        ctx->pc = 0x2760E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760DCu;
        // 0x2760e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2760E4u;
        goto label_2760e4;
    }
    ctx->pc = 0x2760DCu;
    {
        const bool branch_taken_0x2760dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2760E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760DCu;
        // 0x2760e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760dc) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x2760E4u;
label_2760e4:
    // 0x2760e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2760e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2760e8:
    // 0x2760e8: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x2760e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2760ec:
    // 0x2760ec: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2760ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2760f0:
    // 0x2760f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2760f4:
    if (ctx->pc == 0x2760F4u) {
        ctx->pc = 0x2760F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760F0u;
        // 0x2760f4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2760F8u;
        goto label_2760f8;
    }
    ctx->pc = 0x2760F0u;
    {
        const bool branch_taken_0x2760f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760F0u;
        // 0x2760f4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760f0) {
            ctx->pc = 0x276144u;
            goto label_276144;
        }
    }
    ctx->pc = 0x2760F8u;
label_2760f8:
    // 0x2760f8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2760f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2760fc:
    // 0x2760fc: 0x0  nop
    ctx->pc = 0x2760fcu;
    // NOP
label_276100:
    // 0x276100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_276104:
    // 0x276104: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
label_276108:
    if (ctx->pc == 0x276108u) {
        ctx->pc = 0x276108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276104u;
        // 0x276108: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27610Cu;
        goto label_27610c;
    }
    ctx->pc = 0x276104u;
    {
        const bool branch_taken_0x276104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x276108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276104u;
        // 0x276108: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276104) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x27610Cu;
label_27610c:
    // 0x27610c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_276110:
    // 0x276110: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
label_276114:
    if (ctx->pc == 0x276114u) {
        ctx->pc = 0x276114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276110u;
        // 0x276114: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276118u;
        goto label_276118;
    }
    ctx->pc = 0x276110u;
    {
        const bool branch_taken_0x276110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x276114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276110u;
        // 0x276114: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276110) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x276118u;
label_276118:
    // 0x276118: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_27611c:
    // 0x27611c: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
label_276120:
    if (ctx->pc == 0x276120u) {
        ctx->pc = 0x276120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27611Cu;
        // 0x276120: 0x24c50060  addiu       $a1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276124u;
        goto label_276124;
    }
    ctx->pc = 0x27611Cu;
    {
        const bool branch_taken_0x27611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x276120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27611Cu;
        // 0x276120: 0x24c50060  addiu       $a1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27611c) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x276124u;
label_276124:
    // 0x276124: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x276124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_276128:
    // 0x276128: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_27612c:
    if (ctx->pc == 0x27612Cu) {
        ctx->pc = 0x27612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276128u;
        // 0x27612c: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276130u;
        goto label_276130;
    }
    ctx->pc = 0x276128u;
    {
        const bool branch_taken_0x276128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x27612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276128u;
        // 0x27612c: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276128) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x276130u;
label_276130:
    // 0x276130: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x276130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_276134:
    // 0x276134: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x276134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_276138:
    // 0x276138: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x276138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_27613c:
    // 0x27613c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_276140:
    if (ctx->pc == 0x276140u) {
        ctx->pc = 0x276140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27613Cu;
        // 0x276140: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276144u;
        goto label_276144;
    }
    ctx->pc = 0x27613Cu;
    {
        const bool branch_taken_0x27613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27613Cu;
        // 0x276140: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27613c) {
            ctx->pc = 0x276100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276100;
        }
    }
    ctx->pc = 0x276144u;
label_276144:
    // 0x276144: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x276144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_276148:
    // 0x276148: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x276148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27614c:
    // 0x27614c: 0xc092848  jal         func_24A120
label_276150:
    if (ctx->pc == 0x276150u) {
        ctx->pc = 0x276150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27614Cu;
        // 0x276150: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276154u;
        goto label_276154;
    }
    ctx->pc = 0x27614Cu;
    SET_GPR_U32(ctx, 31, 0x276154u);
    ctx->pc = 0x276150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27614Cu;
    // 0x276150: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27614Cu, 0x276154u)) {
        return;
    }
    ctx->pc = 0x276154u;
label_276154:
    // 0x276154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_276158:
    // 0x276158: 0xc09281a  jal         func_24A068
label_27615c:
    if (ctx->pc == 0x27615Cu) {
        ctx->pc = 0x27615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276158u;
        // 0x27615c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276160u;
        goto label_276160;
    }
    ctx->pc = 0x276158u;
    SET_GPR_U32(ctx, 31, 0x276160u);
    ctx->pc = 0x27615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276158u;
    // 0x27615c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x276158u, 0x276160u)) {
        return;
    }
    ctx->pc = 0x276160u;
label_276160:
    // 0x276160: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276164:
    // 0x276164: 0x0  nop
    ctx->pc = 0x276164u;
    // NOP
label_276168:
    // 0x276168: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_27616c:
    if (ctx->pc == 0x27616Cu) {
        ctx->pc = 0x27616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276168u;
        // 0x27616c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276170u;
        goto label_276170;
    }
    ctx->pc = 0x276168u;
    {
        const bool branch_taken_0x276168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x276168) {
            ctx->pc = 0x27616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276168u;
            // 0x27616c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276180u;
            goto label_276180;
        }
    }
    ctx->pc = 0x276170u;
label_276170:
    // 0x276170: 0x1000001c  b           . + 4 + (0x1C << 2)
label_276174:
    if (ctx->pc == 0x276174u) {
        ctx->pc = 0x276174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276170u;
        // 0x276174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276178u;
        goto label_276178;
    }
    ctx->pc = 0x276170u;
    {
        const bool branch_taken_0x276170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276170u;
        // 0x276174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276170) {
            ctx->pc = 0x2761E4u;
            goto label_2761e4;
        }
    }
    ctx->pc = 0x276178u;
label_276178:
    // 0x276178: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_27617c:
    if (ctx->pc == 0x27617Cu) {
        ctx->pc = 0x27617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276178u;
        // 0x27617c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276180u;
        goto label_276180;
    }
    ctx->pc = 0x276178u;
    {
        const bool branch_taken_0x276178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276178u;
        // 0x27617c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276178) {
            ctx->pc = 0x276168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276168;
        }
    }
    ctx->pc = 0x276180u;
label_276180:
    // 0x276180: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x276180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_276184:
    // 0x276184: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_276188:
    // 0x276188: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x276188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27618c:
    // 0x27618c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27618cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276190:
    // 0x276190: 0x8cc210d0  lw          $v0, 0x10D0($a2)
    ctx->pc = 0x276190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4304)));
label_276194:
    // 0x276194: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x276194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_276198:
    // 0x276198: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x276198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_27619c:
    // 0x27619c: 0x40f809  jalr        $v0
label_2761a0:
    if (ctx->pc == 0x2761A0u) {
        ctx->pc = 0x2761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27619Cu;
        // 0x2761a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2761A4u;
        goto label_2761a4;
    }
    ctx->pc = 0x27619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2761A4u);
        ctx->pc = 0x2761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27619Cu;
        // 0x2761a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27619Cu, 0x2761A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2761A4u;
label_2761a4:
    // 0x2761a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2761a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2761a8:
    // 0x2761a8: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x2761a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
label_2761ac:
    // 0x2761ac: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x2761acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_2761b0:
    // 0x2761b0: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x2761b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
label_2761b4:
    // 0x2761b4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x2761b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2761b8:
    // 0x2761b8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2761bc:
    // 0x2761bc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2761bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_2761c0:
    // 0x2761c0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_2761c4:
    if (ctx->pc == 0x2761C4u) {
        ctx->pc = 0x2761C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761C0u;
        // 0x2761c4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2761C8u;
        goto label_2761c8;
    }
    ctx->pc = 0x2761C0u;
    {
        const bool branch_taken_0x2761c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2761C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761C0u;
        // 0x2761c4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761c0) {
            ctx->pc = 0x2761DCu;
            goto label_2761dc;
        }
    }
    ctx->pc = 0x2761C8u;
label_2761c8:
    // 0x2761c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2761cc:
    // 0x2761cc: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x2761ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2761d0:
    // 0x2761d0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2761d4:
    // 0x2761d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2761d8:
    if (ctx->pc == 0x2761D8u) {
        ctx->pc = 0x2761D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761D4u;
        // 0x2761d8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2761DCu;
        goto label_2761dc;
    }
    ctx->pc = 0x2761D4u;
    {
        const bool branch_taken_0x2761d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761D4u;
        // 0x2761d8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761d4) {
            ctx->pc = 0x2761E0u;
            goto label_2761e0;
        }
    }
    ctx->pc = 0x2761DCu;
label_2761dc:
    // 0x2761dc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2761dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2761e0:
    // 0x2761e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2761e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2761e4:
    // 0x2761e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2761e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2761e8:
    // 0x2761e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2761e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2761ec:
    // 0x2761ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2761ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2761f0:
    // 0x2761f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2761f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2761f4:
    // 0x2761f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2761f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2761f8:
    // 0x2761f8: 0x3e00008  jr          $ra
label_2761fc:
    if (ctx->pc == 0x2761FCu) {
        ctx->pc = 0x2761FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761F8u;
        // 0x2761fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276200u;
        goto label_fallthrough_0x2761f8;
    }
    ctx->pc = 0x2761F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761F8u;
        // 0x2761fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2761f8:
    ctx->pc = 0x276200u;
}
