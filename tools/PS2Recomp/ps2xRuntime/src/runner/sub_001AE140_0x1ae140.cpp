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

// Function: sub_001AE140
// Address: 0x1ae140 - 0x1ae200
void sub_001AE140_0x1ae140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE140_0x1ae140");
#endif

    switch (ctx->pc) {
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        default: break;
    }

    ctx->pc = 0x1ae140u;

label_1ae140:
    // 0x1ae140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae144:
    // 0x1ae144: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ae148:
    // 0x1ae148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae14c:
    // 0x1ae14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae150:
    // 0x1ae150: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ae154:
    // 0x1ae154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ae158:
    // 0x1ae158: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae15c:
    // 0x1ae15c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_1ae160:
    if (ctx->pc == 0x1AE160u) {
        ctx->pc = 0x1AE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE15Cu;
        // 0x1ae160: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE164u;
        goto label_1ae164;
    }
    ctx->pc = 0x1AE15Cu;
    {
        const bool branch_taken_0x1ae15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae15c) {
            ctx->pc = 0x1AE160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE15Cu;
            // 0x1ae160: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE1F4u;
            goto label_1ae1f4;
        }
    }
    ctx->pc = 0x1AE164u;
label_1ae164:
    // 0x1ae164: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
label_1ae168:
    if (ctx->pc == 0x1AE168u) {
        ctx->pc = 0x1AE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE164u;
        // 0x1ae168: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE16Cu;
        goto label_1ae16c;
    }
    ctx->pc = 0x1AE164u;
    {
        const bool branch_taken_0x1ae164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae164) {
            ctx->pc = 0x1AE168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE164u;
            // 0x1ae168: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE1CCu;
            goto label_1ae1cc;
        }
    }
    ctx->pc = 0x1AE16Cu;
label_1ae16c:
    // 0x1ae16c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ae170:
    // 0x1ae170: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ae170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1ae174:
    // 0x1ae174: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1ae178:
    if (ctx->pc == 0x1AE178u) {
        ctx->pc = 0x1AE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE174u;
        // 0x1ae178: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE17Cu;
        goto label_1ae17c;
    }
    ctx->pc = 0x1AE174u;
    {
        const bool branch_taken_0x1ae174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE174u;
        // 0x1ae178: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae174) {
            ctx->pc = 0x1AE1F0u;
            goto label_1ae1f0;
        }
    }
    ctx->pc = 0x1AE17Cu;
label_1ae17c:
    // 0x1ae17c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ae180:
    // 0x1ae180: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae184:
    // 0x1ae184: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1ae184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae188:
    // 0x1ae188: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1ae18c:
    // 0x1ae18c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ae190:
    // 0x1ae190: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1ae194:
    if (ctx->pc == 0x1AE194u) {
        ctx->pc = 0x1AE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE190u;
        // 0x1ae194: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE198u;
        goto label_1ae198;
    }
    ctx->pc = 0x1AE190u;
    {
        const bool branch_taken_0x1ae190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE190u;
        // 0x1ae194: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae190) {
            ctx->pc = 0x1AE1F0u;
            goto label_1ae1f0;
        }
    }
    ctx->pc = 0x1AE198u;
label_1ae198:
    // 0x1ae198: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ae19c:
    // 0x1ae19c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1ae19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1ae1a0:
    // 0x1ae1a0: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_1ae1a4:
    if (ctx->pc == 0x1AE1A4u) {
        ctx->pc = 0x1AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1A0u;
        // 0x1ae1a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1A8u;
        goto label_1ae1a8;
    }
    ctx->pc = 0x1AE1A0u;
    {
        const bool branch_taken_0x1ae1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1A0u;
        // 0x1ae1a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1a0) {
            ctx->pc = 0x1AE1F4u;
            goto label_1ae1f4;
        }
    }
    ctx->pc = 0x1AE1A8u;
