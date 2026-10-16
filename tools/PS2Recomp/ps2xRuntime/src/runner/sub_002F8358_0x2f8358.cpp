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

// Function: sub_002F8358
// Address: 0x2f8358 - 0x2f8488
void sub_002F8358_0x2f8358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8358_0x2f8358");
#endif

    switch (ctx->pc) {
        case 0x2f83a0u: goto label_2f83a0;
        case 0x2f83e8u: goto label_2f83e8;
        case 0x2f8438u: goto label_2f8438;
        case 0x2f844cu: goto label_2f844c;
        case 0x2f8454u: goto label_2f8454;
        case 0x2f8464u: goto label_2f8464;
        default: break;
    }

    ctx->pc = 0x2f8358u;

    // 0x2f8358: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f8358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f835c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f8360: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f8364: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f8368: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f8368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f836c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8370: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f8370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8374: 0x8c436660  lw          $v1, 0x6660($v0)
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686660u));
    // 0x2f8378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f837c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f8380: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f8380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f8384: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8384u;
    {
        const bool branch_taken_0x2f8384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8384u;
        // 0x2f8388: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8384) {
            ctx->pc = 0x2F8394u;
            goto label_2f8394;
        }
    }
    ctx->pc = 0x2F838Cu;
    // 0x2f838c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F838Cu;
    {
        const bool branch_taken_0x2f838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F838Cu;
        // 0x2f8390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f838c) {
            ctx->pc = 0x2F8468u;
            goto label_2f8468;
        }
    }
    ctx->pc = 0x2F8394u;
label_2f8394:
    // 0x2f8394: 0x3c140072  lui         $s4, 0x72
    ctx->pc = 0x2f8394u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)114 << 16));
    // 0x2f8398: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F8398u;
    SET_GPR_U32(ctx, 31, 0x2F83A0u);
    ctx->pc = 0x2F839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8398u;
    // 0x2f839c: 0x8e847b80  lw          $a0, 0x7B80($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F8398u, 0x2F83A0u)) {
        return;
    }
    ctx->pc = 0x2F83A0u;
label_2f83a0:
    // 0x2f83a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f83a4: 0x3c070072  lui         $a3, 0x72
    ctx->pc = 0x2f83a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)114 << 16));
    // 0x2f83a8: 0x24f157c0  addiu       $s1, $a3, 0x57C0
    ctx->pc = 0x2f83a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 22464));
    // 0x2f83ac: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x2f83acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2f83b0: 0xace257c0  sw          $v0, 0x57C0($a3)
    ctx->pc = 0x2f83b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7257C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257C0u, _value); } while (0);
    // 0x2f83b4: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2f83b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2f83b8: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2f83b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x7257E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257E8u, _value); } while (0);
    // 0x2f83bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f83bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f83c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f83c4: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x2f83c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7257ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257ECu, _value); } while (0);
    // 0x2f83c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f83c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7257C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257C4u, _value); } while (0);
    // 0x2f83cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f83d0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2f83d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7257C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257C8u, _value); } while (0);
    // 0x2f83d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f83d8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f83d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7257CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257CCu, _value); } while (0);
    // 0x2f83dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f83e0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2f83e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7257D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257D0u, _value); } while (0);
    // 0x2f83e4: 0x0  nop
    ctx->pc = 0x2f83e4u;
    // NOP
label_2f83e8:
    // 0x2f83e8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2f83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f83ec: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2f83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f83f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f83f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f83f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f83f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f83f8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2f83f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f83fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f83fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8400: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8400u;
    {
        const bool branch_taken_0x2f8400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8400) {
            ctx->pc = 0x2F83E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f83e8;
        }
    }
    ctx->pc = 0x2F8408u;
    // 0x2f8408: 0x24e757c0  addiu       $a3, $a3, 0x57C0
    ctx->pc = 0x2f8408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22464));
    // 0x2f840c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f840cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8410: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f8410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f8414: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8418: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x2f8418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x2f841c: 0x34a51301  ori         $a1, $a1, 0x1301
    ctx->pc = 0x2f841cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4865);
    // 0x2f8420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8424: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f8424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8428: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f842c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8430: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8430u;
    SET_GPR_U32(ctx, 31, 0x2F8438u);
    ctx->pc = 0x2F8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8430u;
    // 0x2f8434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8430u, 0x2F8438u)) {
        return;
    }
    ctx->pc = 0x2F8438u;
label_2f8438:
    // 0x2f8438: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8438u;
    {
        const bool branch_taken_0x2f8438 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8438u;
        // 0x2f843c: 0x8e847b80  lw          $a0, 0x7B80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8438) {
            ctx->pc = 0x2F845Cu;
            goto label_2f845c;
        }
    }
    ctx->pc = 0x2F8440u;
    // 0x2f8440: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f8440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f8444: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F8444u;
    SET_GPR_U32(ctx, 31, 0x2F844Cu);
    ctx->pc = 0x2F8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8444u;
    // 0x2f8448: 0x248402e0  addiu       $a0, $a0, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F8444u, 0x2F844Cu)) {
        return;
    }
    ctx->pc = 0x2F844Cu;
label_2f844c:
    // 0x2f844c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F844Cu;
    SET_GPR_U32(ctx, 31, 0x2F8454u);
    ctx->pc = 0x2F8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F844Cu;
    // 0x2f8450: 0x8e847b80  lw          $a0, 0x7B80($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F844Cu, 0x2F8454u)) {
        return;
    }
    ctx->pc = 0x2F8454u;
label_2f8454:
    // 0x2f8454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8454u;
    {
        const bool branch_taken_0x2f8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8454u;
        // 0x2f8458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8454) {
            ctx->pc = 0x2F8468u;
            goto label_2f8468;
        }
    }
    ctx->pc = 0x2F845Cu;
label_2f845c:
    // 0x2f845c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F845Cu;
    SET_GPR_U32(ctx, 31, 0x2F8464u);
    ctx->pc = 0x2F8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F845Cu;
    // 0x2f8460: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F845Cu, 0x2F8464u)) {
        return;
    }
    ctx->pc = 0x2F8464u;
label_2f8464:
    // 0x2f8464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f8464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8468:
    // 0x2f8468: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f846c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f846cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8470: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f8470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8474: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8478: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f847c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f847cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8480: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8480u;
        // 0x2f8484: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8488u;
}
