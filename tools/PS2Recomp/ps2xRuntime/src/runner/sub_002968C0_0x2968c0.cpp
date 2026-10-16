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

// Function: sub_002968C0
// Address: 0x2968c0 - 0x296ad8
void sub_002968C0_0x2968c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002968C0_0x2968c0");
#endif

    switch (ctx->pc) {
        case 0x296904u: goto label_296904;
        case 0x29690cu: goto label_29690c;
        case 0x296924u: goto label_296924;
        case 0x29692cu: goto label_29692c;
        case 0x296938u: goto label_296938;
        case 0x29694cu: goto label_29694c;
        case 0x29695cu: goto label_29695c;
        case 0x296978u: goto label_296978;
        case 0x296980u: goto label_296980;
        case 0x2969a0u: goto label_2969a0;
        case 0x2969b4u: goto label_2969b4;
        case 0x2969d4u: goto label_2969d4;
        case 0x2969e0u: goto label_2969e0;
        case 0x296a30u: goto label_296a30;
        case 0x296a5cu: goto label_296a5c;
        case 0x296a70u: goto label_296a70;
        case 0x296a94u: goto label_296a94;
        case 0x296aa8u: goto label_296aa8;
        default: break;
    }

    ctx->pc = 0x2968c0u;

    // 0x2968c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2968c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2968c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2968c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2968c8: 0x3c160068  lui         $s6, 0x68
    ctx->pc = 0x2968c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)104 << 16));
    // 0x2968cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2968ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2968d0: 0x8ec2e7d0  lw          $v0, -0x1830($s6)
    ctx->pc = 0x2968d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E7D0u));
    // 0x2968d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2968d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2968d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2968dc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2968dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2968e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2968e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2968e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2968e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2968e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2968e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2968ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2968ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2968f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2968F0u;
    {
        const bool branch_taken_0x2968f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2968F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968F0u;
        // 0x2968f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968f0) {
            ctx->pc = 0x296904u;
            goto label_296904;
        }
    }
    ctx->pc = 0x2968F8u;
    // 0x2968f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2968f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2968fc: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2968FCu;
    SET_GPR_U32(ctx, 31, 0x296904u);
    ctx->pc = 0x296900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968FCu;
    // 0x296900: 0x2484d5b8  addiu       $a0, $a0, -0x2A48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2968FCu, 0x296904u)) {
        return;
    }
    ctx->pc = 0x296904u;
label_296904:
    // 0x296904: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x296904u;
    SET_GPR_U32(ctx, 31, 0x29690Cu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x296904u, 0x29690Cu)) {
        return;
    }
    ctx->pc = 0x29690Cu;
label_29690c:
    // 0x29690c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x29690cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x296910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296914u;
    {
        const bool branch_taken_0x296914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296914u;
        // 0x296918: 0xac83e800  sw          $v1, -0x1800($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296914) {
            ctx->pc = 0x296924u;
            goto label_296924;
        }
    }
    ctx->pc = 0x29691Cu;
    // 0x29691c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x29691Cu;
    SET_GPR_U32(ctx, 31, 0x296924u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x29691Cu, 0x296924u)) {
        return;
    }
    ctx->pc = 0x296924u;
label_296924:
    // 0x296924: 0xc0a5728  jal         func_295CA0
    ctx->pc = 0x296924u;
    SET_GPR_U32(ctx, 31, 0x29692Cu);
    ctx->pc = 0x296928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296924u;
    // 0x296928: 0x3c130068  lui         $s3, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295CA0u, 0x296924u, 0x29692Cu)) {
        return;
    }
    ctx->pc = 0x29692Cu;
label_29692c:
    // 0x29692c: 0x8e64e7ec  lw          $a0, -0x1814($s3)
    ctx->pc = 0x29692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961132)));
    // 0x296930: 0xc0c84dc  jal         func_321370
    ctx->pc = 0x296930u;
    SET_GPR_U32(ctx, 31, 0x296938u);
    ctx->pc = 0x321370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321370u, 0x296930u, 0x296938u)) {
        return;
    }
    ctx->pc = 0x296938u;
label_296938:
    // 0x296938: 0x8e63e7ec  lw          $v1, -0x1814($s3)
    ctx->pc = 0x296938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961132)));
    // 0x29693c: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x29693Cu;
    {
        const bool branch_taken_0x29693c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x296940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29693Cu;
        // 0x296940: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29693c) {
            ctx->pc = 0x296AACu;
            goto label_296aac;
        }
    }
    ctx->pc = 0x296944u;
    // 0x296944: 0xc0a5904  jal         func_296410
    ctx->pc = 0x296944u;
    SET_GPR_U32(ctx, 31, 0x29694Cu);
    ctx->pc = 0x296948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296944u;
    // 0x296948: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296410u, 0x296944u, 0x29694Cu)) {
        return;
    }
    ctx->pc = 0x29694Cu;
