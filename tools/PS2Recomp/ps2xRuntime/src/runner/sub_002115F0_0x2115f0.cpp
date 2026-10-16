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

// Function: sub_002115F0
// Address: 0x2115f0 - 0x211960
void sub_002115F0_0x2115f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002115F0_0x2115f0");
#endif

    switch (ctx->pc) {
        case 0x211698u: goto label_211698;
        case 0x211738u: goto label_211738;
        case 0x211828u: goto label_211828;
        default: break;
    }

    ctx->pc = 0x2115f0u;

    // 0x2115f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2115f4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2115f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2115f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2115fc: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2115fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x211600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211604: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x211604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x211608: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x211608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x21160c: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x21160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x211610: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x211610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x211614: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x211614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x211618: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x211618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x21161c: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x21161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x211620: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x211620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x211624: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x211624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x211628: 0x8d6801cc  lw          $t0, 0x1CC($t3)
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 460)));
    // 0x21162c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x21162cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x211630: 0x8d620070  lw          $v0, 0x70($t3)
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 112)));
    // 0x211634: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x211634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x211638: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x211638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x21163c: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x21163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x211640: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x211640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x211644: 0x8d620088  lw          $v0, 0x88($t3)
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 136)));
    // 0x211648: 0x8d6a0144  lw          $t2, 0x144($t3)
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 324)));
    // 0x21164c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x211650: 0x8d090028  lw          $t1, 0x28($t0)
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x211654: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x211654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x211658: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21165c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x21165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x211660: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x211660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x211664: 0x18e000b2  blez        $a3, . + 4 + (0xB2 << 2)
    ctx->pc = 0x211664u;
    {
        const bool branch_taken_0x211664 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x211668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211664u;
        // 0x211668: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211664) {
            ctx->pc = 0x211930u;
            goto label_211930;
        }
    }
    ctx->pc = 0x21166Cu;
    // 0x21166c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x21166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x211670: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x211670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x211674: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x211678: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21167c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x211680: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x211680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x211684: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x211684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x211688: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21168c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x211690: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x211690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x211694: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x211694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_211698:
    // 0x211698: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21169c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2116a0: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2116a4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2116a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2116a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2116ac: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2116b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2116b4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2116B4u;
    {
        const bool branch_taken_0x2116b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116B4u;
        // 0x2116b8: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116b4) {
            ctx->pc = 0x2116ECu;
            goto label_2116ec;
        }
    }
    ctx->pc = 0x2116BCu;
    // 0x2116bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2116c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2116c4: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x2116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2116c8: 0x240ffffd  addiu       $t7, $zero, -0x3
    ctx->pc = 0x2116c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2116cc: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2116ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2116d0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2116d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2116d4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2116d8: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2116d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2116dc: 0x3c4f021  addu        $fp, $fp, $a0
    ctx->pc = 0x2116dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2116e0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2116e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2116E4u;
    {
        const bool branch_taken_0x2116e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E4u;
        // 0x2116e8: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116e4) {
            ctx->pc = 0x211700u;
            goto label_211700;
        }
    }
    ctx->pc = 0x2116ECu;
label_2116ec:
    // 0x2116ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2116f0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2116f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2116f4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2116f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2116f8: 0xad040024  sw          $a0, 0x24($t0)
    ctx->pc = 0x2116f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 4));
    // 0x2116fc: 0x8d140020  lw          $s4, 0x20($t0)
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_211700:
    // 0x211700: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x211704: 0x8fb7001c  lw          $s7, 0x1C($sp)
    ctx->pc = 0x211704u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x211708: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x211708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x21170c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211710: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x211714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211718: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x211718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21171c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x21171cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211720: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x211720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x211724: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x211724u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211728: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21172c: 0x12e00079  beqz        $s7, . + 4 + (0x79 << 2)
    ctx->pc = 0x21172Cu;
    {
        const bool branch_taken_0x21172c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x211730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21172Cu;
        // 0x211730: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21172c) {
            ctx->pc = 0x211914u;
            goto label_211914;
        }
    }
    ctx->pc = 0x211734u;
    // 0x211734: 0x0  nop
    ctx->pc = 0x211734u;
    // NOP
