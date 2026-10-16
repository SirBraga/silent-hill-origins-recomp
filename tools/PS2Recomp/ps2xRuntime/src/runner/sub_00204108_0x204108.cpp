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

// Function: sub_00204108
// Address: 0x204108 - 0x2042f0
void sub_00204108_0x204108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204108_0x204108");
#endif

    switch (ctx->pc) {
        case 0x204148u: goto label_204148;
        case 0x204150u: goto label_204150;
        case 0x204188u: goto label_204188;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041f0u: goto label_2041f0;
        case 0x204230u: goto label_204230;
        case 0x204250u: goto label_204250;
        case 0x20429cu: goto label_20429c;
        case 0x2042a4u: goto label_2042a4;
        default: break;
    }

    ctx->pc = 0x204108u;

    // 0x204108: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20410c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x204110: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x204110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x204114: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x204114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204118: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x204118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20411c: 0x3c1e0070  lui         $fp, 0x70
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
    // 0x204120: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x204120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x204124: 0x27d42ce0  addiu       $s4, $fp, 0x2CE0
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 11488));
    // 0x204128: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x204128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x20412c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x204130: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x204130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x204134: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x204134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x204138: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x204138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x20413c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204140: 0xc0810ec  jal         func_2043B0
    ctx->pc = 0x204140u;
    SET_GPR_U32(ctx, 31, 0x204148u);
    ctx->pc = 0x204144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204140u;
    // 0x204144: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2043B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2043B0u, 0x204140u, 0x204148u)) {
        return;
    }
    ctx->pc = 0x204148u;
label_204148:
    // 0x204148: 0x8ee22cf0  lw          $v0, 0x2CF0($s7)
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11504)));
    // 0x20414c: 0x0  nop
    ctx->pc = 0x20414cu;
    // NOP
label_204150:
    // 0x204150: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204150u;
    {
        const bool branch_taken_0x204150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204150u;
        // 0x204154: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204150) {
            ctx->pc = 0x204188u;
            goto label_204188;
        }
    }
    ctx->pc = 0x204158u;
    // 0x204158: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x20415c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204160: 0x24636a30  addiu       $v1, $v1, 0x6A30
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27184));
    // 0x204164: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x204164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x204168: 0xaee22cf0  sw          $v0, 0x2CF0($s7)
    ctx->pc = 0x204168u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 11504), GPR_U32(ctx, 2));
    // 0x20416c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x204170: 0xac602ce0  sw          $zero, 0x2CE0($v1)
    ctx->pc = 0x204170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702CE0u, _value); } while (0);
    // 0x204174: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x204178: 0x244447d0  addiu       $a0, $v0, 0x47D0
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18384));
    // 0x20417c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x20417cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x204180: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x204180u;
    SET_GPR_U32(ctx, 31, 0x204188u);
    ctx->pc = 0x204184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204180u;
    // 0x204184: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x204180u, 0x204188u)) {
        return;
    }
    ctx->pc = 0x204188u;
label_204188:
    // 0x204188: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x20418c: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x20418Cu;
    {
        const bool branch_taken_0x20418c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20418c) {
            ctx->pc = 0x20425Cu;
            goto label_20425c;
        }
    }
    ctx->pc = 0x204194u;
    // 0x204194: 0x24566a48  addiu       $s6, $v0, 0x6A48
    ctx->pc = 0x204194u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x204198: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20419c: 0x0  nop
    ctx->pc = 0x20419cu;
    // NOP
label_2041a0:
    // 0x2041a0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2041a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2041a8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2041A8u;
    {
        const bool branch_taken_0x2041a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A8u;
        // 0x2041ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041a8) {
            ctx->pc = 0x204254u;
            goto label_204254;
        }
    }
    ctx->pc = 0x2041B0u;
    // 0x2041b0: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2041B0u;
    {
        const bool branch_taken_0x2041b0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2041b0) {
            ctx->pc = 0x2041C4u;
            goto label_2041c4;
        }
    }
    ctx->pc = 0x2041B8u;
    // 0x2041b8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2041bc: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2041BCu;
    {
        const bool branch_taken_0x2041bc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2041bc) {
            ctx->pc = 0x204254u;
            goto label_204254;
        }
    }
    ctx->pc = 0x2041C4u;
label_2041c4:
    // 0x2041c4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2041C4u;
    {
        const bool branch_taken_0x2041c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041C4u;
        // 0x2041c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041c4) {
            ctx->pc = 0x204254u;
            goto label_204254;
        }
    }
    ctx->pc = 0x2041CCu;
    // 0x2041cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2041ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2041d0: 0xc080dd6  jal         func_203758
    ctx->pc = 0x2041D0u;
    SET_GPR_U32(ctx, 31, 0x2041D8u);
    ctx->pc = 0x2041D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041D0u;
    // 0x2041d4: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x2041D0u, 0x2041D8u)) {
        return;
    }
    ctx->pc = 0x2041D8u;
label_2041d8:
    // 0x2041d8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2041D8u;
    SET_GPR_U32(ctx, 31, 0x2041E0u);
    ctx->pc = 0x2041DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041D8u;
    // 0x2041dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2041D8u, 0x2041E0u)) {
        return;
    }
    ctx->pc = 0x2041E0u;
