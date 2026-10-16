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

// Function: sub_0013FF18
// Address: 0x13ff18 - 0x1400d8
void sub_0013FF18_0x13ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FF18_0x13ff18");
#endif

    switch (ctx->pc) {
        case 0x13ff18u: goto label_13ff18;
        case 0x13ff1cu: goto label_13ff1c;
        case 0x13ff20u: goto label_13ff20;
        case 0x13ff24u: goto label_13ff24;
        case 0x13ff28u: goto label_13ff28;
        case 0x13ff2cu: goto label_13ff2c;
        case 0x13ff30u: goto label_13ff30;
        case 0x13ff34u: goto label_13ff34;
        case 0x13ff38u: goto label_13ff38;
        case 0x13ff3cu: goto label_13ff3c;
        case 0x13ff40u: goto label_13ff40;
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff48u: goto label_13ff48;
        case 0x13ff4cu: goto label_13ff4c;
        case 0x13ff50u: goto label_13ff50;
        case 0x13ff54u: goto label_13ff54;
        case 0x13ff58u: goto label_13ff58;
        case 0x13ff5cu: goto label_13ff5c;
        case 0x13ff60u: goto label_13ff60;
        case 0x13ff64u: goto label_13ff64;
        case 0x13ff68u: goto label_13ff68;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff70u: goto label_13ff70;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff78u: goto label_13ff78;
        case 0x13ff7cu: goto label_13ff7c;
        case 0x13ff80u: goto label_13ff80;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ff88u: goto label_13ff88;
        case 0x13ff8cu: goto label_13ff8c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ff98u: goto label_13ff98;
        case 0x13ff9cu: goto label_13ff9c;
        case 0x13ffa0u: goto label_13ffa0;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffa8u: goto label_13ffa8;
        case 0x13ffacu: goto label_13ffac;
        case 0x13ffb0u: goto label_13ffb0;
        case 0x13ffb4u: goto label_13ffb4;
        case 0x13ffb8u: goto label_13ffb8;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13ffc4u: goto label_13ffc4;
        case 0x13ffc8u: goto label_13ffc8;
        case 0x13ffccu: goto label_13ffcc;
        case 0x13ffd0u: goto label_13ffd0;
        case 0x13ffd4u: goto label_13ffd4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13ffe0u: goto label_13ffe0;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x13ffe8u: goto label_13ffe8;
        case 0x13ffecu: goto label_13ffec;
        case 0x13fff0u: goto label_13fff0;
        case 0x13fff4u: goto label_13fff4;
        case 0x13fff8u: goto label_13fff8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140000u: goto label_140000;
        case 0x140004u: goto label_140004;
        case 0x140008u: goto label_140008;
        case 0x14000cu: goto label_14000c;
        case 0x140010u: goto label_140010;
        case 0x140014u: goto label_140014;
        case 0x140018u: goto label_140018;
        case 0x14001cu: goto label_14001c;
        case 0x140020u: goto label_140020;
        case 0x140024u: goto label_140024;
        case 0x140028u: goto label_140028;
        case 0x14002cu: goto label_14002c;
        case 0x140030u: goto label_140030;
        case 0x140034u: goto label_140034;
        case 0x140038u: goto label_140038;
        case 0x14003cu: goto label_14003c;
        case 0x140040u: goto label_140040;
        case 0x140044u: goto label_140044;
        case 0x140048u: goto label_140048;
        case 0x14004cu: goto label_14004c;
        case 0x140050u: goto label_140050;
        case 0x140054u: goto label_140054;
        case 0x140058u: goto label_140058;
        case 0x14005cu: goto label_14005c;
        case 0x140060u: goto label_140060;
        case 0x140064u: goto label_140064;
        case 0x140068u: goto label_140068;
        case 0x14006cu: goto label_14006c;
        case 0x140070u: goto label_140070;
        case 0x140074u: goto label_140074;
        case 0x140078u: goto label_140078;
        case 0x14007cu: goto label_14007c;
        case 0x140080u: goto label_140080;
        case 0x140084u: goto label_140084;
        case 0x140088u: goto label_140088;
        case 0x14008cu: goto label_14008c;
        case 0x140090u: goto label_140090;
        case 0x140094u: goto label_140094;
        case 0x140098u: goto label_140098;
        case 0x14009cu: goto label_14009c;
        case 0x1400a0u: goto label_1400a0;
        case 0x1400a4u: goto label_1400a4;
        case 0x1400a8u: goto label_1400a8;
        case 0x1400acu: goto label_1400ac;
        case 0x1400b0u: goto label_1400b0;
        case 0x1400b4u: goto label_1400b4;
        case 0x1400b8u: goto label_1400b8;
        case 0x1400bcu: goto label_1400bc;
        case 0x1400c0u: goto label_1400c0;
        case 0x1400c4u: goto label_1400c4;
        case 0x1400c8u: goto label_1400c8;
        case 0x1400ccu: goto label_1400cc;
        case 0x1400d0u: goto label_1400d0;
        case 0x1400d4u: goto label_1400d4;
        default: break;
    }

    ctx->pc = 0x13ff18u;

