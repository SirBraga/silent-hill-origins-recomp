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

// Function: sub_0011B0B8
// Address: 0x11b0b8 - 0x11b280
void sub_0011B0B8_0x11b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B0B8_0x11b0b8");
#endif

    switch (ctx->pc) {
        case 0x11b0b8u: goto label_11b0b8;
        case 0x11b0bcu: goto label_11b0bc;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0c4u: goto label_11b0c4;
        case 0x11b0c8u: goto label_11b0c8;
        case 0x11b0ccu: goto label_11b0cc;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0d4u: goto label_11b0d4;
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b0e0u: goto label_11b0e0;
        case 0x11b0e4u: goto label_11b0e4;
        case 0x11b0e8u: goto label_11b0e8;
        case 0x11b0ecu: goto label_11b0ec;
        case 0x11b0f0u: goto label_11b0f0;
        case 0x11b0f4u: goto label_11b0f4;
        case 0x11b0f8u: goto label_11b0f8;
        case 0x11b0fcu: goto label_11b0fc;
        case 0x11b100u: goto label_11b100;
        case 0x11b104u: goto label_11b104;
        case 0x11b108u: goto label_11b108;
        case 0x11b10cu: goto label_11b10c;
        case 0x11b110u: goto label_11b110;
        case 0x11b114u: goto label_11b114;
        case 0x11b118u: goto label_11b118;
        case 0x11b11cu: goto label_11b11c;
        case 0x11b120u: goto label_11b120;
        case 0x11b124u: goto label_11b124;
        case 0x11b128u: goto label_11b128;
        case 0x11b12cu: goto label_11b12c;
        case 0x11b130u: goto label_11b130;
        case 0x11b134u: goto label_11b134;
        case 0x11b138u: goto label_11b138;
        case 0x11b13cu: goto label_11b13c;
        case 0x11b140u: goto label_11b140;
        case 0x11b144u: goto label_11b144;
        case 0x11b148u: goto label_11b148;
        case 0x11b14cu: goto label_11b14c;
        case 0x11b150u: goto label_11b150;
        case 0x11b154u: goto label_11b154;
        case 0x11b158u: goto label_11b158;
        case 0x11b15cu: goto label_11b15c;
        case 0x11b160u: goto label_11b160;
        case 0x11b164u: goto label_11b164;
        case 0x11b168u: goto label_11b168;
        case 0x11b16cu: goto label_11b16c;
        case 0x11b170u: goto label_11b170;
        case 0x11b174u: goto label_11b174;
        case 0x11b178u: goto label_11b178;
        case 0x11b17cu: goto label_11b17c;
        case 0x11b180u: goto label_11b180;
        case 0x11b184u: goto label_11b184;
        case 0x11b188u: goto label_11b188;
        case 0x11b18cu: goto label_11b18c;
        case 0x11b190u: goto label_11b190;
        case 0x11b194u: goto label_11b194;
        case 0x11b198u: goto label_11b198;
        case 0x11b19cu: goto label_11b19c;
        case 0x11b1a0u: goto label_11b1a0;
        case 0x11b1a4u: goto label_11b1a4;
        case 0x11b1a8u: goto label_11b1a8;
        case 0x11b1acu: goto label_11b1ac;
        case 0x11b1b0u: goto label_11b1b0;
        case 0x11b1b4u: goto label_11b1b4;
        case 0x11b1b8u: goto label_11b1b8;
        case 0x11b1bcu: goto label_11b1bc;
        case 0x11b1c0u: goto label_11b1c0;
        case 0x11b1c4u: goto label_11b1c4;
        case 0x11b1c8u: goto label_11b1c8;
        case 0x11b1ccu: goto label_11b1cc;
        case 0x11b1d0u: goto label_11b1d0;
        case 0x11b1d4u: goto label_11b1d4;
        case 0x11b1d8u: goto label_11b1d8;
        case 0x11b1dcu: goto label_11b1dc;
        case 0x11b1e0u: goto label_11b1e0;
        case 0x11b1e4u: goto label_11b1e4;
        case 0x11b1e8u: goto label_11b1e8;
        case 0x11b1ecu: goto label_11b1ec;
        case 0x11b1f0u: goto label_11b1f0;
        case 0x11b1f4u: goto label_11b1f4;
        case 0x11b1f8u: goto label_11b1f8;
        case 0x11b1fcu: goto label_11b1fc;
        case 0x11b200u: goto label_11b200;
        case 0x11b204u: goto label_11b204;
        case 0x11b208u: goto label_11b208;
        case 0x11b20cu: goto label_11b20c;
        case 0x11b210u: goto label_11b210;
        case 0x11b214u: goto label_11b214;
        case 0x11b218u: goto label_11b218;
        case 0x11b21cu: goto label_11b21c;
        case 0x11b220u: goto label_11b220;
        case 0x11b224u: goto label_11b224;
        case 0x11b228u: goto label_11b228;
        case 0x11b22cu: goto label_11b22c;
        case 0x11b230u: goto label_11b230;
        case 0x11b234u: goto label_11b234;
        case 0x11b238u: goto label_11b238;
        case 0x11b23cu: goto label_11b23c;
        case 0x11b240u: goto label_11b240;
        case 0x11b244u: goto label_11b244;
        case 0x11b248u: goto label_11b248;
        case 0x11b24cu: goto label_11b24c;
        case 0x11b250u: goto label_11b250;
        case 0x11b254u: goto label_11b254;
        case 0x11b258u: goto label_11b258;
        case 0x11b25cu: goto label_11b25c;
        case 0x11b260u: goto label_11b260;
        case 0x11b264u: goto label_11b264;
        case 0x11b268u: goto label_11b268;
        case 0x11b26cu: goto label_11b26c;
        case 0x11b270u: goto label_11b270;
        case 0x11b274u: goto label_11b274;
        case 0x11b278u: goto label_11b278;
        case 0x11b27cu: goto label_11b27c;
        default: break;
    }

    ctx->pc = 0x11b0b8u;

