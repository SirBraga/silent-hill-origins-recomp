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

// Function: sub_0020B188
// Address: 0x20b188 - 0x20b2c0
void sub_0020B188_0x20b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B188_0x20b188");
#endif

    switch (ctx->pc) {
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        case 0x20b234u: goto label_20b234;
        case 0x20b238u: goto label_20b238;
        case 0x20b23cu: goto label_20b23c;
        case 0x20b240u: goto label_20b240;
        case 0x20b244u: goto label_20b244;
        case 0x20b248u: goto label_20b248;
        case 0x20b24cu: goto label_20b24c;
        case 0x20b250u: goto label_20b250;
        case 0x20b254u: goto label_20b254;
        case 0x20b258u: goto label_20b258;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b260u: goto label_20b260;
        case 0x20b264u: goto label_20b264;
        case 0x20b268u: goto label_20b268;
        case 0x20b26cu: goto label_20b26c;
        case 0x20b270u: goto label_20b270;
        case 0x20b274u: goto label_20b274;
        case 0x20b278u: goto label_20b278;
        case 0x20b27cu: goto label_20b27c;
        case 0x20b280u: goto label_20b280;
        case 0x20b284u: goto label_20b284;
        case 0x20b288u: goto label_20b288;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b290u: goto label_20b290;
        case 0x20b294u: goto label_20b294;
        case 0x20b298u: goto label_20b298;
        case 0x20b29cu: goto label_20b29c;
        case 0x20b2a0u: goto label_20b2a0;
        case 0x20b2a4u: goto label_20b2a4;
        case 0x20b2a8u: goto label_20b2a8;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2b0u: goto label_20b2b0;
        case 0x20b2b4u: goto label_20b2b4;
        case 0x20b2b8u: goto label_20b2b8;
        case 0x20b2bcu: goto label_20b2bc;
        default: break;
    }

    ctx->pc = 0x20b188u;

label_20b188:
    // 0x20b188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b18c:
    // 0x20b18c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b190:
    // 0x20b190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b194:
    // 0x20b194: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_20b198:
    // 0x20b198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b19c:
    // 0x20b19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b1a0:
    // 0x20b1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b1a4:
    // 0x20b1a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1a8:
    // 0x20b1a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b1ac:
    // 0x20b1ac: 0x40f809  jalr        $v0
label_20b1b0:
    if (ctx->pc == 0x20B1B0u) {
        ctx->pc = 0x20B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1ACu;
        // 0x20b1b0: 0x8e1101c4  lw          $s1, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1B4u;
        goto label_20b1b4;
    }
    ctx->pc = 0x20B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B1B4u);
        ctx->pc = 0x20B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1ACu;
        // 0x20b1b0: 0x8e1101c4  lw          $s1, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1ACu, 0x20B1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B1B4u;
label_20b1b4:
    // 0x20b1b4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x20b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_20b1b8:
    // 0x20b1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b1bc:
    // 0x20b1bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1c0:
    // 0x20b1c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1c4:
    // 0x20b1c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b1c8:
    // 0x20b1c8: 0x40f809  jalr        $v0
label_20b1cc:
    if (ctx->pc == 0x20B1CCu) {
        ctx->pc = 0x20B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1C8u;
        // 0x20b1cc: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1D0u;
        goto label_20b1d0;
    }
    ctx->pc = 0x20B1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B1D0u);
        ctx->pc = 0x20B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1C8u;
        // 0x20b1cc: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1C8u, 0x20B1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B1D0u;
label_20b1d0:
    // 0x20b1d0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x20b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_20b1d4:
    // 0x20b1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b1d8:
    // 0x20b1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1dc:
    // 0x20b1dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1e0:
    // 0x20b1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b1e4:
    // 0x20b1e4: 0x40f809  jalr        $v0
label_20b1e8:
    if (ctx->pc == 0x20B1E8u) {
        ctx->pc = 0x20B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1E4u;
        // 0x20b1e8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1ECu;
        goto label_20b1ec;
    }
    ctx->pc = 0x20B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B1ECu);
        ctx->pc = 0x20B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1E4u;
        // 0x20b1e8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1E4u, 0x20B1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B1ECu;
label_20b1ec:
    // 0x20b1ec: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x20b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_20b1f0:
    // 0x20b1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b1f4:
    // 0x20b1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1f8:
    // 0x20b1f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1fc:
    // 0x20b1fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b200:
    // 0x20b200: 0x40f809  jalr        $v0
label_20b204:
    if (ctx->pc == 0x20B204u) {
        ctx->pc = 0x20B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B200u;
        // 0x20b204: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B208u;
        goto label_20b208;
    }
    ctx->pc = 0x20B200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B208u);
        ctx->pc = 0x20B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B200u;
        // 0x20b204: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B200u, 0x20B208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B208u;
