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

// Function: sub_00245710
// Address: 0x245710 - 0x245f78
void sub_00245710_0x245710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245710_0x245710");
#endif

    switch (ctx->pc) {
        case 0x2457a4u: goto label_2457a4;
        case 0x2457d0u: goto label_2457d0;
        case 0x2458a8u: goto label_2458a8;
        case 0x245b20u: goto label_245b20;
        case 0x245b98u: goto label_245b98;
        case 0x245be8u: goto label_245be8;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c6cu: goto label_245c6c;
        case 0x245d38u: goto label_245d38;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dfcu: goto label_245dfc;
        case 0x245ee4u: goto label_245ee4;
        case 0x245f08u: goto label_245f08;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f48u: goto label_245f48;
        default: break;
    }

    ctx->pc = 0x245710u;

    // 0x245710: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x245714: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x245718: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x24571c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x24571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x245720: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x245720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x245724: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245728: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x245728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x24572c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x24572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x245730: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x245730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245734: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x245734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x245738: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x245738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x24573c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x24573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x245740: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x245740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x245744: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x245744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x245748: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x245748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x24574c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x245750: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x245750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x245754: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x245754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x245758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24575c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x24575Cu;
    {
        const bool branch_taken_0x24575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24575Cu;
        // 0x245760: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24575c) {
            ctx->pc = 0x245970u;
            goto label_245970;
        }
    }
    ctx->pc = 0x245764u;
    // 0x245764: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x245764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245768: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24576c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x245770: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245774: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x245774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x245778: 0xaf848504  sw          $a0, -0x7AFC($gp)
    ctx->pc = 0x245778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 4));
    // 0x24577c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x245780: 0x90a20021  lbu         $v0, 0x21($a1)
    ctx->pc = 0x245780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x245784: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x245784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x245788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245788u;
    {
        const bool branch_taken_0x245788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245788u;
        // 0x24578c: 0x24680004  addiu       $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245788) {
            ctx->pc = 0x24579Cu;
            goto label_24579c;
        }
    }
    ctx->pc = 0x245790u;
    // 0x245790: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x245790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x245794: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x245794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x245798: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x245798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_24579c:
    // 0x24579c: 0xc08be8a  jal         func_22FA28
    ctx->pc = 0x24579Cu;
    SET_GPR_U32(ctx, 31, 0x2457A4u);
    ctx->pc = 0x2457A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24579Cu;
    // 0x2457a0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FA28u, 0x24579Cu, 0x2457A4u)) {
        return;
    }
    ctx->pc = 0x2457A4u;
label_2457a4:
    // 0x2457a4: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x2457a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2457a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2457a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2457ac: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2457acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2457b0: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2457b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2457b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2457b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2457b8: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x2457b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x2457bc: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2457bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2457c0: 0x8cc64160  lw          $a2, 0x4160($a2)
    ctx->pc = 0x2457c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4160u));
    // 0x2457c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2457C4u;
    {
        const bool branch_taken_0x2457c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C4u;
        // 0x2457c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457c4) {
            ctx->pc = 0x245828u;
            goto label_245828;
        }
    }
    ctx->pc = 0x2457CCu;
    // 0x2457cc: 0x0  nop
    ctx->pc = 0x2457ccu;
    // NOP
label_2457d0:
    // 0x2457d0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2457d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2457d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2457d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2457d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2457d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2457dc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2457dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2457e0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2457e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2457e4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2457e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2457e8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2457e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2457ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2457ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2457f0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x2457f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2457f4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x2457f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2457f8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2457f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2457fc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x2457fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x245800: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245800u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245804: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245808: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24580c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x24580cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245810: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245810u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245814: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245818: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x245818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24581c: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x24581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x245820: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x245820u;
    {
        const bool branch_taken_0x245820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245820u;
        // 0x245824: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245820) {
            ctx->pc = 0x2457D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2457d0;
        }
    }
    ctx->pc = 0x245828u;