label_11b0b8:
    // 0x11b0b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11b0bc:
    // 0x11b0bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11b0c0:
    // 0x11b0c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11b0c4:
    // 0x11b0c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b0c8:
    // 0x11b0c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11b0cc:
    // 0x11b0cc: 0xc04469a  jal         func_111A68
label_11b0d0:
    if (ctx->pc == 0x11B0D0u) {
        ctx->pc = 0x11B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0CCu;
        // 0x11b0d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B0D4u;
        goto label_11b0d4;
    }
    ctx->pc = 0x11B0CCu;
    SET_GPR_U32(ctx, 31, 0x11B0D4u);
    ctx->pc = 0x11B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0CCu;
    // 0x11b0d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111A68u, 0x11B0CCu, 0x11B0D4u)) {
        return;
    }
    ctx->pc = 0x11B0D4u;
label_11b0d4:
    // 0x11b0d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11b0d8:
    // 0x11b0d8: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_11b0dc:
    // 0x11b0dc: 0x54620063  bnel        $v1, $v0, . + 4 + (0x63 << 2)
label_11b0e0:
    if (ctx->pc == 0x11B0E0u) {
        ctx->pc = 0x11B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0DCu;
        // 0x11b0e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B0E4u;
        goto label_11b0e4;
    }
    ctx->pc = 0x11B0DCu;
    {
        const bool branch_taken_0x11b0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b0dc) {
            ctx->pc = 0x11B0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B0DCu;
            // 0x11b0e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B26Cu;
            goto label_11b26c;
        }
    }
    ctx->pc = 0x11B0E4u;
label_11b0e4:
    // 0x11b0e4: 0xc04683a  jal         func_11A0E8
label_11b0e8:
    if (ctx->pc == 0x11B0E8u) {
        ctx->pc = 0x11B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E4u;
        // 0x11b0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B0ECu;
        goto label_11b0ec;
    }
    ctx->pc = 0x11B0E4u;
    SET_GPR_U32(ctx, 31, 0x11B0ECu);
    ctx->pc = 0x11B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0E4u;
    // 0x11b0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11A0E8u, 0x11B0E4u, 0x11B0ECu)) {
        return;
    }
    ctx->pc = 0x11B0ECu;
label_11b0ec:
    // 0x11b0ec: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x11b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_11b0f0:
    // 0x11b0f0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11b0f4:
    // 0x11b0f4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x11b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_11b0f8:
    // 0x11b0f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11b0fc:
    // 0x11b0fc: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_11b100:
    if (ctx->pc == 0x11B100u) {
        ctx->pc = 0x11B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0FCu;
        // 0x11b100: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B104u;
        goto label_11b104;
    }
    ctx->pc = 0x11B0FCu;
    {
        const bool branch_taken_0x11b0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0FCu;
        // 0x11b100: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0fc) {
            ctx->pc = 0x11B118u;
            goto label_11b118;
        }
    }
    ctx->pc = 0x11B104u;