label_2041e0:
    // 0x2041e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2041e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2041E4u;
    {
        const bool branch_taken_0x2041e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041E4u;
        // 0x2041e8: 0xae16000c  sw          $s6, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e4) {
            ctx->pc = 0x204248u;
            goto label_204248;
        }
    }
    ctx->pc = 0x2041ECu;
    // 0x2041ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2041f0:
    // 0x2041f0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2041F0u;
    {
        const bool branch_taken_0x2041f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041f0) {
            ctx->pc = 0x2041F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2041F0u;
            // 0x2041f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x2041F8u;
    // 0x2041f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2041fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041FCu;
    {
        const bool branch_taken_0x2041fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041FCu;
        // 0x204200: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041fc) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x204204u;
    // 0x204204: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204204u;
    {
        const bool branch_taken_0x204204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204204u;
        // 0x204208: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204204) {
            ctx->pc = 0x204210u;
            goto label_204210;
        }
    }
    ctx->pc = 0x20420Cu;
label_20420c:
    // 0x20420c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20420cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204210:
    // 0x204210: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204214: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204214u;
    {
        const bool branch_taken_0x204214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204214u;
        // 0x204218: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204214) {
            ctx->pc = 0x204224u;
            goto label_204224;
        }
    }
    ctx->pc = 0x20421Cu;
    // 0x20421c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20421Cu;
    {
        const bool branch_taken_0x20421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20421Cu;
        // 0x204220: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20421c) {
            ctx->pc = 0x204228u;
            goto label_204228;
        }
    }
    ctx->pc = 0x204224u;
label_204224:
    // 0x204224: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_204228:
    // 0x204228: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204228u;
    SET_GPR_U32(ctx, 31, 0x204230u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204228u, 0x204230u)) {
        return;
    }
    ctx->pc = 0x204230u;
label_204230:
    // 0x204230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204238: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x204238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20423c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204240:
    // 0x204240: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204240u;
    {
        const bool branch_taken_0x204240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204240) {
            ctx->pc = 0x204244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204240u;
            // 0x204244: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2041F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2041f0;
        }
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 31, 0x204250u);
    ctx->pc = 0x20424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204248u;
    // 0x20424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204248u, 0x204250u)) {
        return;
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204254:
    // 0x204254: 0x5660ffd2  bnel        $s3, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x204254u;
    {
        const bool branch_taken_0x204254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x204254) {
            ctx->pc = 0x204258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204254u;
            // 0x204258: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2041A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2041a0;
        }
    }
    ctx->pc = 0x20425Cu;
label_20425c:
    // 0x20425c: 0x1600ffbc  bnez        $s0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x20425Cu;
    {
        const bool branch_taken_0x20425c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x204260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20425Cu;
        // 0x204260: 0x8ee22cf0  lw          $v0, 0x2CF0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20425c) {
            ctx->pc = 0x204150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204150;
        }
    }
    ctx->pc = 0x204264u;
    // 0x204264: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x204264u;
    {
        const bool branch_taken_0x204264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204264u;
        // 0x204268: 0x27c22ce0  addiu       $v0, $fp, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 11488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204264) {
            ctx->pc = 0x2042A0u;
            goto label_2042a0;
        }
    }
    ctx->pc = 0x20426Cu;
    // 0x20426c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x204270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204274: 0x27c52ce0  addiu       $a1, $fp, 0x2CE0
    ctx->pc = 0x204274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 11488));
    // 0x204278: 0xaee32cf0  sw          $v1, 0x2CF0($s7)
    ctx->pc = 0x204278u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 11504), GPR_U32(ctx, 3));
    // 0x20427c: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x204280: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x204280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x204284: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x204284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x204288: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x20428c: 0xafc02ce0  sw          $zero, 0x2CE0($fp)
    ctx->pc = 0x20428cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11488), GPR_U32(ctx, 0));
    // 0x204290: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x204290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x204294: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x204294u;
    SET_GPR_U32(ctx, 31, 0x20429Cu);
    ctx->pc = 0x204298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204294u;
    // 0x204298: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x204294u, 0x20429Cu)) {
        return;
    }
    ctx->pc = 0x20429Cu;
label_20429c:
    // 0x20429c: 0x27c22ce0  addiu       $v0, $fp, 0x2CE0
    ctx->pc = 0x20429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 11488));
label_2042a0:
    // 0x2042a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2042a4:
    // 0x2042a4: 0x0  nop
    ctx->pc = 0x2042a4u;
    // NOP
    // 0x2042a8: 0x0  nop
    ctx->pc = 0x2042a8u;
    // NOP
    // 0x2042ac: 0x0  nop
    ctx->pc = 0x2042acu;
    // NOP
    // 0x2042b0: 0x0  nop
    ctx->pc = 0x2042b0u;
    // NOP
    // 0x2042b4: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2042B4u;
    {
        const bool branch_taken_0x2042b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2042b4) {
            ctx->pc = 0x2042B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2042B4u;
            // 0x2042b8: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2042A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2042a4;
        }
    }
    ctx->pc = 0x2042BCu;
    // 0x2042bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2042bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2042c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2042c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2042c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2042c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2042c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2042c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2042cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2042ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2042d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2042d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2042d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2042d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2042d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2042d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2042dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2042dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2042e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2042e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2042e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2042E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E4u;
        // 0x2042e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2042ECu;
    // 0x2042ec: 0x0  nop
    ctx->pc = 0x2042ecu;
    // NOP
    ctx->pc = 0x2042f0u;
}
