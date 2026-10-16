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

// Function: sub_00280150
// Address: 0x280150 - 0x2805c0
void sub_00280150_0x280150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280150_0x280150");
#endif

    switch (ctx->pc) {
        case 0x2801acu: goto label_2801ac;
        case 0x2801b8u: goto label_2801b8;
        case 0x2801c4u: goto label_2801c4;
        case 0x2801ecu: goto label_2801ec;
        case 0x2801f8u: goto label_2801f8;
        case 0x280204u: goto label_280204;
        case 0x280244u: goto label_280244;
        case 0x280250u: goto label_280250;
        case 0x280280u: goto label_280280;
        case 0x280310u: goto label_280310;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803acu: goto label_2803ac;
        case 0x2803b8u: goto label_2803b8;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803d8u: goto label_2803d8;
        case 0x2803f4u: goto label_2803f4;
        case 0x280434u: goto label_280434;
        case 0x280444u: goto label_280444;
        case 0x28044cu: goto label_28044c;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804c0u: goto label_2804c0;
        case 0x2804d0u: goto label_2804d0;
        case 0x2804f8u: goto label_2804f8;
        case 0x280500u: goto label_280500;
        case 0x280588u: goto label_280588;
        default: break;
    }

    ctx->pc = 0x280150u;

    // 0x280150: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x280150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x280154: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x280154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x280158: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x280158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x28015c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x28015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x280160: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x280160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x280164: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x280164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280168: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x280168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x28016c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28016cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280170: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x280170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x280174: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x280174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x280178: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x280178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x28017c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x28017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x280180: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x280180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x280184: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x280184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x280188: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x280188u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28018c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x28018cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x280190: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x280190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x280194: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x280194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x280198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28019c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x28019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2801a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2801a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801a4: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x2801A4u;
    SET_GPR_U32(ctx, 31, 0x2801ACu);
    ctx->pc = 0x2801A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801A4u;
    // 0x2801a8: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x2801A4u, 0x2801ACu)) {
        return;
    }
    ctx->pc = 0x2801ACu;
label_2801ac:
    // 0x2801ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2801acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801b0: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x2801B0u;
    SET_GPR_U32(ctx, 31, 0x2801B8u);
    ctx->pc = 0x2801B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801B0u;
    // 0x2801b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x2801B0u, 0x2801B8u)) {
        return;
    }
    ctx->pc = 0x2801B8u;
label_2801b8:
    // 0x2801b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801bc: 0xc08a04c  jal         func_228130
    ctx->pc = 0x2801BCu;
    SET_GPR_U32(ctx, 31, 0x2801C4u);
    ctx->pc = 0x2801C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801BCu;
    // 0x2801c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228130u, 0x2801BCu, 0x2801C4u)) {
        return;
    }
    ctx->pc = 0x2801C4u;
label_2801c4:
    // 0x2801c4: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x2801C4u;
    {
        const bool branch_taken_0x2801c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801C4u;
        // 0x2801c8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801c4) {
            ctx->pc = 0x28022Cu;
            goto label_28022c;
        }
    }
    ctx->pc = 0x2801CCu;
    // 0x2801cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2801d0: 0x26fe0010  addiu       $fp, $s7, 0x10
    ctx->pc = 0x2801d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2801d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2801d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2801d8: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x2801d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2801dc: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2801dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2801e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2801e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801e4: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x2801E4u;
    SET_GPR_U32(ctx, 31, 0x2801ECu);
    ctx->pc = 0x2801E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801E4u;
    // 0x2801e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x2801E4u, 0x2801ECu)) {
        return;
    }
    ctx->pc = 0x2801ECu;
label_2801ec:
    // 0x2801ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2801ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801f0: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x2801F0u;
    SET_GPR_U32(ctx, 31, 0x2801F8u);
    ctx->pc = 0x2801F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801F0u;
    // 0x2801f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x2801F0u, 0x2801F8u)) {
        return;
    }
    ctx->pc = 0x2801F8u;