label_20b208:
    // 0x20b208: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x20b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_20b20c:
    // 0x20b20c: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_20b210:
    // 0x20b210: 0x35ce492e  ori         $t6, $t6, 0x492E
    ctx->pc = 0x20b210u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)18734);
label_20b214:
    // 0x20b214: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
label_20b218:
    // 0x20b218: 0x35adc5a2  ori         $t5, $t5, 0xC5A2
    ctx->pc = 0x20b218u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)50594);
label_20b21c:
    // 0x20b21c: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
label_20b220:
    // 0x20b220: 0x358c66e9  ori         $t4, $t4, 0x66E9
    ctx->pc = 0x20b220u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)26345);
label_20b224:
    // 0x20b224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b228:
    // 0x20b228: 0x3c0b002c  lui         $t3, 0x2C
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)44 << 16));
label_20b22c:
    // 0x20b22c: 0x356b8d00  ori         $t3, $t3, 0x8D00
    ctx->pc = 0x20b22cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36096);
label_20b230:
    // 0x20b230: 0x3c0a005b  lui         $t2, 0x5B
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)91 << 16));
label_20b234:
    // 0x20b234: 0x354a6900  ori         $t2, $t2, 0x6900
    ctx->pc = 0x20b234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)26880);
label_20b238:
    // 0x20b238: 0x3c09ff1d  lui         $t1, 0xFF1D
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65309 << 16));
label_20b23c:
    // 0x20b23c: 0x3529af00  ori         $t1, $t1, 0xAF00
    ctx->pc = 0x20b23cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)44800);
label_20b240:
    // 0x20b240: 0x3c08ff4d  lui         $t0, 0xFF4D
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65357 << 16));
label_20b244:
    // 0x20b244: 0x35080b80  ori         $t0, $t0, 0xB80
    ctx->pc = 0x20b244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2944);
label_20b248:
    // 0x20b248: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20b24c:
    // 0x20b24c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b250:
    // 0x20b250: 0x82438  dsll        $a0, $t0, 16
    ctx->pc = 0x20b250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 16);
label_20b254:
    // 0x20b254: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20b254u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_20b258:
    // 0x20b258: 0x93438  dsll        $a2, $t1, 16
    ctx->pc = 0x20b258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 16);
label_20b25c:
    // 0x20b25c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20b25cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20b260:
    // 0x20b260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20b264:
    // 0x20b264: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x20b264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20b268:
    // 0x20b268: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20b268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_20b26c:
    // 0x20b26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20b26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_20b270:
    // 0x20b270: 0x12d482d  daddu       $t1, $t1, $t5
    ctx->pc = 0x20b270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 13));
label_20b274:
    // 0x20b274: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x20b274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
label_20b278:
    // 0x20b278: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20b27c:
    // 0x20b27c: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x20b27cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
label_20b280:
    // 0x20b280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20b284:
    // 0x20b284: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x20b284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_20b288:
    // 0x20b288: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20b28c:
    // 0x20b28c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20b290:
    // 0x20b290: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x20b290u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
label_20b294:
    // 0x20b294: 0x14e502d  daddu       $t2, $t2, $t6
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 14));
label_20b298:
    // 0x20b298: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_20b29c:
    // 0x20b29c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x20b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20b2a0:
    // 0x20b2a0: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x20b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
label_20b2a4:
    // 0x20b2a4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_20b2a8:
    if (ctx->pc == 0x20B2A8u) {
        ctx->pc = 0x20B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2A4u;
        // 0x20b2a8: 0x656ba7e6  daddiu      $t3, $t3, -0x581A (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294944742);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2ACu;
        goto label_20b2ac;
    }
    ctx->pc = 0x20B2A4u;
    {
        const bool branch_taken_0x20b2a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2A4u;
        // 0x20b2a8: 0x656ba7e6  daddiu      $t3, $t3, -0x581A (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294944742);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2a4) {
            ctx->pc = 0x20B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b248;
        }
    }
    ctx->pc = 0x20B2ACu;
label_20b2ac:
    // 0x20b2ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b2b0:
    // 0x20b2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b2b4:
    // 0x20b2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b2b8:
    // 0x20b2b8: 0x3e00008  jr          $ra
label_20b2bc:
    if (ctx->pc == 0x20B2BCu) {
        ctx->pc = 0x20B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2B8u;
        // 0x20b2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2C0u;
        goto label_fallthrough_0x20b2b8;
    }
    ctx->pc = 0x20B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2B8u;
        // 0x20b2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b2b8:
    ctx->pc = 0x20B2C0u;
}
