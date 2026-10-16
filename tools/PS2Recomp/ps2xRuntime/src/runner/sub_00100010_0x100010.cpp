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

// Function: sub_00100010
// Address: 0x100010 - 0x100340
void sub_00100010_0x100010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100010_0x100010");
#endif

    switch (ctx->pc) {
        case 0x10002cu: goto label_10002c;
        case 0x100070u: goto label_100070;
        case 0x100160u: goto label_100160;
        case 0x100170u: goto label_100170;
        case 0x10017cu: goto label_10017c;
        case 0x100180u: goto label_100180;
        case 0x100198u: goto label_100198;
        case 0x1001acu: goto label_1001ac;
        case 0x1001f4u: goto label_1001f4;
        case 0x10020cu: goto label_10020c;
        case 0x100238u: goto label_100238;
        case 0x1002ccu: goto label_1002cc;
        case 0x1002d8u: goto label_1002d8;
        case 0x1002e4u: goto label_1002e4;
        case 0x10030cu: goto label_10030c;
        default: break;
    }

    ctx->pc = 0x100010u;

    // 0x100010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100014: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x100014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x100018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x100018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10001c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x100020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100024: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x100024u;
    SET_GPR_U32(ctx, 31, 0x10002Cu);
    ctx->pc = 0x100028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100024u;
    // 0x100028: 0x3c140010  lui         $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x100024u, 0x10002Cu)) {
        return;
    }
    ctx->pc = 0x10002Cu;
label_10002c:
    // 0x10002c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x100030: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x100030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x100034: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x100034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x100038: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x100038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10003c: 0x24429548  addiu       $v0, $v0, -0x6AB8
    ctx->pc = 0x10003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
    // 0x100040: 0x24639330  addiu       $v1, $v1, -0x6CD0
    ctx->pc = 0x100040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939440));
    // 0x100044: 0x24849508  addiu       $a0, $a0, -0x6AF8
    ctx->pc = 0x100044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939912));
    // 0x100048: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x100048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
    // 0x10004c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x10004cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x100050: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x100050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100054: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x100054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x100058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10005c: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x10005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x100060: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x100060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x100064: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x100064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x100068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x100068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10006c: 0x0  nop
    ctx->pc = 0x10006cu;
    // NOP
label_100070:
    // 0x100070: 0x0  nop
    ctx->pc = 0x100070u;
    // NOP
    // 0x100074: 0x0  nop
    ctx->pc = 0x100074u;
    // NOP
    // 0x100078: 0x0  nop
    ctx->pc = 0x100078u;
    // NOP
    // 0x10007c: 0x0  nop
    ctx->pc = 0x10007cu;
    // NOP
    // 0x100080: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x100080u;
    {
        const bool branch_taken_0x100080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x100084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100080u;
        // 0x100084: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100080) {
            ctx->pc = 0x100070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100070;
        }
    }
    ctx->pc = 0x100088u;
    // 0x100088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10008c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10008cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100090: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x100090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100094: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10009c: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x10009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x1000a0: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x1000a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1000a4: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x1000a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x1000a8: 0x26050200  addiu       $a1, $s0, 0x200
    ctx->pc = 0x1000a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1000ac: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x1000acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
    // 0x1000b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1000b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1000b4: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x1000b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x1000b8: 0x26120188  addiu       $s2, $s0, 0x188
    ctx->pc = 0x1000b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x1000bc: 0xae110218  sw          $s1, 0x218($s0)
    ctx->pc = 0x1000bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 17));
    // 0x1000c0: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x1000c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    // 0x1000c4: 0x26110110  addiu       $s1, $s0, 0x110
    ctx->pc = 0x1000c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1000c8: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x1000c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    // 0x1000cc: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x1000ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x1000d0: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x1000d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1000d4: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x1000d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x1000d8: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1000d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1000dc: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1000dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1000e0: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1000e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1000e4: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1000e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1000e8: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1000e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1000ec: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1000ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1000f0: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x1000f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x1000f4: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x1000f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x1000f8: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x1000f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x1000fc: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x1000fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x100100: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x100100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x100104: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x100104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x100108: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x100108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x10010c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x10010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x100110: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x100110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x100114: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x100114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x100118: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x100118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x10011c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x10011cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x100120: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x100120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x100124: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x100124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x100128: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x100128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x10012c: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x10012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x100130: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x100130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x100134: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x100134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x100138: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x100138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x10013c: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x10013cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x100140: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x100140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x100144: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x100144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x100148: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x100148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x10014c: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x10014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x100150: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x100150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x100154: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x100154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x100158: 0xc081be4  jal         func_206F90
    ctx->pc = 0x100158u;
    SET_GPR_U32(ctx, 31, 0x100160u);
    ctx->pc = 0x10015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100158u;
    // 0x10015c: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x100158u, 0x100160u)) {
        return;
    }
    ctx->pc = 0x100160u;