label_1ae1a8:
    // 0x1ae1a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae1ac:
    // 0x1ae1ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1ae1b0:
    if (ctx->pc == 0x1AE1B0u) {
        ctx->pc = 0x1AE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1ACu;
        // 0x1ae1b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1B4u;
        goto label_1ae1b4;
    }
    ctx->pc = 0x1AE1ACu;
    {
        const bool branch_taken_0x1ae1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1ACu;
        // 0x1ae1b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1ac) {
            ctx->pc = 0x1AE1F8u;
            goto label_1ae1f8;
        }
    }
    ctx->pc = 0x1AE1B4u;
label_1ae1b4:
    // 0x1ae1b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ae1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1ae1b8:
    // 0x1ae1b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1bc:
    // 0x1ae1bc: 0xc07fd18  jal         func_1FF460
label_1ae1c0:
    if (ctx->pc == 0x1AE1C0u) {
        ctx->pc = 0x1AE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1BCu;
        // 0x1ae1c0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1C4u;
        goto label_1ae1c4;
    }
    ctx->pc = 0x1AE1BCu;
    SET_GPR_U32(ctx, 31, 0x1AE1C4u);
    ctx->pc = 0x1AE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1BCu;
    // 0x1ae1c0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AE1BCu, 0x1AE1C4u)) {
        return;
    }
    ctx->pc = 0x1AE1C4u;
label_1ae1c4:
    // 0x1ae1c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ae1c8:
    if (ctx->pc == 0x1AE1C8u) {
        ctx->pc = 0x1AE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1C4u;
        // 0x1ae1c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1CCu;
        goto label_1ae1cc;
    }
    ctx->pc = 0x1AE1C4u;
    {
        const bool branch_taken_0x1ae1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1C4u;
        // 0x1ae1c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1c4) {
            ctx->pc = 0x1AE1F4u;
            goto label_1ae1f4;
        }
    }
    ctx->pc = 0x1AE1CCu;
label_1ae1cc:
    // 0x1ae1cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ae1d0:
    if (ctx->pc == 0x1AE1D0u) {
        ctx->pc = 0x1AE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1CCu;
        // 0x1ae1d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1D4u;
        goto label_1ae1d4;
    }
    ctx->pc = 0x1AE1CCu;
    {
        const bool branch_taken_0x1ae1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1CCu;
        // 0x1ae1d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1cc) {
            ctx->pc = 0x1AE1ECu;
            goto label_1ae1ec;
        }
    }
    ctx->pc = 0x1AE1D4u;
label_1ae1d4:
    // 0x1ae1d4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ae1d8:
    // 0x1ae1d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae1dc:
    if (ctx->pc == 0x1AE1DCu) {
        ctx->pc = 0x1AE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1D8u;
        // 0x1ae1dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1E0u;
        goto label_1ae1e0;
    }
    ctx->pc = 0x1AE1D8u;
    {
        const bool branch_taken_0x1ae1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1D8u;
        // 0x1ae1dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1d8) {
            ctx->pc = 0x1AE1ECu;
            goto label_1ae1ec;
        }
    }
    ctx->pc = 0x1AE1E0u;
label_1ae1e0:
    // 0x1ae1e0: 0x60f809  jalr        $v1
label_1ae1e4:
    if (ctx->pc == 0x1AE1E4u) {
        ctx->pc = 0x1AE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1E0u;
        // 0x1ae1e4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1E8u;
        goto label_1ae1e8;
    }
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AE1E8u);
        ctx->pc = 0x1AE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1E0u;
        // 0x1ae1e4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1E0u, 0x1AE1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE1E8u;
label_1ae1e8:
    // 0x1ae1e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae1ec:
    // 0x1ae1ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ae1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ae1f0:
    // 0x1ae1f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae1f4:
    // 0x1ae1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae1f8:
    // 0x1ae1f8: 0x3e00008  jr          $ra
label_1ae1fc:
    if (ctx->pc == 0x1AE1FCu) {
        ctx->pc = 0x1AE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1F8u;
        // 0x1ae1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE200u;
        goto label_fallthrough_0x1ae1f8;
    }
    ctx->pc = 0x1AE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1F8u;
        // 0x1ae1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ae1f8:
    ctx->pc = 0x1AE200u;
}