label_2801f8:
    // 0x2801f8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2801fc: 0xc08a04c  jal         func_228130
    ctx->pc = 0x2801FCu;
    SET_GPR_U32(ctx, 31, 0x280204u);
    ctx->pc = 0x280200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801FCu;
    // 0x280200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228130u, 0x2801FCu, 0x280204u)) {
        return;
    }
    ctx->pc = 0x280204u;
label_280204:
    // 0x280204: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x280204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280208: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x280208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x28020c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x28020cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x280210: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x280210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280214: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x280214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x280218: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x280218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x28021c: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x28021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x280220: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x280220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x280224: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x280224u;
    {
        const bool branch_taken_0x280224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280224u;
        // 0x280228: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280224) {
            ctx->pc = 0x28037Cu;
            goto label_28037c;
        }
    }
    ctx->pc = 0x28022Cu;
label_28022c:
    // 0x28022c: 0x8ed20010  lw          $s2, 0x10($s6)
    ctx->pc = 0x28022cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x280230: 0x8ed0000c  lw          $s0, 0xC($s6)
    ctx->pc = 0x280230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x280234: 0x26fe0010  addiu       $fp, $s7, 0x10
    ctx->pc = 0x280234u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x280238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28023c: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x28023Cu;
    SET_GPR_U32(ctx, 31, 0x280244u);
    ctx->pc = 0x280240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28023Cu;
    // 0x280240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x28023Cu, 0x280244u)) {
        return;
    }
    ctx->pc = 0x280244u;
label_280244:
    // 0x280244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280248: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x280248u;
    SET_GPR_U32(ctx, 31, 0x280250u);
    ctx->pc = 0x28024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280248u;
    // 0x28024c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x280248u, 0x280250u)) {
        return;
    }
    ctx->pc = 0x280250u;
label_280250:
    // 0x280250: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x280250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280258: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x280258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x28025c: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x28025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x280260: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x280260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x280264: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x280264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280268: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x280268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x28026c: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x28026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x280270: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x280270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x280274: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x280274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x280278: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x280278u;
    {
        const bool branch_taken_0x280278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280278u;
        // 0x28027c: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280278) {
            ctx->pc = 0x28037Cu;
            goto label_28037c;
        }
    }
    ctx->pc = 0x280280u;
label_280280:
    // 0x280280: 0x1a00003a  blez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x280280u;
    {
        const bool branch_taken_0x280280 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x280284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280280u;
        // 0x280284: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280280) {
            ctx->pc = 0x28036Cu;
            goto label_28036c;
        }
    }
    ctx->pc = 0x280288u;
    // 0x280288: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x280288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x28028c: 0x101023  negu        $v0, $s0
    ctx->pc = 0x28028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x280290: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x280290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x280294: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x280294u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x280298: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x280298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x28029c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802a0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2802A0u;
    {
        const bool branch_taken_0x2802a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802A0u;
        // 0x2802a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802a0) {
            ctx->pc = 0x280310u;
            goto label_280310;
        }
    }
    ctx->pc = 0x2802A8u;
    // 0x2802a8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2802a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2802ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2802ACu;
    {
        const bool branch_taken_0x2802ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802ACu;
        // 0x2802b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802ac) {
            ctx->pc = 0x2802ECu;
            goto label_2802ec;
        }
    }
    ctx->pc = 0x2802B4u;
    // 0x2802b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2802B4u;
    {
        const bool branch_taken_0x2802b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802B4u;
        // 0x2802b8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802b4) {
            ctx->pc = 0x2802D4u;
            goto label_2802d4;
        }
    }
    ctx->pc = 0x2802BCu;
    // 0x2802bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2802bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2802c0: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2802c4: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x2802c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2802c8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2802c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2802cc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2802ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2802d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2802d4:
    // 0x2802d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2802d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2802d8: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x2802d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2802dc: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2802dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2802e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2802e4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2802e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2802e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2802e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2802ec:
    // 0x2802ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2802ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2802f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2802f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2802f4: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x2802f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2802f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2802f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2802fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2802fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280300: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x280300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x280304: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x280304u;
    {
        const bool branch_taken_0x280304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280304u;
        // 0x280308: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280304) {
            ctx->pc = 0x28036Cu;
            goto label_28036c;
        }
    }
    ctx->pc = 0x28030Cu;
    // 0x28030c: 0x0  nop
    ctx->pc = 0x28030cu;
    // NOP