label_245828:
    // 0x245828: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24582c: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x24582cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x245830: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x245830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x245834: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x245834u;
    {
        const bool branch_taken_0x245834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245834) {
            ctx->pc = 0x245910u;
            goto label_245910;
        }
    }
    ctx->pc = 0x24583Cu;
    // 0x24583c: 0x8e68002c  lw          $t0, 0x2C($s3)
    ctx->pc = 0x24583cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x245840: 0x8e07fff4  lw          $a3, -0xC($s0)
    ctx->pc = 0x245840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x245844: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x245844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245848: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245848u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24584c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245850: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x245850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x245854: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x245854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245858: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245858u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24585c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245860: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x245864: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x245864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245868: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245868u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24586c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245870: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x245874: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x245874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245878: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245878u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24587c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24587cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245880: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x245880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x245884: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245884u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245888: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24588c: 0x2508ffb0  addiu       $t0, $t0, -0x50
    ctx->pc = 0x24588cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967216));
    // 0x245890: 0x2d020040  sltiu       $v0, $t0, 0x40
    ctx->pc = 0x245890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x245894: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x245894u;
    {
        const bool branch_taken_0x245894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245894u;
        // 0x245898: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245894) {
            ctx->pc = 0x2458F8u;
            goto label_2458f8;
        }
    }
    ctx->pc = 0x24589Cu;
    // 0x24589c: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24589Cu;
    {
        const bool branch_taken_0x24589c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x24589c) {
            ctx->pc = 0x245910u;
            goto label_245910;
        }
    }
    ctx->pc = 0x2458A4u;
    // 0x2458a4: 0x0  nop
    ctx->pc = 0x2458a4u;
    // NOP
label_2458a8:
    // 0x2458a8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2458a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2458ac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2458b0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2458b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2458b4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2458b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2458b8: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2458b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2458bc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2458bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2458c0: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2458c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2458c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2458c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2458c8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2458c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2458cc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2458d0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2458d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2458d4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2458d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2458d8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2458d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2458dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2458dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2458e0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2458e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x2458e4: 0x2508ffc0  addiu       $t0, $t0, -0x40
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
    // 0x2458e8: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2458E8u;
    {
        const bool branch_taken_0x2458e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2458ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E8u;
        // 0x2458ec: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458e8) {
            ctx->pc = 0x2458A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2458a8;
        }
    }
    ctx->pc = 0x2458F0u;
    // 0x2458f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2458F0u;
    {
        const bool branch_taken_0x2458f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458f0) {
            ctx->pc = 0x245910u;
            goto label_245910;
        }
    }
    ctx->pc = 0x2458F8u;
label_2458f8:
    // 0x2458f8: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2458f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2458fc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2458fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245900: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245900u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245904: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245908: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x245908u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x24590c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24590cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_245910:
    // 0x245910: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x245910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x245914: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x245914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x245918: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x245918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x24591c: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x24591cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x245920: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x245920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x245924: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x245924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x245928: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x245928u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x24592c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24592cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245930: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245934: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x245934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x245938: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x245938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x24593c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x24593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x245940: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x245940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x245944: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x245944u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x245948: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245948u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24594c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245950: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x245950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x245954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245958: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x245958u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x24595c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24595cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245960: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245964: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x245964u;
    {
        const bool branch_taken_0x245964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245964u;
        // 0x245968: 0xaf8690f0  sw          $a2, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245964) {
            ctx->pc = 0x245F14u;
            goto label_245f14;
        }
    }
    ctx->pc = 0x24596Cu;
    // 0x24596c: 0x0  nop
    ctx->pc = 0x24596cu;
    // NOP
label_245970:
    // 0x245970: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x245970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245974: 0x8c970004  lw          $s7, 0x4($a0)
    ctx->pc = 0x245974u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245978: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x245978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24597c: 0xaf808504  sw          $zero, -0x7AFC($gp)
    ctx->pc = 0x24597cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 0));
    // 0x245980: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x245980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x245984: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x245984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x245988: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x245988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24598c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245990: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x245990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x245994: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x245994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x245998: 0x92650016  lbu         $a1, 0x16($s3)
    ctx->pc = 0x245998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x24599c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x24599cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2459a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2459a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2459a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2459a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2459a8: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x2459a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2459ac: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2459b0: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2459b4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2459b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2459b8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2459b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2459bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2459BCu;
    {
        const bool branch_taken_0x2459bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459BCu;
        // 0x2459c0: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459bc) {
            ctx->pc = 0x2459E0u;
            goto label_2459e0;
        }
    }
    ctx->pc = 0x2459C4u;
    // 0x2459c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2459c8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2459c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2459cc: 0x2442b630  addiu       $v0, $v0, -0x49D0
    ctx->pc = 0x2459ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948400));
    // 0x2459d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2459d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2459d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2459d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2459d8: 0x800008  jr          $a0
    ctx->pc = 0x2459D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2459E0u: goto label_2459e0;
            case 0x245A64u: goto label_245a64;
            case 0x245AE8u: goto label_245ae8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2459D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2459E0u;