label_29694c:
    // 0x29694c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x29694Cu;
    {
        const bool branch_taken_0x29694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29694Cu;
        // 0x296950: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29694c) {
            ctx->pc = 0x296A64u;
            goto label_296a64;
        }
    }
    ctx->pc = 0x296954u;
    // 0x296954: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x296954u;
    SET_GPR_U32(ctx, 31, 0x29695Cu);
    ctx->pc = 0x296958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296954u;
    // 0x296958: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x296954u, 0x29695Cu)) {
        return;
    }
    ctx->pc = 0x29695Cu;
label_29695c:
    // 0x29695c: 0x8e22e810  lw          $v0, -0x17F0($s1)
    ctx->pc = 0x29695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961168)));
    // 0x296960: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x296960u;
    {
        const bool branch_taken_0x296960 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x296964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296960u;
        // 0x296964: 0x3c150070  lui         $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296960) {
            ctx->pc = 0x296A14u;
            goto label_296a14;
        }
    }
    ctx->pc = 0x296968u;
    // 0x296968: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
    // 0x29696c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29696Cu;
    {
        const bool branch_taken_0x29696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29696Cu;
        // 0x296970: 0x3c170068  lui         $s7, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29696c) {
            ctx->pc = 0x29699Cu;
            goto label_29699c;
        }
    }
    ctx->pc = 0x296974u;
    // 0x296974: 0x0  nop
    ctx->pc = 0x296974u;
    // NOP
label_296978:
    // 0x296978: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29697c: 0x0  nop
    ctx->pc = 0x29697cu;
    // NOP
label_296980:
    // 0x296980: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x296984: 0x0  nop
    ctx->pc = 0x296984u;
    // NOP
    // 0x296988: 0x0  nop
    ctx->pc = 0x296988u;
    // NOP
    // 0x29698c: 0x0  nop
    ctx->pc = 0x29698cu;
    // NOP
    // 0x296990: 0x0  nop
    ctx->pc = 0x296990u;
    // NOP
    // 0x296994: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296994u;
    {
        const bool branch_taken_0x296994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x296994) {
            ctx->pc = 0x296980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296980;
        }
    }
    ctx->pc = 0x29699Cu;
label_29699c:
    // 0x29699c: 0x26b07b90  addiu       $s0, $s5, 0x7B90
    ctx->pc = 0x29699cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31632));
label_2969a0:
    // 0x2969a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2969a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2969a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2969a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969a8: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x2969a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x2969ac: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2969ACu;
    SET_GPR_U32(ctx, 31, 0x2969B4u);
    ctx->pc = 0x2969B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969ACu;
    // 0x2969b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2969ACu, 0x2969B4u)) {
        return;
    }
    ctx->pc = 0x2969B4u;
label_2969b4:
    // 0x2969b4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2969B4u;
    {
        const bool branch_taken_0x2969b4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2969b4) {
            ctx->pc = 0x2969B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2969B4u;
            // 0x2969b8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296A04u;
            goto label_296a04;
        }
    }
    ctx->pc = 0x2969BCu;
    // 0x2969bc: 0x8ec2e7d0  lw          $v0, -0x1830($s6)
    ctx->pc = 0x2969bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961104)));
    // 0x2969c0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2969C0u;
    {
        const bool branch_taken_0x2969c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2969C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969C0u;
        // 0x2969c4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969c0) {
            ctx->pc = 0x2969D8u;
            goto label_2969d8;
        }
    }
    ctx->pc = 0x2969C8u;
    // 0x2969c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2969cc: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2969CCu;
    SET_GPR_U32(ctx, 31, 0x2969D4u);
    ctx->pc = 0x2969D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969CCu;
    // 0x2969d0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2969CCu, 0x2969D4u)) {
        return;
    }
    ctx->pc = 0x2969D4u;
label_2969d4:
    // 0x2969d4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2969d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2969d8:
    // 0x2969d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2969d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2969dc: 0x0  nop
    ctx->pc = 0x2969dcu;
    // NOP
label_2969e0:
    // 0x2969e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2969e4: 0x0  nop
    ctx->pc = 0x2969e4u;
    // NOP
    // 0x2969e8: 0x0  nop
    ctx->pc = 0x2969e8u;
    // NOP
    // 0x2969ec: 0x0  nop
    ctx->pc = 0x2969ecu;
    // NOP
    // 0x2969f0: 0x0  nop
    ctx->pc = 0x2969f0u;
    // NOP
    // 0x2969f4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2969F4u;
    {
        const bool branch_taken_0x2969f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2969f4) {
            ctx->pc = 0x2969E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2969e0;
        }
    }
    ctx->pc = 0x2969FCu;
    // 0x2969fc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2969FCu;
    {
        const bool branch_taken_0x2969fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969FCu;
        // 0x296a00: 0x26b07b90  addiu       $s0, $s5, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969fc) {
            ctx->pc = 0x2969A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2969a0;
        }
    }
    ctx->pc = 0x296A04u;