label_11b104:
    // 0x11b104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11b108:
    // 0x11b108: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_11b10c:
    if (ctx->pc == 0x11B10Cu) {
        ctx->pc = 0x11B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B108u;
        // 0x11b10c: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B110u;
        goto label_11b110;
    }
    ctx->pc = 0x11B108u;
    {
        const bool branch_taken_0x11b108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b108) {
            ctx->pc = 0x11B10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B108u;
            // 0x11b10c: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B11Cu;
            goto label_11b11c;
        }
    }
    ctx->pc = 0x11B110u;
label_11b110:
    // 0x11b110: 0xc07fd18  jal         func_1FF460
label_11b114:
    if (ctx->pc == 0x11B114u) {
        ctx->pc = 0x11B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B110u;
        // 0x11b114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B118u;
        goto label_11b118;
    }
    ctx->pc = 0x11B110u;
    SET_GPR_U32(ctx, 31, 0x11B118u);
    ctx->pc = 0x11B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B110u;
    // 0x11b114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11B110u, 0x11B118u)) {
        return;
    }
    ctx->pc = 0x11B118u;
label_11b118:
    // 0x11b118: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_11b11c:
    // 0x11b11c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_11b120:
    if (ctx->pc == 0x11B120u) {
        ctx->pc = 0x11B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B11Cu;
        // 0x11b120: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B124u;
        goto label_11b124;
    }
    ctx->pc = 0x11B11Cu;
    {
        const bool branch_taken_0x11b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B11Cu;
        // 0x11b120: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b11c) {
            ctx->pc = 0x11B148u;
            goto label_11b148;
        }
    }
    ctx->pc = 0x11B124u;
label_11b124:
    // 0x11b124: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x11b124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11b128:
    // 0x11b128: 0x8c434548  lw          $v1, 0x4548($v0)
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17736)));
label_11b12c:
    // 0x11b12c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b130:
    // 0x11b130: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11b130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11b134:
    // 0x11b134: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x11b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_11b138:
    // 0x11b138: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x11b138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_11b13c:
    // 0x11b13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b140:
    // 0x11b140: 0xc07fc26  jal         func_1FF098
label_11b144:
    if (ctx->pc == 0x11B144u) {
        ctx->pc = 0x11B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B140u;
        // 0x11b144: 0xace80004  sw          $t0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B148u;
        goto label_11b148;
    }
    ctx->pc = 0x11B140u;
    SET_GPR_U32(ctx, 31, 0x11B148u);
    ctx->pc = 0x11B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B140u;
    // 0x11b144: 0xace80004  sw          $t0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x11B140u, 0x11B148u)) {
        return;
    }
    ctx->pc = 0x11B148u;
label_11b148:
    // 0x11b148: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11b14c:
    // 0x11b14c: 0xc046ce0  jal         func_11B380
label_11b150:
    if (ctx->pc == 0x11B150u) {
        ctx->pc = 0x11B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B14Cu;
        // 0x11b150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B154u;
        goto label_11b154;
    }
    ctx->pc = 0x11B14Cu;
    SET_GPR_U32(ctx, 31, 0x11B154u);
    ctx->pc = 0x11B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B14Cu;
    // 0x11b150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11B380u, 0x11B14Cu, 0x11B154u)) {
        return;
    }
    ctx->pc = 0x11B154u;
label_11b154:
    // 0x11b154: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_11b158:
    // 0x11b158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11b15c:
    if (ctx->pc == 0x11B15Cu) {
        ctx->pc = 0x11B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B158u;
        // 0x11b15c: 0x8e2200a8  lw          $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B160u;
        goto label_11b160;
    }
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B158u;
        // 0x11b15c: 0x8e2200a8  lw          $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B180u;
            goto label_11b180;
        }
    }
    ctx->pc = 0x11B160u;
label_11b160:
    // 0x11b160: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x11b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_11b164:
    // 0x11b164: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x11b164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_11b168:
    // 0x11b168: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11b16c:
    // 0x11b16c: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x11b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_11b170:
    // 0x11b170: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_11b174:
    // 0x11b174: 0xc0f809  jalr        $a2