label_2459e0:
    // 0x2459e0: 0x9e620024  lwu         $v0, 0x24($s3)
    ctx->pc = 0x2459e0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2459e4: 0x9e630020  lwu         $v1, 0x20($s3)
    ctx->pc = 0x2459e4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2459e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2459e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2459ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2459ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2459f0: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x2459f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x2459f4: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x2459f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x2459f8: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x2459f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2459fc: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x2459fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x245a00: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x245a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x245a04: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x245a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x245a08: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x245a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x245a0c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x245a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x245a10: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x245a14: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x245a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x245a18: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x245a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x245a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245a20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x245a20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x245a24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x245a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x245a28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x245a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x245a2c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x245a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x245a30: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x245a30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x245a34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x245a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x245a38: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x245a38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x245a3c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x245a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x245a40: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x245a40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x245a44: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x245a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x245a48: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x245a48u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x245a4c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x245a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x245a50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x245a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x245a54: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x245a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x245a58: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x245a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x245a5c: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x245a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x245a60: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x245a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_245a64:
    // 0x245a64: 0x9e62001c  lwu         $v0, 0x1C($s3)
    ctx->pc = 0x245a64u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x245a68: 0x9e630018  lwu         $v1, 0x18($s3)
    ctx->pc = 0x245a68u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x245a6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x245a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x245a74: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x245a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x245a78: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x245a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x245a7c: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x245a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x245a80: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x245a84: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x245a88: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x245a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x245a8c: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x245a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x245a90: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x245a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x245a94: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x245a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x245a98: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x245a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x245a9c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x245a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x245aa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245aa4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x245aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x245aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x245aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x245aac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x245aacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x245ab0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x245ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x245ab4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x245ab4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x245ab8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x245ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x245abc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x245abcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x245ac0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x245ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x245ac4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x245ac4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x245ac8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x245ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x245acc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x245accu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x245ad0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x245ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x245ad4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x245ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x245ad8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x245ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x245adc: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x245adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x245ae0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x245ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x245ae4: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x245ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_245ae8:
    // 0x245ae8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245aec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x245aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245af0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x245af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x245af4: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x245af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x245af8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x245af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x245afc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245b00: 0x146000d1  bnez        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x245B00u;
    {
        const bool branch_taken_0x245b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B00u;
        // 0x245b04: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b00) {
            ctx->pc = 0x245E48u;
            goto label_245e48;
        }
    }
    ctx->pc = 0x245B08u;
    // 0x245b08: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x245b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x245b0c: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x245b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b10: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x245b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x245b14: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x245b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x245b18: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x245b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x245b1c: 0x0  nop
    ctx->pc = 0x245b1cu;
    // NOP
label_245b20:
    // 0x245b20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x245b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245b24: 0x32e5000f  andi        $a1, $s7, 0xF
    ctx->pc = 0x245b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x245b28: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x245b2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x245b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x245b30: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x245b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x245b34: 0x828807  srav        $s1, $v0, $a0
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x245b38: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x245b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245b3c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x245b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x245b40: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x245b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x245b44: 0x43a007  srav        $s4, $v1, $v0
    ctx->pc = 0x245b44u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x245b48: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x245b4c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x245b50: 0x64f007  srav        $fp, $a0, $v1
    ctx->pc = 0x245b50u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x245b54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x245b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x245b58: 0x14a00079  bnez        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x245B58u;
    {
        const bool branch_taken_0x245b58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B58u;
        // 0x245b5c: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b58) {
            ctx->pc = 0x245D40u;
            goto label_245d40;
        }
    }
    ctx->pc = 0x245B60u;
    // 0x245b60: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x245b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245b64: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x245B64u;
    {
        const bool branch_taken_0x245b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B64u;
        // 0x245b68: 0x8fa8005c  lw          $t0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b64) {
            ctx->pc = 0x245C88u;
            goto label_245c88;
        }
    }
    ctx->pc = 0x245B6Cu;
    // 0x245b6c: 0x2663003c  addiu       $v1, $s3, 0x3C
    ctx->pc = 0x245b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x245b70: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x245b74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245b78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245B78u;
    {
        const bool branch_taken_0x245b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B78u;
        // 0x245b7c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b78) {
            ctx->pc = 0x245B9Cu;
            goto label_245b9c;
        }
    }
    ctx->pc = 0x245B80u;
    // 0x245b80: 0x92680034  lbu         $t0, 0x34($s3)
    ctx->pc = 0x245b80u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b88: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x245b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x245b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b90: 0xc0913b6  jal         func_244ED8
    ctx->pc = 0x245B90u;
    SET_GPR_U32(ctx, 31, 0x245B98u);
    ctx->pc = 0x245B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B90u;
    // 0x245b94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244ED8u, 0x245B90u, 0x245B98u)) {
        return;
    }
    ctx->pc = 0x245B98u;