label_13ff18:
    // 0x13ff18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13ff1c:
    // 0x13ff1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_13ff20:
    // 0x13ff20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_13ff24:
    // 0x13ff24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ff24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ff28:
    // 0x13ff28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13ff2c:
    // 0x13ff2c: 0xc04efda  jal         func_13BF68
label_13ff30:
    if (ctx->pc == 0x13FF30u) {
        ctx->pc = 0x13FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF2Cu;
        // 0x13ff30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF34u;
        goto label_13ff34;
    }
    ctx->pc = 0x13FF2Cu;
    SET_GPR_U32(ctx, 31, 0x13FF34u);
    ctx->pc = 0x13FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF2Cu;
    // 0x13ff30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x13FF2Cu, 0x13FF34u)) {
        return;
    }
    ctx->pc = 0x13FF34u;
label_13ff34:
    // 0x13ff34: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_13ff38:
    // 0x13ff38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_13ff3c:
    if (ctx->pc == 0x13FF3Cu) {
        ctx->pc = 0x13FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF38u;
        // 0x13ff3c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF40u;
        goto label_13ff40;
    }
    ctx->pc = 0x13FF38u;
    {
        const bool branch_taken_0x13ff38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF38u;
        // 0x13ff3c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff38) {
            ctx->pc = 0x13FF4Cu;
            goto label_13ff4c;
        }
    }
    ctx->pc = 0x13FF40u;
label_13ff40:
    // 0x13ff40: 0xc076b1a  jal         func_1DAC68
label_13ff44:
    if (ctx->pc == 0x13FF44u) {
        ctx->pc = 0x13FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF40u;
        // 0x13ff44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF48u;
        goto label_13ff48;
    }
    ctx->pc = 0x13FF40u;
    SET_GPR_U32(ctx, 31, 0x13FF48u);
    ctx->pc = 0x13FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF40u;
    // 0x13ff44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAC68u, 0x13FF40u, 0x13FF48u)) {
        return;
    }
    ctx->pc = 0x13FF48u;
label_13ff48:
    // 0x13ff48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13ff4c:
    // 0x13ff4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ff50:
    // 0x13ff50: 0x8c464838  lw          $a2, 0x4838($v0)
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18488)));
label_13ff54:
    // 0x13ff54: 0xc07f1c0  jal         func_1FC700
label_13ff58:
    if (ctx->pc == 0x13FF58u) {
        ctx->pc = 0x13FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF54u;
        // 0x13ff58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF5Cu;
        goto label_13ff5c;
    }
    ctx->pc = 0x13FF54u;
    SET_GPR_U32(ctx, 31, 0x13FF5Cu);
    ctx->pc = 0x13FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF54u;
    // 0x13ff58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13FF54u, 0x13FF5Cu)) {
        return;
    }
    ctx->pc = 0x13FF5Cu;
label_13ff5c:
    // 0x13ff5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13ff60:
    // 0x13ff60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13ff64:
    // 0x13ff64: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_13ff68:
    if (ctx->pc == 0x13FF68u) {
        ctx->pc = 0x13FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF64u;
        // 0x13ff68: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF6Cu;
        goto label_13ff6c;
    }
    ctx->pc = 0x13FF64u;
    {
        const bool branch_taken_0x13ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff64) {
            ctx->pc = 0x13FF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FF64u;
            // 0x13ff68: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1400ACu;
            goto label_1400ac;
        }
    }
    ctx->pc = 0x13FF6Cu;
label_13ff6c:
    // 0x13ff6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13ff70:
    // 0x13ff70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ff74:
    // 0x13ff74: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13ff78:
    // 0x13ff78: 0x50820022  beql        $a0, $v0, . + 4 + (0x22 << 2)
