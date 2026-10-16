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

// Function: sub_00247148
// Address: 0x247148 - 0x247440
void sub_00247148_0x247148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247148_0x247148");
#endif

    switch (ctx->pc) {
        case 0x2471f0u: goto label_2471f0;
        case 0x247320u: goto label_247320;
        case 0x2473f0u: goto label_2473f0;
        default: break;
    }

    ctx->pc = 0x247148u;

    // 0x247148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24714c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x24714cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x247154: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x247154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x247158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24715c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x24715cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247160: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x247164: 0x8c84416c  lw          $a0, 0x416C($a0)
    ctx->pc = 0x247164u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x247168: 0x24481180  addiu       $t0, $v0, 0x1180
    ctx->pc = 0x247168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x24716c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x24716cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x247170: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x247170u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C1180u));
    // 0x247174: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x247174u;
    {
        const bool branch_taken_0x247174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247174u;
        // 0x247178: 0xc48021  addu        $s0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247174) {
            ctx->pc = 0x247420u;
            goto label_247420;
        }
    }
    ctx->pc = 0x24717Cu;
    // 0x24717c: 0x10a0007d  beqz        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x24717Cu;
    {
        const bool branch_taken_0x24717c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24717Cu;
        // 0x247180: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24717c) {
            ctx->pc = 0x247374u;
            goto label_247374;
        }
    }
    ctx->pc = 0x247184u;
    // 0x247184: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x247184u;
    {
        const bool branch_taken_0x247184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247184u;
        // 0x247188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247184) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x24718Cu;
    // 0x24718c: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x24718cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x247190: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x247194: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x247194u;
    {
        const bool branch_taken_0x247194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247194u;
        // 0x247198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247194) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x24719Cu;
    // 0x24719c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2471a0: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2471a4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2471a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2471a8: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x2471a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2471ac: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2471b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2471b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2471b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2471bc: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2471bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2471c0: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2471C0u;
    {
        const bool branch_taken_0x2471c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471C0u;
        // 0x2471c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471c0) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x2471C8u;
    // 0x2471c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2471cc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2471d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2471d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2471d4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2471D4u;
    {
        const bool branch_taken_0x2471d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2471D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471D4u;
        // 0x2471d8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471d4) {
            ctx->pc = 0x24724Cu;
            goto label_24724c;
        }
    }
    ctx->pc = 0x2471DCu;
    // 0x2471dc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2471e0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2471e4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2471e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2471e8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2471e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2471ec: 0x0  nop
    ctx->pc = 0x2471ecu;
    // NOP
label_2471f0:
    // 0x2471f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2471f4: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2471f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2471f8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x2471f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2471fc: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x2471fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
    // 0x247200: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x247200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x247204: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x247204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247208: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24720c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24720Cu;
    {
        const bool branch_taken_0x24720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24720Cu;
        // 0x247210: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24720c) {
            ctx->pc = 0x247240u;
            goto label_247240;
        }
    }
    ctx->pc = 0x247214u;
    // 0x247214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x247214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247218: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x247218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x24721c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x247220: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x247220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x247224: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x247224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24722c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x24722Cu;
    {
        const bool branch_taken_0x24722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24722c) {
            ctx->pc = 0x247230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24722Cu;
            // 0x247230: 0xace00024  sw          $zero, 0x24($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247234u;
            goto label_247234;
        }
    }
    ctx->pc = 0x247234u;
label_247234:
    // 0x247234: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x247234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x247238: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x247238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24723c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24723cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_247240:
    // 0x247240: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x247244: 0x54c2ffea  bnel        $a2, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x247244) {
            ctx->pc = 0x247248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247244u;
            // 0x247248: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2471F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2471f0;
        }
    }
    ctx->pc = 0x24724Cu;
label_24724c:
    // 0x24724c: 0x25651180  addiu       $a1, $t3, 0x1180
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4480));
    // 0x247250: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x247250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x247254: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x247254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x247258: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24725c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x247260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x247264: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x247264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x247268: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x247268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x24726c: 0xca2018  mult        $a0, $a2, $t2
    ctx->pc = 0x24726cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x247270: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x247270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x247274: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x247274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x247278: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x247278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x24727c: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x247280: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x247284: 0x8f828500  lw          $v0, -0x7B00($gp)
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
    // 0x247288: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x247288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x24728c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24728Cu;
    {
        const bool branch_taken_0x24728c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24728Cu;
        // 0x247290: 0x8e080030  lw          $t0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24728c) {
            ctx->pc = 0x2472A8u;
            goto label_2472a8;
        }
    }
    ctx->pc = 0x247294u;
    // 0x247294: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x247294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x247298: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x247298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x24729c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2472a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2472A0u;
    {
        const bool branch_taken_0x2472a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472A0u;
        // 0x2472a4: 0x481823  subu        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472a0) {
            ctx->pc = 0x2472B8u;
            goto label_2472b8;
        }
    }
    ctx->pc = 0x2472A8u;