label_280310:
    // 0x280310: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x280314: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x280314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x280318: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x280318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28031c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x280320: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280324: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x280324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x280328: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28032c: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x28032cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280330: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x280334: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280338: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x280338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x28033c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x28033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x280340: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x280340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280344: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x280344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x280348: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28034c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x28034cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x280350: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x280350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x280354: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x280354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280358: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x280358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28035c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280360: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x280360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x280364: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x280364u;
    {
        const bool branch_taken_0x280364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x280368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280364u;
        // 0x280368: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280364) {
            ctx->pc = 0x280310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280310;
        }
    }
    ctx->pc = 0x28036Cu;
label_28036c:
    // 0x28036c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280370: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x280370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x280374: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x280374u;
    {
        const bool branch_taken_0x280374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280374) {
            ctx->pc = 0x280280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280280;
        }
    }
    ctx->pc = 0x28037Cu;
label_28037c:
    // 0x28037c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x28037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x280380: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280380u;
    {
        const bool branch_taken_0x280380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x280384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280380u;
        // 0x280384: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280380) {
            ctx->pc = 0x280394u;
            goto label_280394;
        }
    }
    ctx->pc = 0x280388u;
    // 0x280388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28038c: 0x1243000d  beq         $s2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28038Cu;
    {
        const bool branch_taken_0x28038c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x28038c) {
            ctx->pc = 0x2803C4u;
            goto label_2803c4;
        }
    }
    ctx->pc = 0x280394u;
label_280394:
    // 0x280394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280398: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x280398u;
    SET_GPR_U32(ctx, 31, 0x2803A0u);
    ctx->pc = 0x28039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280398u;
    // 0x28039c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x280398u, 0x2803A0u)) {
        return;
    }
    ctx->pc = 0x2803A0u;
label_2803a0:
    // 0x2803a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2803a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803a4: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x2803A4u;
    SET_GPR_U32(ctx, 31, 0x2803ACu);
    ctx->pc = 0x2803A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803A4u;
    // 0x2803a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x2803A4u, 0x2803ACu)) {
        return;
    }
    ctx->pc = 0x2803ACu;
label_2803ac:
    // 0x2803ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2803acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803b0: 0xc08a3d8  jal         func_228F60
    ctx->pc = 0x2803B0u;
    SET_GPR_U32(ctx, 31, 0x2803B8u);
    ctx->pc = 0x2803B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803B0u;
    // 0x2803b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228F60u, 0x2803B0u, 0x2803B8u)) {
        return;
    }
    ctx->pc = 0x2803B8u;
label_2803b8:
    // 0x2803b8: 0xc089b96  jal         func_226E58
    ctx->pc = 0x2803B8u;
    SET_GPR_U32(ctx, 31, 0x2803C0u);
    ctx->pc = 0x2803BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803B8u;
    // 0x2803bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x2803B8u, 0x2803C0u)) {
        return;
    }
    ctx->pc = 0x2803C0u;
label_2803c0:
    // 0x2803c0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2803c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2803c4:
    // 0x2803c4: 0xc089c0c  jal         func_227030
    ctx->pc = 0x2803C4u;
    SET_GPR_U32(ctx, 31, 0x2803CCu);
    ctx->pc = 0x2803C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803C4u;
    // 0x2803c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227030u, 0x2803C4u, 0x2803CCu)) {
        return;
    }
    ctx->pc = 0x2803CCu;
label_2803cc:
    // 0x2803cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2803ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803d0: 0xc089c50  jal         func_227140
    ctx->pc = 0x2803D0u;
    SET_GPR_U32(ctx, 31, 0x2803D8u);
    ctx->pc = 0x2803D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803D0u;
    // 0x2803d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227140u, 0x2803D0u, 0x2803D8u)) {
        return;
    }
    ctx->pc = 0x2803D8u;