label_245b98:
    // 0x245b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x245b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_245b9c:
    // 0x245b9c: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x245b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x245ba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x245ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ba4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x245ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x245ba8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x245BA8u;
    {
        const bool branch_taken_0x245ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BA8u;
        // 0x245bac: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ba8) {
            ctx->pc = 0x245BF0u;
            goto label_245bf0;
        }
    }
    ctx->pc = 0x245BB0u;
    // 0x245bb0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245bb4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245bb8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245bbc: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x245BBCu;
    {
        const bool branch_taken_0x245bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x245BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BBCu;
        // 0x245bc0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bbc) {
            ctx->pc = 0x245BF4u;
            goto label_245bf4;
        }
    }
    ctx->pc = 0x245BC4u;
    // 0x245bc4: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x245bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x245bc8: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245bcc: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x245bccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245bd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x245bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bd4: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x245bd4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245bd8: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x245bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x245bdc: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245be0: 0xc091472  jal         func_2451C8
    ctx->pc = 0x245BE0u;
    SET_GPR_U32(ctx, 31, 0x245BE8u);
    ctx->pc = 0x245BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BE0u;
    // 0x245be4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2451C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2451C8u, 0x245BE0u, 0x245BE8u)) {
        return;
    }
    ctx->pc = 0x245BE8u;
label_245be8:
    // 0x245be8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x245BE8u;
    {
        const bool branch_taken_0x245be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BE8u;
        // 0x245bec: 0x92620034  lbu         $v0, 0x34($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245be8) {
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245BF0u;
label_245bf0:
    // 0x245bf0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x245bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_245bf4:
    // 0x245bf4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x245BF4u;
    {
        const bool branch_taken_0x245bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BF4u;
        // 0x245bf8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bf4) {
            ctx->pc = 0x245C44u;
            goto label_245c44;
        }
    }
    ctx->pc = 0x245BFCu;
    // 0x245bfc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245c00: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245c04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245c08: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x245C08u;
    {
        const bool branch_taken_0x245c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x245C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C08u;
        // 0x245c0c: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c08) {
            ctx->pc = 0x245C48u;
            goto label_245c48;
        }
    }
    ctx->pc = 0x245C10u;
    // 0x245c10: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x245c14: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245c18: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x245c1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x245c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c20: 0x2c81021  addu        $v0, $s6, $t0
    ctx->pc = 0x245c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x245c24: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x245c24u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245c28: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245c2c: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x245c30: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245c34: 0xc091472  jal         func_2451C8
    ctx->pc = 0x245C34u;
    SET_GPR_U32(ctx, 31, 0x245C3Cu);
    ctx->pc = 0x245C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C34u;
    // 0x245c38: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2451C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2451C8u, 0x245C34u, 0x245C3Cu)) {
        return;
    }
    ctx->pc = 0x245C3Cu;
label_245c3c:
    // 0x245c3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x245C3Cu;
    {
        const bool branch_taken_0x245c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C3Cu;
        // 0x245c40: 0x92620034  lbu         $v0, 0x34($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c3c) {
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245C44u;
label_245c44:
    // 0x245c44: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x245c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_245c48:
    // 0x245c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c4c: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x245c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x245c50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x245c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c54: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x245c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x245c58: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x245c58u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245c5c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245c60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x245c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c64: 0xc091472  jal         func_2451C8
    ctx->pc = 0x245C64u;
    SET_GPR_U32(ctx, 31, 0x245C6Cu);
    ctx->pc = 0x245C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C64u;
    // 0x245c68: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2451C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2451C8u, 0x245C64u, 0x245C6Cu)) {
        return;
    }
    ctx->pc = 0x245C6Cu;