label_296a04:
    // 0x296a04: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x296A04u;
    {
        const bool branch_taken_0x296a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A04u;
        // 0x296a08: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a04) {
            ctx->pc = 0x296978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296978;
        }
    }
    ctx->pc = 0x296A0Cu;
    // 0x296a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296A0Cu;
    {
        const bool branch_taken_0x296a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A0Cu;
        // 0x296a10: 0xae20e810  sw          $zero, -0x17F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294961168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a0c) {
            ctx->pc = 0x296A1Cu;
            goto label_296a1c;
        }
    }
    ctx->pc = 0x296A14u;
label_296a14:
    // 0x296a14: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
    // 0x296a18: 0x3c170068  lui         $s7, 0x68
    ctx->pc = 0x296a18u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)104 << 16));
label_296a1c:
    // 0x296a1c: 0x26907bd0  addiu       $s0, $s4, 0x7BD0
    ctx->pc = 0x296a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 31696));
    // 0x296a20: 0xae927bd0  sw          $s2, 0x7BD0($s4)
    ctx->pc = 0x296a20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 31696), GPR_U32(ctx, 18));
    // 0x296a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a28: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x296A28u;
    SET_GPR_U32(ctx, 31, 0x296A30u);
    ctx->pc = 0x296A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A28u;
    // 0x296a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3242E0u, 0x296A28u, 0x296A30u)) {
        return;
    }
    ctx->pc = 0x296A30u;
label_296a30:
    // 0x296a30: 0x26f1f9c0  addiu       $s1, $s7, -0x640
    ctx->pc = 0x296a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965696));
    // 0x296a34: 0x26a47b90  addiu       $a0, $s5, 0x7B90
    ctx->pc = 0x296a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 31632));
    // 0x296a38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x296a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x296a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x296a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a48: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296a4c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x296a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296a54: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x296A54u;
    SET_GPR_U32(ctx, 31, 0x296A5Cu);
    ctx->pc = 0x296A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A54u;
    // 0x296a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x296A54u, 0x296A5Cu)) {
        return;
    }
    ctx->pc = 0x296A5Cu;
label_296a5c:
    // 0x296a5c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296A5Cu;
    {
        const bool branch_taken_0x296a5c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x296a5c) {
            ctx->pc = 0x296A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296A5Cu;
            // 0x296a60: 0x8ec2e7d0  lw          $v0, -0x1830($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296A84u;
            goto label_296a84;
        }
    }
    ctx->pc = 0x296A64u;
label_296a64:
    // 0x296a64: 0x8e64e7ec  lw          $a0, -0x1814($s3)
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961132)));
    // 0x296a68: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x296A68u;
    SET_GPR_U32(ctx, 31, 0x296A70u);
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x296A68u, 0x296A70u)) {
        return;
    }
    ctx->pc = 0x296A70u;
label_296a70:
    // 0x296a70: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x296a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x296a74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296a78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x296a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296a7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x296A7Cu;
    {
        const bool branch_taken_0x296a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A7Cu;
        // 0x296a80: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a7c) {
            ctx->pc = 0x296AACu;
            goto label_296aac;
        }
    }
    ctx->pc = 0x296A84u;
label_296a84:
    // 0x296a84: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296A84u;
    {
        const bool branch_taken_0x296a84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x296A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A84u;
        // 0x296a88: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a84) {
            ctx->pc = 0x296A94u;
            goto label_296a94;
        }
    }
    ctx->pc = 0x296A8Cu;
    // 0x296a8c: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296A8Cu;
    SET_GPR_U32(ctx, 31, 0x296A94u);
    ctx->pc = 0x296A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A8Cu;
    // 0x296a90: 0x2484d5f0  addiu       $a0, $a0, -0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296A8Cu, 0x296A94u)) {
        return;
    }
    ctx->pc = 0x296A94u;
label_296a94:
    // 0x296a94: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x296a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x296a98: 0x8e64e7ec  lw          $a0, -0x1814($s3)
    ctx->pc = 0x296a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961132)));
    // 0x296a9c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x296a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x296aa0: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x296AA0u;
    SET_GPR_U32(ctx, 31, 0x296AA8u);
    ctx->pc = 0x296AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AA0u;
    // 0x296aa4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x296AA0u, 0x296AA8u)) {
        return;
    }
    ctx->pc = 0x296AA8u;
label_296aa8:
    // 0x296aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x296aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296aac:
    // 0x296aac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x296aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296ab0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x296ab0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296ab4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x296ab4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296ab8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x296ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296abc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x296abcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296ac0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x296ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296ac4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x296ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296ac8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x296ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296acc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x296AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AD0u;
        // 0x296ad4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296AD8u;
}