label_13ff7c:
    if (ctx->pc == 0x13FF7Cu) {
        ctx->pc = 0x13FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF78u;
        // 0x13ff7c: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF80u;
        goto label_13ff80;
    }
    ctx->pc = 0x13FF78u;
    {
        const bool branch_taken_0x13ff78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff78) {
            ctx->pc = 0x13FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FF78u;
            // 0x13ff7c: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140004u;
            goto label_140004;
        }
    }
    ctx->pc = 0x13FF80u;
label_13ff80:
    // 0x13ff80: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_13ff84:
    if (ctx->pc == 0x13FF84u) {
        ctx->pc = 0x13FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF80u;
        // 0x13ff84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF88u;
        goto label_13ff88;
    }
    ctx->pc = 0x13FF80u;
    {
        const bool branch_taken_0x13ff80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF80u;
        // 0x13ff84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff80) {
            ctx->pc = 0x13FFA0u;
            goto label_13ffa0;
        }
    }
    ctx->pc = 0x13FF88u;
label_13ff88:
    // 0x13ff88: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_13ff8c:
    if (ctx->pc == 0x13FF8Cu) {
        ctx->pc = 0x13FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF88u;
        // 0x13ff8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF90u;
        goto label_13ff90;
    }
    ctx->pc = 0x13FF88u;
    {
        const bool branch_taken_0x13ff88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF88u;
        // 0x13ff8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff88) {
            ctx->pc = 0x140024u;
            goto label_140024;
        }
    }
    ctx->pc = 0x13FF90u;
label_13ff90:
    // 0x13ff90: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
label_13ff94:
    if (ctx->pc == 0x13FF94u) {
        ctx->pc = 0x13FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF90u;
        // 0x13ff94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FF98u;
        goto label_13ff98;
    }
    ctx->pc = 0x13FF90u;
    {
        const bool branch_taken_0x13ff90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF90u;
        // 0x13ff94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff90) {
            ctx->pc = 0x140038u;
            goto label_140038;
        }
    }
    ctx->pc = 0x13FF98u;
label_13ff98:
    // 0x13ff98: 0x1000003b  b           . + 4 + (0x3B << 2)
label_13ff9c:
    if (ctx->pc == 0x13FF9Cu) {
        ctx->pc = 0x13FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF98u;
        // 0x13ff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFA0u;
        goto label_13ffa0;
    }
    ctx->pc = 0x13FF98u;
    {
        const bool branch_taken_0x13ff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF98u;
        // 0x13ff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff98) {
            ctx->pc = 0x140088u;
            goto label_140088;
        }
    }
    ctx->pc = 0x13FFA0u;