label_245c6c:
    // 0x245c6c: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x245c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_245c70:
    // 0x245c70: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x245C70u;
    {
        const bool branch_taken_0x245c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C70u;
        // 0x245c74: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c70) {
            ctx->pc = 0x245E00u;
            goto label_245e00;
        }
    }
    ctx->pc = 0x245C78u;
    // 0x245c78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x245c7c: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x245c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x245c80: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x245C80u;
    {
        const bool branch_taken_0x245c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C80u;
        // 0x245c84: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c80) {
            ctx->pc = 0x245DFCu;
            goto label_245dfc;
        }
    }
    ctx->pc = 0x245C88u;
label_245c88:
    // 0x245c88: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x245c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x245c8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x245c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x245c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x245c94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x245C94u;
    {
        const bool branch_taken_0x245c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C94u;
        // 0x245c98: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c94) {
            ctx->pc = 0x245CD4u;
            goto label_245cd4;
        }
    }
    ctx->pc = 0x245C9Cu;
    // 0x245c9c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245ca0: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245ca4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245ca8: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x245CA8u;
    {
        const bool branch_taken_0x245ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x245CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CA8u;
        // 0x245cac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ca8) {
            ctx->pc = 0x245CD8u;
            goto label_245cd8;
        }
    }
    ctx->pc = 0x245CB0u;
    // 0x245cb0: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x245cb4: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245cb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cbc: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245cc0: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x245cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x245cc4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cc8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x245ccc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x245CCCu;
    {
        const bool branch_taken_0x245ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CCCu;
        // 0x245cd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ccc) {
            ctx->pc = 0x245D30u;
            goto label_245d30;
        }
    }
    ctx->pc = 0x245CD4u;
label_245cd4:
    // 0x245cd4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x245cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_245cd8:
    // 0x245cd8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x245CD8u;
    {
        const bool branch_taken_0x245cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CD8u;
        // 0x245cdc: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cd8) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245CE0u;
    // 0x245ce0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245ce4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245ce8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245cec: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x245CECu;
    {
        const bool branch_taken_0x245cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x245CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CECu;
        // 0x245cf0: 0x8ea80020  lw          $t0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cec) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CF4u;
    // 0x245cf4: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245cf8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cfc: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245d00: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x245d00u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x245d04: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d08: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x245d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x245d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245D0Cu;
    {
        const bool branch_taken_0x245d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D0Cu;
        // 0x245d10: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d0c) {
            ctx->pc = 0x245D30u;
            goto label_245d30;
        }
    }
    ctx->pc = 0x245D14u;
label_245d14:
    // 0x245d14: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x245d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_245d18:
    // 0x245d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d1c: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245d20: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d24: 0x8faa004c  lw          $t2, 0x4C($sp)
    ctx->pc = 0x245d24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x245d28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x245d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d2c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_245d30:
    // 0x245d30: 0xc09150e  jal         func_245438
    ctx->pc = 0x245D30u;
    SET_GPR_U32(ctx, 31, 0x245D38u);
    ctx->pc = 0x245D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D30u;
    // 0x245d34: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x245438u, 0x245D30u, 0x245D38u)) {
        return;
    }
    ctx->pc = 0x245D38u;
label_245d38:
    // 0x245d38: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x245E00u;
            goto label_245e00;
        }
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x245d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x245d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x245d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x245d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x245d4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x245D4Cu;
    {
        const bool branch_taken_0x245d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D4Cu;
        // 0x245d50: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d4c) {
            ctx->pc = 0x245D8Cu;
            goto label_245d8c;
        }
    }
    ctx->pc = 0x245D54u;
    // 0x245d54: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245d58: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245d5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245d60: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x245D60u;
    {
        const bool branch_taken_0x245d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x245D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D60u;
        // 0x245d64: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d60) {
            ctx->pc = 0x245D90u;
            goto label_245d90;
        }
    }
    ctx->pc = 0x245D68u;
    // 0x245d68: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x245d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x245d6c: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245d70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d74: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245d78: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x245d7c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d80: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x245d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x245d84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x245D84u;
    {
        const bool branch_taken_0x245d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D84u;
        // 0x245d88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d84) {
            ctx->pc = 0x245DC8u;
            goto label_245dc8;
        }
    }
    ctx->pc = 0x245D8Cu;