label_2803d8:
    // 0x2803d8: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x2803d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2803dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2803dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e0: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2803e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2803e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2803e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2803e8: 0x8fa80054  lw          $t0, 0x54($sp)
    ctx->pc = 0x2803e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2803ec: 0xc08a080  jal         func_228200
    ctx->pc = 0x2803ECu;
    SET_GPR_U32(ctx, 31, 0x2803F4u);
    ctx->pc = 0x2803F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803ECu;
    // 0x2803f0: 0x8fa90058  lw          $t1, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228200u, 0x2803ECu, 0x2803F4u)) {
        return;
    }
    ctx->pc = 0x2803F4u;
label_2803f4:
    // 0x2803f4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2803F4u;
    {
        const bool branch_taken_0x2803f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803F4u;
        // 0x2803f8: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803f4) {
            ctx->pc = 0x280404u;
            goto label_280404;
        }
    }
    ctx->pc = 0x2803FCu;
    // 0x2803fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2803FCu;
    {
        const bool branch_taken_0x2803fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803FCu;
        // 0x280400: 0x90620023  lbu         $v0, 0x23($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803fc) {
            ctx->pc = 0x280408u;
            goto label_280408;
        }
    }
    ctx->pc = 0x280404u;
label_280404:
    // 0x280404: 0x92c20023  lbu         $v0, 0x23($s6)
    ctx->pc = 0x280404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 35)));
label_280408:
    // 0x280408: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x280408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28040c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x28040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x280410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280410u;
    {
        const bool branch_taken_0x280410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280410u;
        // 0x280414: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280410) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280418u;
    // 0x280418: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x280418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x28041c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x28041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_280420:
    // 0x280420: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280424: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x280424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x280428: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x280428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28042c: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x28042Cu;
    SET_GPR_U32(ctx, 31, 0x280434u);
    ctx->pc = 0x280430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28042Cu;
    // 0x280430: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x28042Cu, 0x280434u)) {
        return;
    }
    ctx->pc = 0x280434u;
label_280434:
    // 0x280434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28043c: 0xc08a066  jal         func_228198
    ctx->pc = 0x28043Cu;
    SET_GPR_U32(ctx, 31, 0x280444u);
    ctx->pc = 0x280440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28043Cu;
    // 0x280440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x28043Cu, 0x280444u)) {
        return;
    }
    ctx->pc = 0x280444u;
label_280444:
    // 0x280444: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x280444u;
    SET_GPR_U32(ctx, 31, 0x28044Cu);
    ctx->pc = 0x280448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280444u;
    // 0x280448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x280444u, 0x28044Cu)) {
        return;
    }
    ctx->pc = 0x28044Cu;
label_28044c:
    // 0x28044c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x28044Cu;
    {
        const bool branch_taken_0x28044c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x280450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28044Cu;
        // 0x280450: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28044c) {
            ctx->pc = 0x28045Cu;
            goto label_28045c;
        }
    }
    ctx->pc = 0x280454u;
    // 0x280454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280454u;
    {
        const bool branch_taken_0x280454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280454u;
        // 0x280458: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280454) {
            ctx->pc = 0x280460u;
            goto label_280460;
        }
    }
    ctx->pc = 0x28045Cu;
label_28045c:
    // 0x28045c: 0x8ee20050  lw          $v0, 0x50($s7)
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
label_280460:
    // 0x280460: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x280460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x280464: 0x30440f00  andi        $a0, $v0, 0xF00
    ctx->pc = 0x280464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x280468: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x28046c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x280470: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x280470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x280474: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280478: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x280478u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x28047c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x28047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x280480: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280484: 0x42b00  sll         $a1, $a0, 12
    ctx->pc = 0x280484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x280488: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x280488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x28048c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28048cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x280490: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x280490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x280494: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x280494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x280498: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28049c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28049cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2804a0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2804a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2804a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2804a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2804a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2804a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2804acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2804b0: 0xc089b96  jal         func_226E58
    ctx->pc = 0x2804B0u;
    SET_GPR_U32(ctx, 31, 0x2804B8u);
    ctx->pc = 0x2804B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804B0u;
    // 0x2804b4: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x2804B0u, 0x2804B8u)) {
        return;
    }
    ctx->pc = 0x2804B8u;
label_2804b8:
    // 0x2804b8: 0xc089b96  jal         func_226E58
    ctx->pc = 0x2804B8u;
    SET_GPR_U32(ctx, 31, 0x2804C0u);
    ctx->pc = 0x2804BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804B8u;
    // 0x2804bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x2804B8u, 0x2804C0u)) {
        return;
    }
    ctx->pc = 0x2804C0u;