label_13ffa0:
    // 0x13ffa0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x13ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_13ffa4:
    // 0x13ffa4: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x13ffa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_13ffa8:
    // 0x13ffa8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_13ffac:
    if (ctx->pc == 0x13FFACu) {
        ctx->pc = 0x13FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFA8u;
        // 0x13ffac: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFB0u;
        goto label_13ffb0;
    }
    ctx->pc = 0x13FFA8u;
    {
        const bool branch_taken_0x13ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFA8u;
        // 0x13ffac: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffa8) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFB0u;
label_13ffb0:
    // 0x13ffb0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13ffb4:
    // 0x13ffb4: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x13ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_13ffb8:
    // 0x13ffb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ffbc:
    // 0x13ffbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13ffc0:
    // 0x13ffc0: 0x800008  jr          $a0
label_13ffc4:
    if (ctx->pc == 0x13FFC4u) {
        ctx->pc = 0x13FFC8u;
        goto label_13ffc8;
    }
    ctx->pc = 0x13FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FFC8u: goto label_13ffc8;
            case 0x13FFD0u: goto label_13ffd0;
            case 0x13FFD8u: goto label_13ffd8;
            case 0x13FFE0u: goto label_13ffe0;
            case 0x13FFE8u: goto label_13ffe8;
            case 0x13FFF0u: goto label_13fff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FFC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13FFC8u;
label_13ffc8:
    // 0x13ffc8: 0x1000000a  b           . + 4 + (0xA << 2)
label_13ffcc:
    if (ctx->pc == 0x13FFCCu) {
        ctx->pc = 0x13FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFC8u;
        // 0x13ffcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFD0u;
        goto label_13ffd0;
    }
    ctx->pc = 0x13FFC8u;
    {
        const bool branch_taken_0x13ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFC8u;
        // 0x13ffcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffc8) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFD0u;
label_13ffd0:
    // 0x13ffd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_13ffd4:
    if (ctx->pc == 0x13FFD4u) {
        ctx->pc = 0x13FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD0u;
        // 0x13ffd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFD8u;
        goto label_13ffd8;
    }
    ctx->pc = 0x13FFD0u;
    {
        const bool branch_taken_0x13ffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD0u;
        // 0x13ffd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffd0) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFD8u;
label_13ffd8:
    // 0x13ffd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_13ffdc:
    if (ctx->pc == 0x13FFDCu) {
        ctx->pc = 0x13FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD8u;
        // 0x13ffdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFE0u;
        goto label_13ffe0;
    }
    ctx->pc = 0x13FFD8u;
    {
        const bool branch_taken_0x13ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD8u;
        // 0x13ffdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffd8) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFE0u;
label_13ffe0:
    // 0x13ffe0: 0x10000004  b           . + 4 + (0x4 << 2)
label_13ffe4:
    if (ctx->pc == 0x13FFE4u) {
        ctx->pc = 0x13FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFE0u;
        // 0x13ffe4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFE8u;
        goto label_13ffe8;
    }
    ctx->pc = 0x13FFE0u;
    {
        const bool branch_taken_0x13ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFE0u;
        // 0x13ffe4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffe0) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFE8u;
label_13ffe8:
    // 0x13ffe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_13ffec:
    if (ctx->pc == 0x13FFECu) {
        ctx->pc = 0x13FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFE8u;
        // 0x13ffec: 0x24050081  addiu       $a1, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFF0u;
        goto label_13fff0;
    }
    ctx->pc = 0x13FFE8u;
    {
        const bool branch_taken_0x13ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFE8u;
        // 0x13ffec: 0x24050081  addiu       $a1, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffe8) {
            ctx->pc = 0x13FFF4u;
            goto label_13fff4;
        }
    }
    ctx->pc = 0x13FFF0u;
label_13fff0:
    // 0x13fff0: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x13fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_13fff4:
    // 0x13fff4: 0xc04ff78  jal         func_13FDE0
label_13fff8:
    if (ctx->pc == 0x13FFF8u) {
        ctx->pc = 0x13FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFF4u;
        // 0x13fff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFFCu;
        goto label_13fffc;
    }
    ctx->pc = 0x13FFF4u;
    SET_GPR_U32(ctx, 31, 0x13FFFCu);
    ctx->pc = 0x13FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFF4u;
    // 0x13fff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13FDE0u, 0x13FFF4u, 0x13FFFCu)) {
        return;
    }
    ctx->pc = 0x13FFFCu;
label_13fffc:
    // 0x13fffc: 0x10000020  b           . + 4 + (0x20 << 2)
label_140000:
    if (ctx->pc == 0x140000u) {
        ctx->pc = 0x140000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFFCu;
        // 0x140000: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140004u;
        goto label_140004;
    }
    ctx->pc = 0x13FFFCu;
    {
        const bool branch_taken_0x13fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFFCu;
        // 0x140000: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fffc) {
            ctx->pc = 0x140080u;
            goto label_140080;
        }
    }
    ctx->pc = 0x140004u;
label_140004:
    // 0x140004: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_140008:
    // 0x140008: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x140008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_14000c:
    // 0x14000c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14000cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140010:
    // 0x140010: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_140014:
    // 0x140014: 0xc095d54  jal         func_257550
label_140018:
    if (ctx->pc == 0x140018u) {
        ctx->pc = 0x140018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140014u;
        // 0x140018: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14001Cu;
        goto label_14001c;
    }
    ctx->pc = 0x140014u;
    SET_GPR_U32(ctx, 31, 0x14001Cu);
    ctx->pc = 0x140018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140014u;
    // 0x140018: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257550u, 0x140014u, 0x14001Cu)) {
        return;
    }
    ctx->pc = 0x14001Cu;
label_14001c:
    // 0x14001c: 0x10000018  b           . + 4 + (0x18 << 2)
label_140020:
    if (ctx->pc == 0x140020u) {
        ctx->pc = 0x140020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14001Cu;
        // 0x140020: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140024u;
        goto label_140024;
    }
    ctx->pc = 0x14001Cu;
    {
        const bool branch_taken_0x14001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14001Cu;
        // 0x140020: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14001c) {
            ctx->pc = 0x140080u;
            goto label_140080;
        }
    }
    ctx->pc = 0x140024u;
label_140024:
    // 0x140024: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x140024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_140028:
    // 0x140028: 0xc095c3a  jal         func_2570E8