label_100160:
    // 0x100160: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x100164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100168: 0xc081bfa  jal         func_206FE8
    ctx->pc = 0x100168u;
    SET_GPR_U32(ctx, 31, 0x100170u);
    ctx->pc = 0x10016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100168u;
    // 0x10016c: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206FE8u, 0x100168u, 0x100170u)) {
        return;
    }
    ctx->pc = 0x100170u;
label_100170:
    // 0x100170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100174: 0xc040636  jal         func_1018D8
    ctx->pc = 0x100174u;
    SET_GPR_U32(ctx, 31, 0x10017Cu);
    ctx->pc = 0x100178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100174u;
    // 0x100178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1018D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1018D8u, 0x100174u, 0x10017Cu)) {
        return;
    }
    ctx->pc = 0x10017Cu;
label_10017c:
    // 0x10017c: 0x0  nop
    ctx->pc = 0x10017cu;
    // NOP
label_100180:
    // 0x100180: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x100180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100184: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x100188: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10018c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x100190: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x100190u;
    SET_GPR_U32(ctx, 31, 0x100198u);
    ctx->pc = 0x100194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100190u;
    // 0x100194: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x100190u, 0x100198u)) {
        return;
    }
    ctx->pc = 0x100198u;
label_100198:
    // 0x100198: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x100198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x10019c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001a0: 0x268523e8  addiu       $a1, $s4, 0x23E8
    ctx->pc = 0x1001a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 9192));
    // 0x1001a4: 0xc09d914  jal         func_276450
    ctx->pc = 0x1001A4u;
    SET_GPR_U32(ctx, 31, 0x1001ACu);
    ctx->pc = 0x1001A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001A4u;
    // 0x1001a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x1001A4u, 0x1001ACu)) {
        return;
    }
    ctx->pc = 0x1001ACu;
label_1001ac:
    // 0x1001ac: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1001acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
    // 0x1001b0: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1001b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1001b4: 0xae20fff4  sw          $zero, -0xC($s1)
    ctx->pc = 0x1001b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967284), GPR_U32(ctx, 0));
    // 0x1001b8: 0xae20fff0  sw          $zero, -0x10($s1)
    ctx->pc = 0x1001b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_U32(ctx, 0));
    // 0x1001bc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1001bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1001c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1001c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1001c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1001c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1001c8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1001c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1001cc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1001ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1001d0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1001d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1001d4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1001d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1001d8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1001d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1001dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1001dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1001e0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1001e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1001e4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1001E4u;
    {
        const bool branch_taken_0x1001e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1001E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1001E4u;
        // 0x1001e8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1001e4) {
            ctx->pc = 0x100180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100180;
        }
    }
    ctx->pc = 0x1001ECu;
    // 0x1001ec: 0xc040624  jal         func_101890
    ctx->pc = 0x1001ECu;
    SET_GPR_U32(ctx, 31, 0x1001F4u);
    ctx->pc = 0x1001F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001ECu;
    // 0x1001f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101890u, 0x1001ECu, 0x1001F4u)) {
        return;
    }
    ctx->pc = 0x1001F4u;
