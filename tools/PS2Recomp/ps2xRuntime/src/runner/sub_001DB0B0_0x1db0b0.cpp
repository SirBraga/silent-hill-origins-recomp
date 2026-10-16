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

// Function: sub_001DB0B0
// Address: 0x1db0b0 - 0x1db240
void sub_001DB0B0_0x1db0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB0B0_0x1db0b0");
#endif

    switch (ctx->pc) {
        case 0x1db108u: goto label_1db108;
        case 0x1db124u: goto label_1db124;
        case 0x1db154u: goto label_1db154;
        case 0x1db180u: goto label_1db180;
        case 0x1db1c8u: goto label_1db1c8;
        case 0x1db1e0u: goto label_1db1e0;
        default: break;
    }

    ctx->pc = 0x1db0b0u;

    // 0x1db0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1db0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1db0b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1db0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1db0b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1db0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1db0bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0c0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1db0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1db0c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1db0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1db0c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1db0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1db0cc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1db0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1db0d0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1db0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1db0d4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1db0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1db0d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1db0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1db0dc: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1DB0DCu;
    {
        const bool branch_taken_0x1db0dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0DCu;
        // 0x1db0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0dc) {
            ctx->pc = 0x1DB210u;
            goto label_1db210;
        }
    }
    ctx->pc = 0x1DB0E4u;
    // 0x1db0e4: 0x8c950018  lw          $s5, 0x18($a0)
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1db0e8: 0x12a00049  beqz        $s5, . + 4 + (0x49 << 2)
    ctx->pc = 0x1DB0E8u;
    {
        const bool branch_taken_0x1db0e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0E8u;
        // 0x1db0ec: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0e8) {
            ctx->pc = 0x1DB210u;
            goto label_1db210;
        }
    }
    ctx->pc = 0x1DB0F0u;
    // 0x1db0f0: 0x8eb60024  lw          $s6, 0x24($s5)
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1db0f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1db0f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0f8: 0x1ac00045  blez        $s6, . + 4 + (0x45 << 2)
    ctx->pc = 0x1DB0F8u;
    {
        const bool branch_taken_0x1db0f8 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1DB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0F8u;
        // 0x1db0fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0f8) {
            ctx->pc = 0x1DB210u;
            goto label_1db210;
        }
    }
    ctx->pc = 0x1DB100u;
    // 0x1db100: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1db104: 0x0  nop
    ctx->pc = 0x1db104u;
    // NOP
label_1db108:
    // 0x1db108: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1db108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1db10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db110: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1db110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db114: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1DB114u;
    {
        const bool branch_taken_0x1db114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db114) {
            ctx->pc = 0x1DB118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB114u;
            // 0x1db118: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB204u;
            goto label_1db204;
        }
    }
    ctx->pc = 0x1DB11Cu;
    // 0x1db11c: 0xc07811a  jal         func_1E0468
    ctx->pc = 0x1DB11Cu;
    SET_GPR_U32(ctx, 31, 0x1DB124u);
    ctx->pc = 0x1DB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB11Cu;
    // 0x1db120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0468u, 0x1DB11Cu, 0x1DB124u)) {
        return;
    }
    ctx->pc = 0x1DB124u;
label_1db124:
    // 0x1db124: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB124u;
    {
        const bool branch_taken_0x1db124 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB124u;
        // 0x1db128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db124) {
            ctx->pc = 0x1DB14Cu;
            goto label_1db14c;
        }
    }
    ctx->pc = 0x1DB12Cu;
    // 0x1db12c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1db130: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB130u;
    {
        const bool branch_taken_0x1db130 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB130u;
        // 0x1db134: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db130) {
            ctx->pc = 0x1DB14Cu;
            goto label_1db14c;
        }
    }
    ctx->pc = 0x1DB138u;
    // 0x1db138: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1db138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1db13c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1db140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db144: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1db144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1db148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db14c:
    // 0x1db14c: 0xc0bbdc0  jal         func_2EF700
    ctx->pc = 0x1DB14Cu;
    SET_GPR_U32(ctx, 31, 0x1DB154u);
    ctx->pc = 0x1DB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB14Cu;
    // 0x1db150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF700u, 0x1DB14Cu, 0x1DB154u)) {
        return;
    }
    ctx->pc = 0x1DB154u;