label_14002c:
    if (ctx->pc == 0x14002Cu) {
        ctx->pc = 0x14002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140028u;
        // 0x14002c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140030u;
        goto label_140030;
    }
    ctx->pc = 0x140028u;
    SET_GPR_U32(ctx, 31, 0x140030u);
    ctx->pc = 0x14002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140028u;
    // 0x14002c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x140028u, 0x140030u)) {
        return;
    }
    ctx->pc = 0x140030u;
label_140030:
    // 0x140030: 0x10000013  b           . + 4 + (0x13 << 2)
label_140034:
    if (ctx->pc == 0x140034u) {
        ctx->pc = 0x140034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140030u;
        // 0x140034: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140038u;
        goto label_140038;
    }
    ctx->pc = 0x140030u;
    {
        const bool branch_taken_0x140030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140030u;
        // 0x140034: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140030) {
            ctx->pc = 0x140080u;
            goto label_140080;
        }
    }
    ctx->pc = 0x140038u;
label_140038:
    // 0x140038: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x140038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_14003c:
    // 0x14003c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x14003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_140040:
    // 0x140040: 0x244709f0  addiu       $a3, $v0, 0x9F0
    ctx->pc = 0x140040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2544));
label_140044:
    // 0x140044: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x140044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_140048:
    // 0x140048: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x140048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_14004c:
    // 0x14004c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x14004cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_140050:
    // 0x140050: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x140050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_140054:
    // 0x140054: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x140054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140058:
    // 0x140058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x140058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_14005c:
    // 0x14005c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140060:
    // 0x140060: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_140064:
    // 0x140064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140068:
    // 0x140068: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x140068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_14006c:
    // 0x14006c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x14006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_140070:
    // 0x140070: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x140070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
label_140074:
    // 0x140074: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x140074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_140078:
    // 0x140078: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x140078u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_14007c:
    // 0x14007c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140080:
    // 0x140080: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x140080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_140084:
    // 0x140084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140088:
    // 0x140088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14008c:
    // 0x14008c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140090:
    // 0x140090: 0xc07f0c8  jal         func_1FC320
label_140094:
    if (ctx->pc == 0x140094u) {
        ctx->pc = 0x140094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140090u;
        // 0x140094: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140098u;
        goto label_140098;
    }
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 31, 0x140098u);
    ctx->pc = 0x140094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140090u;
    // 0x140094: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x140090u, 0x140098u)) {
        return;
    }
    ctx->pc = 0x140098u;
label_140098:
    // 0x140098: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14009c:
    // 0x14009c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1400a0:
    // 0x1400a0: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_1400a4:
    if (ctx->pc == 0x1400A4u) {
        ctx->pc = 0x1400A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400A0u;
        // 0x1400a4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1400A8u;
        goto label_1400a8;
    }
    ctx->pc = 0x1400A0u;
    {
        const bool branch_taken_0x1400a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1400A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400A0u;
        // 0x1400a4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400a0) {
            ctx->pc = 0x13FF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ff70;
        }
    }
    ctx->pc = 0x1400A8u;
label_1400a8:
    // 0x1400a8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1400ac:
    // 0x1400ac: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1400b0:
    // 0x1400b0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1400b4:
    // 0x1400b4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1400b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1400b8:
    // 0x1400b8: 0x60f809  jalr        $v1
label_1400bc:
    if (ctx->pc == 0x1400BCu) {
        ctx->pc = 0x1400BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400B8u;
        // 0x1400bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1400C0u;
        goto label_1400c0;
    }
    ctx->pc = 0x1400B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1400C0u);
        ctx->pc = 0x1400BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400B8u;
        // 0x1400bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1400B8u, 0x1400C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1400C0u;
label_1400c0:
    // 0x1400c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1400c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1400c4:
    // 0x1400c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1400c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1400c8:
    // 0x1400c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1400c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1400cc:
    // 0x1400cc: 0x3e00008  jr          $ra
label_1400d0:
    if (ctx->pc == 0x1400D0u) {
        ctx->pc = 0x1400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400CCu;
        // 0x1400d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1400D4u;
        goto label_1400d4;
    }
    ctx->pc = 0x1400CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400CCu;
        // 0x1400d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1400CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1400D4u;
label_1400d4:
    // 0x1400d4: 0x0  nop
    ctx->pc = 0x1400d4u;
    // NOP
    ctx->pc = 0x1400d8u;
}