label_1001f4:
    // 0x1001f4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x1001f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1001f8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1001f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1001fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1001fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100200: 0x24a523e0  addiu       $a1, $a1, 0x23E0
    ctx->pc = 0x100200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9184));
    // 0x100204: 0xc09d914  jal         func_276450
    ctx->pc = 0x100204u;
    SET_GPR_U32(ctx, 31, 0x10020Cu);
    ctx->pc = 0x100208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100204u;
    // 0x100208: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x100204u, 0x10020Cu)) {
        return;
    }
    ctx->pc = 0x10020Cu;
label_10020c:
    // 0x10020c: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x10020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100210: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x100210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x100214: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x100214u;
    {
        const bool branch_taken_0x100214 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x100218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100214u;
        // 0x100218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100214) {
            ctx->pc = 0x1002C4u;
            goto label_1002c4;
        }
    }
    ctx->pc = 0x10021Cu;
    // 0x10021c: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x10021cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x100220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x100228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10022c: 0x34e70003  ori         $a3, $a3, 0x3
    ctx->pc = 0x10022cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x100230: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x100234: 0x0  nop
    ctx->pc = 0x100234u;
    // NOP
label_100238:
    // 0x100238: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x10023c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100240: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x100240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x100244: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x100244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x100248: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x100248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10024c: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x10024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100250: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x100254: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x100254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100258: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x100258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10025c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x10025cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x100260: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100264: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x100264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100268: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x100268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10026c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100270: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x100270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x100274: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x100274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x100278: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x100278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x10027c: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x10027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100280: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x100280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x100284: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x100284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100288: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x100288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x10028c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x10028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x100290: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x100290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x100294: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x100294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x100298: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10029c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1002a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1002a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1002a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1002a8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1002a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1002ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1002b0: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x1002b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1002b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1002b8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1002bc: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1002BCu;
    {
        const bool branch_taken_0x1002bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002bc) {
            ctx->pc = 0x1002C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1002BCu;
            // 0x1002c0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100238;
        }
    }
    ctx->pc = 0x1002C4u;
label_1002c4:
    // 0x1002c4: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x1002C4u;
    SET_GPR_U32(ctx, 31, 0x1002CCu);
    ctx->pc = 0x1002C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C4u;
    // 0x1002c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x1002C4u, 0x1002CCu)) {
        return;
    }
    ctx->pc = 0x1002CCu;
label_1002cc:
    // 0x1002cc: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1002ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1002d0: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x1002D0u;
    SET_GPR_U32(ctx, 31, 0x1002D8u);
    ctx->pc = 0x1002D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002D0u;
    // 0x1002d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x1002D0u, 0x1002D8u)) {
        return;
    }
    ctx->pc = 0x1002D8u;
label_1002d8:
    // 0x1002d8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1002d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1002dc: 0xc0420a6  jal         func_108298
    ctx->pc = 0x1002DCu;
    SET_GPR_U32(ctx, 31, 0x1002E4u);
    ctx->pc = 0x1002E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002DCu;
    // 0x1002e0: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108298u, 0x1002DCu, 0x1002E4u)) {
        return;
    }
    ctx->pc = 0x1002E4u;
label_1002e4:
    // 0x1002e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1002e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1002e8: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1002e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1002ec: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x1002ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x1002f0: 0x268523e8  addiu       $a1, $s4, 0x23E8
    ctx->pc = 0x1002f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 9192));
    // 0x1002f4: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x1002f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1002f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1002f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1002fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100304: 0xc09d914  jal         func_276450
    ctx->pc = 0x100304u;
    SET_GPR_U32(ctx, 31, 0x10030Cu);
    ctx->pc = 0x100308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100304u;
    // 0x100308: 0xae020198  sw          $v0, 0x198($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x100304u, 0x10030Cu)) {
        return;
    }
    ctx->pc = 0x10030Cu;
label_10030c:
    // 0x10030c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100314: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100318: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x100318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x10031c: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x10031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x100320: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x100320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100324: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x100324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100328: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x100328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10032c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10032cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100330: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x100330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100338: 0x3e00008  jr          $ra
    ctx->pc = 0x100338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100338u;
        // 0x10033c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100340u;
}