label_2804c0:
    // 0x2804c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2804c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2804c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804c8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2804C8u;
    SET_GPR_U32(ctx, 31, 0x2804D0u);
    ctx->pc = 0x2804CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804C8u;
    // 0x2804cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2804C8u, 0x2804D0u)) {
        return;
    }
    ctx->pc = 0x2804D0u;
label_2804d0:
    // 0x2804d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2804d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804d4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2804D4u;
    {
        const bool branch_taken_0x2804d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804D4u;
        // 0x2804d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804d4) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x2804DCu;
    // 0x2804dc: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x2804dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2804e0: 0xafbe0024  sw          $fp, 0x24($sp)
    ctx->pc = 0x2804e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 30));
    // 0x2804e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2804E4u;
    {
        const bool branch_taken_0x2804e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804E4u;
        // 0x2804e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804e4) {
            ctx->pc = 0x280550u;
            goto label_280550;
        }
    }
    ctx->pc = 0x2804ECu;
label_2804ec:
    // 0x2804ec: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x2804ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x2804f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2804F0u;
    {
        const bool branch_taken_0x2804f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804F0u;
        // 0x2804f4: 0xafbe0024  sw          $fp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804f0) {
            ctx->pc = 0x280550u;
            goto label_280550;
        }
    }
    ctx->pc = 0x2804F8u;
label_2804f8:
    // 0x2804f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2804f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804fc: 0x0  nop
    ctx->pc = 0x2804fcu;
    // NOP
label_280500:
    // 0x280500: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x280500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x280504: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280508: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280508u;
    {
        const bool branch_taken_0x280508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280508u;
        // 0x28050c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280508) {
            ctx->pc = 0x28052Cu;
            goto label_28052c;
        }
    }
    ctx->pc = 0x280510u;
    // 0x280510: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x280510u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x280514: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x280514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x280518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28051c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280520: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x280520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x280524: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x280524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280528: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x280528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_28052c:
    // 0x28052c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x280530: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x280530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280534u;
    {
        const bool branch_taken_0x280534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280534u;
        // 0x280538: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280534) {
            ctx->pc = 0x280550u;
            goto label_280550;
        }
    }
    ctx->pc = 0x28053Cu;
    // 0x28053c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x28053cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x280540: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280544: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x280544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x280548: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x280548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28054c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28054cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_280550:
    // 0x280550: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x280550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x280554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280554u;
    {
        const bool branch_taken_0x280554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280554u;
        // 0x280558: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280554) {
            ctx->pc = 0x280578u;
            goto label_280578;
        }
    }
    ctx->pc = 0x28055Cu;
    // 0x28055c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28055cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280560: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x280560u;
    {
        const bool branch_taken_0x280560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280560u;
        // 0x280564: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280560) {
            ctx->pc = 0x2804F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2804f8;
        }
    }
    ctx->pc = 0x280568u;
    // 0x280568: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x280568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28056c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28056cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280570: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x280570u;
    {
        const bool branch_taken_0x280570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280570u;
        // 0x280574: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280570) {
            ctx->pc = 0x280500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280500;
        }
    }
    ctx->pc = 0x280578u;
label_280578:
    // 0x280578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28057c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x28057cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x280580: 0xc08ab82  jal         func_22AE08
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 31, 0x280588u);
    ctx->pc = 0x280584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280580u;
    // 0x280584: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AE08u, 0x280580u, 0x280588u)) {
        return;
    }
    ctx->pc = 0x280588u;
label_280588:
    // 0x280588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28058c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x28058cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x280590: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x280590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x280594: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x280594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x280598: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x280598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28059c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x28059cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2805a0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2805a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2805a4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2805a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2805a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2805a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2805ac: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2805acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2805b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2805b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2805b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2805B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2805B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805B4u;
        // 0x2805b8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2805B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2805BCu;
    // 0x2805bc: 0x0  nop
    ctx->pc = 0x2805bcu;
    // NOP
    ctx->pc = 0x2805c0u;
}