label_1db154:
    // 0x1db154: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db158: 0x5260002a  beql        $s3, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DB158u;
    {
        const bool branch_taken_0x1db158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db158) {
            ctx->pc = 0x1DB15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB158u;
            // 0x1db15c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB204u;
            goto label_1db204;
        }
    }
    ctx->pc = 0x1DB160u;
    // 0x1db160: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db164: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DB164u;
    {
        const bool branch_taken_0x1db164 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB164u;
        // 0x1db168: 0x178880  sll         $s1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db164) {
            ctx->pc = 0x1DB200u;
            goto label_1db200;
        }
    }
    ctx->pc = 0x1DB16Cu;
    // 0x1db16c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1db16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1db170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db174: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db178: 0xc0a02e0  jal         func_280B80
    ctx->pc = 0x1DB178u;
    SET_GPR_U32(ctx, 31, 0x1DB180u);
    ctx->pc = 0x1DB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB178u;
    // 0x1db17c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B80u, 0x1DB178u, 0x1DB180u)) {
        return;
    }
    ctx->pc = 0x1DB180u;
label_1db180:
    // 0x1db180: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x1db180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1db184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db188: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1db18c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1db18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1db190: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db194: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x1db194u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x1db198: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x1db198u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
    // 0x1db19c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1db19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1db1a0: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x1db1a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x1db1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1a8: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB1A8u;
    {
        const bool branch_taken_0x1db1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db1a8) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB1B0u;
    // 0x1db1b0: 0x10a60009  beq         $a1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB1B0u;
    {
        const bool branch_taken_0x1db1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1db1b0) {
            ctx->pc = 0x1DB1D8u;
            goto label_1db1d8;
        }
    }
    ctx->pc = 0x1DB1B8u;
    // 0x1db1b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DB1B8u;
    {
        const bool branch_taken_0x1db1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1B8u;
        // 0x1db1bc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1b8) {
            ctx->pc = 0x1DB200u;
            goto label_1db200;
        }
    }
    ctx->pc = 0x1DB1C0u;
label_1db1c0:
    // 0x1db1c0: 0xc0780aa  jal         func_1E02A8
    ctx->pc = 0x1DB1C0u;
    SET_GPR_U32(ctx, 31, 0x1DB1C8u);
    ctx->pc = 0x1DB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1C0u;
    // 0x1db1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E02A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E02A8u, 0x1DB1C0u, 0x1DB1C8u)) {
        return;
    }
    ctx->pc = 0x1DB1C8u;
label_1db1c8:
    // 0x1db1c8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1db1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1db1cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db1d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DB1D0u;
    {
        const bool branch_taken_0x1db1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D0u;
        // 0x1db1d4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d0) {
            ctx->pc = 0x1DB1FCu;
            goto label_1db1fc;
        }
    }
    ctx->pc = 0x1DB1D8u;
label_1db1d8:
    // 0x1db1d8: 0xc0780aa  jal         func_1E02A8
    ctx->pc = 0x1DB1D8u;
    SET_GPR_U32(ctx, 31, 0x1DB1E0u);
    ctx->pc = 0x1DB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1D8u;
    // 0x1db1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E02A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E02A8u, 0x1DB1D8u, 0x1DB1E0u)) {
        return;
    }
    ctx->pc = 0x1DB1E0u;
label_1db1e0:
    // 0x1db1e0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1db1e4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db1e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1db1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db1ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1db1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1db1f0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1db1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1db1f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1db1f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1db1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1db1fc:
    // 0x1db1fc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1db1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1db200:
    // 0x1db200: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1db204:
    // 0x1db204: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x1db204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1db208: 0x5440ffbf  bnel        $v0, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1DB208u;
    {
        const bool branch_taken_0x1db208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db208) {
            ctx->pc = 0x1DB20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB208u;
            // 0x1db20c: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db108;
        }
    }
    ctx->pc = 0x1DB210u;
label_1db210:
    // 0x1db210: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1db210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db214: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1db214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db218: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1db218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db21c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1db21cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db220: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db224: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1db224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db228: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1db228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db22c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1db22cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db230: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1db230u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db238: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB238u;
        // 0x1db23c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB240u;
}