label_11b178:
    if (ctx->pc == 0x11B178u) {
        ctx->pc = 0x11B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B174u;
        // 0x11b178: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B17Cu;
        goto label_11b17c;
    }
    ctx->pc = 0x11B174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11B17Cu);
        ctx->pc = 0x11B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B174u;
        // 0x11b178: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B174u, 0x11B17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B17Cu;
label_11b17c:
    // 0x11b17c: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_11b180:
    // 0x11b180: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11b184:
    // 0x11b184: 0x68620047  ldl         $v0, 0x47($v1)
    ctx->pc = 0x11b184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11b188:
    // 0x11b188: 0x6c620040  ldr         $v0, 0x40($v1)
    ctx->pc = 0x11b188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11b18c:
    // 0x11b18c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_11b190:
    // 0x11b190: 0xb22200ff  sdl         $v0, 0xFF($s1)
    ctx->pc = 0x11b190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b194:
    // 0x11b194: 0xb62200f8  sdr         $v0, 0xF8($s1)
    ctx->pc = 0x11b194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b198:
    // 0x11b198: 0xae240100  sw          $a0, 0x100($s1)
    ctx->pc = 0x11b198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 4));
label_11b19c:
    // 0x11b19c: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x11b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_11b1a0:
    // 0x11b1a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x11b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11b1a4:
    // 0x11b1a4: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x11b1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11b1a8:
    // 0x11b1a8: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x11b1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11b1ac:
    // 0x11b1ac: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_11b1b0:
    // 0x11b1b0: 0xb222010b  sdl         $v0, 0x10B($s1)
    ctx->pc = 0x11b1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b1b4:
    // 0x11b1b4: 0xb6220104  sdr         $v0, 0x104($s1)
    ctx->pc = 0x11b1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11b1b8:
    // 0x11b1b8: 0xae24010c  sw          $a0, 0x10C($s1)
    ctx->pc = 0x11b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 4));
label_11b1bc:
    // 0x11b1bc: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x11b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_11b1c0:
    // 0x11b1c0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_11b1c4:
    if (ctx->pc == 0x11B1C4u) {
        ctx->pc = 0x11B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1C0u;
        // 0x11b1c4: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B1C8u;
        goto label_11b1c8;
    }
    ctx->pc = 0x11B1C0u;
    {
        const bool branch_taken_0x11b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b1c0) {
            ctx->pc = 0x11B1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1C0u;
            // 0x11b1c4: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B1F8u;
            goto label_11b1f8;
        }
    }
    ctx->pc = 0x11B1C8u;
label_11b1c8:
    // 0x11b1c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_11b1cc:
    // 0x11b1cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_11b1d0:
    // 0x11b1d0: 0x8c6546c8  lw          $a1, 0x46C8($v1)
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18120)));
label_11b1d4:
    // 0x11b1d4: 0x24428324  addiu       $v0, $v0, -0x7CDC
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935332));
label_11b1d8:
    // 0x11b1d8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x11b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11b1dc:
    // 0x11b1dc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_11b1e0:
    // 0x11b1e0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x11b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_11b1e4:
    // 0x11b1e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b1e8:
    // 0x11b1e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11b1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b1ec:
    // 0x11b1ec: 0xc07fc26  jal         func_1FF098
label_11b1f0:
    if (ctx->pc == 0x11B1F0u) {
        ctx->pc = 0x11B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1ECu;
        // 0x11b1f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B1F4u;
        goto label_11b1f4;
    }
    ctx->pc = 0x11B1ECu;
    SET_GPR_U32(ctx, 31, 0x11B1F4u);
    ctx->pc = 0x11B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1ECu;
    // 0x11b1f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x11B1ECu, 0x11B1F4u)) {
        return;
    }
    ctx->pc = 0x11B1F4u;
label_11b1f4:
    // 0x11b1f4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x11b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_11b1f8:
    // 0x11b1f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_11b1fc:
    if (ctx->pc == 0x11B1FCu) {
        ctx->pc = 0x11B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F8u;
        // 0x11b1fc: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B200u;
        goto label_11b200;
    }
    ctx->pc = 0x11B1F8u;
    {
        const bool branch_taken_0x11b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b1f8) {
            ctx->pc = 0x11B1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1F8u;
            // 0x11b1fc: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B230u;
            goto label_11b230;
        }
    }
    ctx->pc = 0x11B200u;