label_245d8c:
    // 0x245d8c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x245d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_245d90:
    // 0x245d90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x245D90u;
    {
        const bool branch_taken_0x245d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D90u;
        // 0x245d94: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d90) {
            ctx->pc = 0x245DD8u;
            goto label_245dd8;
        }
    }
    ctx->pc = 0x245D98u;
    // 0x245d98: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x245d9c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x245d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x245da0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x245da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x245da4: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x245DA4u;
    {
        const bool branch_taken_0x245da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x245DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DA4u;
        // 0x245da8: 0x8ea80020  lw          $t0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245da4) {
            ctx->pc = 0x245DDCu;
            goto label_245ddc;
        }
    }
    ctx->pc = 0x245DACu;
    // 0x245dac: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x245dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x245db0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245db4: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x245db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x245db8: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x245dbc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245dc0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x245dc4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245dc8:
    // 0x245dc8: 0xc0915c0  jal         func_245700
    ctx->pc = 0x245DC8u;
    SET_GPR_U32(ctx, 31, 0x245DD0u);
    ctx->pc = 0x245DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DC8u;
    // 0x245dcc: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x245700u, 0x245DC8u, 0x245DD0u)) {
        return;
    }
    ctx->pc = 0x245DD0u;
label_245dd0:
    // 0x245dd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x245DD0u;
    {
        const bool branch_taken_0x245dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DD0u;
        // 0x245dd4: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245dd0) {
            ctx->pc = 0x245E00u;
            goto label_245e00;
        }
    }
    ctx->pc = 0x245DD8u;
label_245dd8:
    // 0x245dd8: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_245ddc:
    // 0x245ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245de0: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245de4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245de8: 0x8faa004c  lw          $t2, 0x4C($sp)
    ctx->pc = 0x245de8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x245dec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x245decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245df0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x245df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245df4: 0xc0915c0  jal         func_245700
    ctx->pc = 0x245DF4u;
    SET_GPR_U32(ctx, 31, 0x245DFCu);
    ctx->pc = 0x245DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DF4u;
    // 0x245df8: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x245700u, 0x245DF4u, 0x245DFCu)) {
        return;
    }
    ctx->pc = 0x245DFCu;
label_245dfc:
    // 0x245dfc: 0x3d41018  mult        $v0, $fp, $s4
    ctx->pc = 0x245dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_245e00:
    // 0x245e00: 0x57b821  addu        $s7, $v0, $s7
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x245e04: 0x32e2000f  andi        $v0, $s7, 0xF
    ctx->pc = 0x245e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x245e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245E08u;
    {
        const bool branch_taken_0x245e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0x26e3000f  addiu       $v1, $s7, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e08) {
            ctx->pc = 0x245E1Cu;
            goto label_245e1c;
        }
    }
    ctx->pc = 0x245E10u;
    // 0x245e10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x245e14: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x245e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x245e18: 0x62b824  and         $s7, $v1, $v0
    ctx->pc = 0x245e18u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_245e1c:
    // 0x245e1c: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x245e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x245e20: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x245e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x245e24: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x245e28: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x245e2c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x245e30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245e34: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x245e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x245e38: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x245e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x245e3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x245e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x245e40: 0x1040ff37  beqz        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x245E40u;
    {
        const bool branch_taken_0x245e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E40u;
        // 0x245e44: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e40) {
            ctx->pc = 0x245B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245b20;
        }
    }
    ctx->pc = 0x245E48u;