label_2472a8:
    // 0x2472a8: 0x6a2818  mult        $a1, $v1, $t2
    ctx->pc = 0x2472a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2472ac: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2472b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2472b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2472b4: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2472b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2472b8:
    // 0x2472b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2472b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2472bc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2472bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2472c0: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x2472c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2472c4: 0x25681180  addiu       $t0, $t3, 0x1180
    ctx->pc = 0x2472c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4480));
    // 0x2472c8: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x2472c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2472cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2472ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2472d0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2472d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2472d4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2472d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2472d8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2472d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2472dc: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2472dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2472e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2472e4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2472e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2472e8: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x2472e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x2472ec: 0xa2050017  sb          $a1, 0x17($s0)
    ctx->pc = 0x2472ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x2472f0: 0x91220020  lbu         $v0, 0x20($t1)
    ctx->pc = 0x2472f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2472f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2472f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2472f8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2472F8u;
    {
        const bool branch_taken_0x2472f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2472f8) {
            ctx->pc = 0x2472FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472F8u;
            // 0x2472fc: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247324u;
            goto label_247324;
        }
    }
    ctx->pc = 0x247300u;
    // 0x247300: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x247304: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247304u;
    {
        const bool branch_taken_0x247304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247304u;
        // 0x247308: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247304) {
            ctx->pc = 0x247320u;
            goto label_247320;
        }
    }
    ctx->pc = 0x24730Cu;
    // 0x24730c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x247310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247314: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x247318: 0xc0915c4  jal         func_245710
    ctx->pc = 0x247318u;
    SET_GPR_U32(ctx, 31, 0x247320u);
    ctx->pc = 0x24731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247318u;
    // 0x24731c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x245710u, 0x247318u, 0x247320u)) {
        return;
    }
    ctx->pc = 0x247320u;
label_247320:
    // 0x247320: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_247324:
    // 0x247324: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x247328: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x247328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24732c: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x24732cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x247330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x247334: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x247338: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x247338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24733c: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x24733cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x247340: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x247344: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x247344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x247348: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x247348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x24734c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x24734cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x247350: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x247350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x247354: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x247354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x247358: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x247358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x24735c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x24735cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x247360: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x247364: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x247364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x247368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x247368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24736c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24736Cu;
    {
        const bool branch_taken_0x24736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24736Cu;
        // 0x247370: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24736c) {
            ctx->pc = 0x247418u;
            goto label_247418;
        }
    }
    ctx->pc = 0x247374u;
label_247374:
    // 0x247374: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x247374u;
    {
        const bool branch_taken_0x247374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247374u;
        // 0x247378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247374) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x24737Cu;
    // 0x24737c: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x24737cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x247380: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x247380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x247384: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x247384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x247388: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x247388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x24738c: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x247390: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x247390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x247394: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247398: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x247398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x24739c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24739cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2473a0: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x2473a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2473a4: 0x14890002  bne         $a0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2473A4u;
    {
        const bool branch_taken_0x2473a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x2473A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A4u;
        // 0x2473a8: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473a4) {
            ctx->pc = 0x2473B0u;
            goto label_2473b0;
        }
    }
    ctx->pc = 0x2473ACu;
    // 0x2473ac: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x2473acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_2473b0:
    // 0x2473b0: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2473b4: 0x14c2001b  bne         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2473B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473B4u;
        // 0x2473b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x2473BCu;
    // 0x2473bc: 0x8f878500  lw          $a3, -0x7B00($gp)
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
    // 0x2473c0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2473c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2473c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2473C4u;
    {
        const bool branch_taken_0x2473c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C4u;
        // 0x2473c8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473c4) {
            ctx->pc = 0x247418u;
            goto label_247418;
        }
    }
    ctx->pc = 0x2473CCu;
    // 0x2473cc: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x2473ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2473d0: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2473d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2473d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2473d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2473d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2473dc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2473DCu;
    {
        const bool branch_taken_0x2473dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473DCu;
        // 0x2473e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473dc) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x2473E4u;
    // 0x2473e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2473e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2473e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2473ec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2473ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2473f0:
    // 0x2473f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2473f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2473f4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2473f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2473f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2473F8u;
    {
        const bool branch_taken_0x2473f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473F8u;
        // 0x2473fc: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473f8) {
            ctx->pc = 0x247418u;
            goto label_247418;
        }
    }
    ctx->pc = 0x247400u;
    // 0x247400: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x247400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x247404: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x247404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x247408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24740c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247410: 0x5080fff7  beql        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x247410u;
    {
        const bool branch_taken_0x247410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247410) {
            ctx->pc = 0x247414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247410u;
            // 0x247414: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2473f0;
        }
    }
    ctx->pc = 0x247418u;
label_247418:
    // 0x247418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247418u;
    {
        const bool branch_taken_0x247418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247418u;
        // 0x24741c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247418) {
            ctx->pc = 0x247424u;
            goto label_247424;
        }
    }
    ctx->pc = 0x247420u;
label_247420:
    // 0x247420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x247420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247424:
    // 0x247424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x247424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24742c: 0x3e00008  jr          $ra
    ctx->pc = 0x24742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24742Cu;
        // 0x247430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247434u;
    // 0x247434: 0x0  nop
    ctx->pc = 0x247434u;
    // NOP
    // 0x247438: 0x0  nop
    ctx->pc = 0x247438u;
    // NOP
    // 0x24743c: 0x0  nop
    ctx->pc = 0x24743cu;
    // NOP
    ctx->pc = 0x247440u;
}