label_11b200:
    // 0x11b200: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_11b204:
    // 0x11b204: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_11b208:
    // 0x11b208: 0x8c6546c0  lw          $a1, 0x46C0($v1)
    ctx->pc = 0x11b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18112)));
label_11b20c:
    // 0x11b20c: 0x24428324  addiu       $v0, $v0, -0x7CDC
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935332));
label_11b210:
    // 0x11b210: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11b214:
    // 0x11b214: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_11b218:
    // 0x11b218: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x11b218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_11b21c:
    // 0x11b21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b220:
    // 0x11b220: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11b220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b224:
    // 0x11b224: 0xc07fc26  jal         func_1FF098
label_11b228:
    if (ctx->pc == 0x11B228u) {
        ctx->pc = 0x11B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B224u;
        // 0x11b228: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B22Cu;
        goto label_11b22c;
    }
    ctx->pc = 0x11B224u;
    SET_GPR_U32(ctx, 31, 0x11B22Cu);
    ctx->pc = 0x11B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B224u;
    // 0x11b228: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x11B224u, 0x11B22Cu)) {
        return;
    }
    ctx->pc = 0x11B22Cu;
label_11b22c:
    // 0x11b22c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_11b230:
    // 0x11b230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11b234:
    if (ctx->pc == 0x11B234u) {
        ctx->pc = 0x11B238u;
        goto label_11b238;
    }
    ctx->pc = 0x11B230u;
    {
        const bool branch_taken_0x11b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b230) {
            ctx->pc = 0x11B24Cu;
            goto label_11b24c;
        }
    }
    ctx->pc = 0x11B238u;
label_11b238:
    // 0x11b238: 0xc62d0118  lwc1        $f13, 0x118($s1)
    ctx->pc = 0x11b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11b23c:
    // 0x11b23c: 0xc075d62  jal         func_1D7588
label_11b240:
    if (ctx->pc == 0x11B240u) {
        ctx->pc = 0x11B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B23Cu;
        // 0x11b240: 0xc62c0114  lwc1        $f12, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B244u;
        goto label_11b244;
    }
    ctx->pc = 0x11B23Cu;
    SET_GPR_U32(ctx, 31, 0x11B244u);
    ctx->pc = 0x11B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B23Cu;
    // 0x11b240: 0xc62c0114  lwc1        $f12, 0x114($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x11B23Cu, 0x11B244u)) {
        return;
    }
    ctx->pc = 0x11B244u;
label_11b244:
    // 0x11b244: 0x10000009  b           . + 4 + (0x9 << 2)
label_11b248:
    if (ctx->pc == 0x11B248u) {
        ctx->pc = 0x11B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B244u;
        // 0x11b248: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B24Cu;
        goto label_11b24c;
    }
    ctx->pc = 0x11B244u;
    {
        const bool branch_taken_0x11b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B244u;
        // 0x11b248: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b244) {
            ctx->pc = 0x11B26Cu;
            goto label_11b26c;
        }
    }
    ctx->pc = 0x11B24Cu;
label_11b24c:
    // 0x11b24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11b250:
    // 0x11b250: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11b250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11b254:
    // 0x11b254: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x11b254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_11b258:
    // 0x11b258: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_11b25c:
    // 0x11b25c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11b25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_11b260:
    // 0x11b260: 0xc075d62  jal         func_1D7588
label_11b264:
    if (ctx->pc == 0x11B264u) {
        ctx->pc = 0x11B268u;
        goto label_11b268;
    }
    ctx->pc = 0x11B260u;
    SET_GPR_U32(ctx, 31, 0x11B268u);
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x11B260u, 0x11B268u)) {
        return;
    }
    ctx->pc = 0x11B268u;
label_11b268:
    // 0x11b268: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11b268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11b26c:
    // 0x11b26c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11b26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b270:
    // 0x11b270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11b274:
    // 0x11b274: 0x3e00008  jr          $ra
label_11b278:
    if (ctx->pc == 0x11B278u) {
        ctx->pc = 0x11B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B274u;
        // 0x11b278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B27Cu;
        goto label_11b27c;
    }
    ctx->pc = 0x11B274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B274u;
        // 0x11b278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B27Cu;
label_11b27c:
    // 0x11b27c: 0x0  nop
    ctx->pc = 0x11b27cu;
    // NOP
    ctx->pc = 0x11b280u;
}