label_211738:
    // 0x211738: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x211738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x21173c: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x21173cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x211740: 0x54b021  addu        $s6, $v0, $s4
    ctx->pc = 0x211740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x211744: 0x92a60001  lbu         $a2, 0x1($s5)
    ctx->pc = 0x211744u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x211748: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21174c: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x21174cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x211750: 0x86c40004  lh          $a0, 0x4($s6)
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x211754: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x211754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x211758: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x211758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21175c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x21175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x211760: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x211760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x211764: 0x29903  sra         $s3, $v0, 4
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 4));
    // 0x211768: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x211768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21176c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x211770: 0x39103  sra         $s2, $v1, 4
    ctx->pc = 0x211770u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 4));
    // 0x211774: 0x48903  sra         $s1, $a0, 4
    ctx->pc = 0x211774u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 4));
    // 0x211778: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x21177c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x211780: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x211780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x211784: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x211788: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21178c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x21178cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x211790: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211794: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x211794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x211798: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x211798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x21179c: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2117a0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2117a4: 0x1532021  addu        $a0, $t2, $s3
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x2117a8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2117ac: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2117b0: 0x90930000  lbu         $s3, 0x0($a0)
    ctx->pc = 0x2117b0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2117b4: 0x1511821  addu        $v1, $t2, $s1
    ctx->pc = 0x2117b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x2117b8: 0x1521021  addu        $v0, $t2, $s2
    ctx->pc = 0x2117b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x2117bc: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x2117bcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2117c0: 0x1328c3  sra         $a1, $s3, 3
    ctx->pc = 0x2117c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 3));
    // 0x2117c4: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x2117c4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2117c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2117cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2117d0: 0x123083  sra         $a2, $s2, 2
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 2));
    // 0x2117d4: 0x1138c3  sra         $a3, $s1, 3
    ctx->pc = 0x2117d4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 3));
    // 0x2117d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2117dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2117dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2117e0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2117e4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2117e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2117e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2117ec: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2117f0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2117f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2117f4: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2117F4u;
    {
        const bool branch_taken_0x2117f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2117f4) {
            ctx->pc = 0x2117F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2117F4u;
            // 0x2117f8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211850u;
            goto label_211850;
        }
    }
    ctx->pc = 0x2117FCu;
    // 0x2117fc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2117fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211800: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x211800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x211804: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x211804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x211808: 0x7faa0060  sq          $t2, 0x60($sp)
    ctx->pc = 0x211808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
    // 0x21180c: 0x7fab0070  sq          $t3, 0x70($sp)
    ctx->pc = 0x21180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 11));
    // 0x211810: 0x7fac0080  sq          $t4, 0x80($sp)
    ctx->pc = 0x211810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
    // 0x211814: 0x7fad0090  sq          $t5, 0x90($sp)
    ctx->pc = 0x211814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 13));
    // 0x211818: 0x7fae00a0  sq          $t6, 0xA0($sp)
    ctx->pc = 0x211818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 14));
    // 0x21181c: 0x7faf00b0  sq          $t7, 0xB0($sp)
    ctx->pc = 0x21181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 15));
    // 0x211820: 0xc0844c0  jal         func_211300
    ctx->pc = 0x211820u;
    SET_GPR_U32(ctx, 31, 0x211828u);
    ctx->pc = 0x211824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211820u;
    // 0x211824: 0x7fb900c0  sq          $t9, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x211300u, 0x211820u, 0x211828u)) {
        return;
    }
    ctx->pc = 0x211828u;
label_211828:
    // 0x211828: 0x7bb900c0  lq          $t9, 0xC0($sp)
    ctx->pc = 0x211828u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21182c: 0x7baf00b0  lq          $t7, 0xB0($sp)
    ctx->pc = 0x21182cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x211830: 0x7bae00a0  lq          $t6, 0xA0($sp)
    ctx->pc = 0x211830u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x211834: 0x7bad0090  lq          $t5, 0x90($sp)
    ctx->pc = 0x211834u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211838: 0x7bac0080  lq          $t4, 0x80($sp)
    ctx->pc = 0x211838u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21183c: 0x7bab0070  lq          $t3, 0x70($sp)
    ctx->pc = 0x21183cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211840: 0x7baa0060  lq          $t2, 0x60($sp)
    ctx->pc = 0x211840u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211844: 0x7ba90050  lq          $t1, 0x50($sp)
    ctx->pc = 0x211844u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211848: 0x7ba80040  lq          $t0, 0x40($sp)
    ctx->pc = 0x211848u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21184c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21184cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_211850:
    // 0x211850: 0x2afa821  addu        $s5, $s5, $t7
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x211854: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x211858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21185c: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x21185cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x211860: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211864: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x211868: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x211868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21186c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211870: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x211874: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211878: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21187c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x21187cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211880: 0x3c6f021  addu        $fp, $fp, $a2
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x211884: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x211884u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211888: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x21188c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x21188cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211890: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x211894: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x211894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211898: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x21189c: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2118a0: 0x1932821  addu        $a1, $t4, $s3
    ctx->pc = 0x2118a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x2118a4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2118a8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2118a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2118ac: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x2118acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2118b0: 0x3336021  addu        $t4, $t9, $s3
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 19)));
    // 0x2118b4: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2118b8: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x2118b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118bc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2118c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2118c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118c4: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2118c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2118c8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2118cc: 0x1d21021  addu        $v0, $t6, $s2
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x2118d0: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2118d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2118d4: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2118d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2118d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2118dc: 0x527021  addu        $t6, $v0, $s2
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2118e0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x2118e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x2118e4: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2118e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2118e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2118e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118ec: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2118f0: 0x1b11021  addu        $v0, $t5, $s1
    ctx->pc = 0x2118f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x2118f4: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x2118f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2118f8: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2118fc: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x2118fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211900: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x211900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x211904: 0x716821  addu        $t5, $v1, $s1
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x211908: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x211908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x21190c: 0x16e0ff8a  bnez        $s7, . + 4 + (-0x76 << 2)
    ctx->pc = 0x21190Cu;
    {
        const bool branch_taken_0x21190c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x211910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21190Cu;
        // 0x211910: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21190c) {
            ctx->pc = 0x211738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211738;
        }
    }
    ctx->pc = 0x211914u;
label_211914:
    // 0x211914: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x211918: 0xa68d0004  sh          $t5, 0x4($s4)
    ctx->pc = 0x211918u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 13));
    // 0x21191c: 0xa68c0000  sh          $t4, 0x0($s4)
    ctx->pc = 0x21191cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x211920: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x211920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211924: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x211924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x211928: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x211928u;
    {
        const bool branch_taken_0x211928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211928u;
        // 0x21192c: 0xa68e0002  sh          $t6, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211928) {
            ctx->pc = 0x211698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211698;
        }
    }
    ctx->pc = 0x211930u;
label_211930:
    // 0x211930: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x211930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x211934: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x211934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x211938: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x211938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21193c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x21193cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x211940: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x211940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x211944: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x211944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x211948: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x211948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21194c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x21194cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x211950: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x211950u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x211954: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x211954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x211958: 0x3e00008  jr          $ra
    ctx->pc = 0x211958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211958u;
        // 0x21195c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211960u;
}