label_245e48:
    // 0x245e48: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x245e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x245e4c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x245E4Cu;
    {
        const bool branch_taken_0x245e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E4Cu;
        // 0x245e50: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e4c) {
            ctx->pc = 0x245F14u;
            goto label_245f14;
        }
    }
    ctx->pc = 0x245E54u;
    // 0x245e54: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x245e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x245e58: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x245e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x245e5c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x245E5Cu;
    {
        const bool branch_taken_0x245e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E5Cu;
        // 0x245e60: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e5c) {
            ctx->pc = 0x245F14u;
            goto label_245f14;
        }
    }
    ctx->pc = 0x245E64u;
    // 0x245e64: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x245e68: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x245e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245e70: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x245e74: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x245e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x245e78: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x245e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x245e7c: 0x2484b610  addiu       $a0, $a0, -0x49F0
    ctx->pc = 0x245e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948368));
    // 0x245e80: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x245e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245e84: 0x81982  srl         $v1, $t0, 6
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x245e88: 0x24a5b5f0  addiu       $a1, $a1, -0x4A10
    ctx->pc = 0x245e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948336));
    // 0x245e8c: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x245e90: 0x634c2  srl         $a2, $a2, 19
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 19));
    // 0x245e94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x245e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x245e98: 0x30d0000f  andi        $s0, $a2, 0xF
    ctx->pc = 0x245e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x245e9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x245e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245ea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245ea4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x245ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245ea8: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x245EA8u;
    {
        const bool branch_taken_0x245ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x245EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EA8u;
        // 0x245eac: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ea8) {
            ctx->pc = 0x245EC0u;
            goto label_245ec0;
        }
    }
    ctx->pc = 0x245EB0u;
    // 0x245eb0: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x245eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x245eb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x245EB4u;
    {
        const bool branch_taken_0x245eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB4u;
        // 0x245eb8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eb4) {
            ctx->pc = 0x245EC0u;
            goto label_245ec0;
        }
    }
    ctx->pc = 0x245EBCu;
    // 0x245ebc: 0x50380a  movz        $a3, $v0, $s0
    ctx->pc = 0x245ebcu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_245ec0:
    // 0x245ec0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x245ec4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x245EC4u;
    {
        const bool branch_taken_0x245ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245ec4) {
            ctx->pc = 0x245EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245EC4u;
            // 0x245ec8: 0x8e690038  lw          $t1, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EECu;
            goto label_245eec;
        }
    }
    ctx->pc = 0x245ECCu;
    // 0x245ecc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ed4: 0x92680034  lbu         $t0, 0x34($s3)
    ctx->pc = 0x245ed4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245ed8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245edc: 0xc0913b6  jal         func_244ED8
    ctx->pc = 0x245EDCu;
    SET_GPR_U32(ctx, 31, 0x245EE4u);
    ctx->pc = 0x245EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EDCu;
    // 0x245ee0: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244ED8u, 0x245EDCu, 0x245EE4u)) {
        return;
    }
    ctx->pc = 0x245EE4u;
label_245ee4:
    // 0x245ee4: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x245ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x245ee8: 0x8e690038  lw          $t1, 0x38($s3)
    ctx->pc = 0x245ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_245eec:
    // 0x245eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ef0: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x245ef0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245ef4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ef8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x245ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245efc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x245efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f00: 0xc091472  jal         func_2451C8
    ctx->pc = 0x245F00u;
    SET_GPR_U32(ctx, 31, 0x245F08u);
    ctx->pc = 0x245F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F00u;
    // 0x245f04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2451C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2451C8u, 0x245F00u, 0x245F08u)) {
        return;
    }
    ctx->pc = 0x245F08u;
label_245f08:
    // 0x245f08: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x245f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x245f0c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x245F0Cu;
    {
        const bool branch_taken_0x245f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f0c) {
            ctx->pc = 0x245F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F0Cu;
            // 0x245f10: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245F14u;
            goto label_245f14;
        }
    }
    ctx->pc = 0x245F14u;
label_245f14:
    // 0x245f14: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x245F14u;
    SET_GPR_U32(ctx, 31, 0x245F1Cu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x245F14u, 0x245F1Cu)) {
        return;
    }
    ctx->pc = 0x245F1Cu;
label_245f1c:
    // 0x245f1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x245f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x245f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245f24: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x245F24u;
    SET_GPR_U32(ctx, 31, 0x245F2Cu);
    ctx->pc = 0x245F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F24u;
    // 0x245f28: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x245F24u, 0x245F2Cu)) {
        return;
    }
    ctx->pc = 0x245F2Cu;
label_245f2c:
    // 0x245f2c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x245f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245f34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245f38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245F38u;
    {
        const bool branch_taken_0x245f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x245F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F38u;
        // 0x245f3c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f38) {
            ctx->pc = 0x245F48u;
            goto label_245f48;
        }
    }
    ctx->pc = 0x245F40u;
    // 0x245f40: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x245F40u;
    SET_GPR_U32(ctx, 31, 0x245F48u);
    ctx->pc = 0x245F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F40u;
    // 0x245f44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x245F40u, 0x245F48u)) {
        return;
    }
    ctx->pc = 0x245F48u;
label_245f48:
    // 0x245f48: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x245f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x245f4c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x245f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x245f50: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x245f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x245f54: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x245f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x245f58: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x245f58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x245f5c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x245f5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x245f60: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x245f60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x245f64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x245f64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x245f68: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x245f68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x245f6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245f70: 0x3e00008  jr          $ra
    ctx->pc = 0x245F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F70u;
        // 0x245f74: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245F78u;
}
