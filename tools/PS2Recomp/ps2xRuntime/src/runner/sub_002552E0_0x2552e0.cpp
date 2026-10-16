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

// Function: sub_002552E0
// Address: 0x2552e0 - 0x255408
void sub_002552E0_0x2552e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002552E0_0x2552e0");
#endif

    switch (ctx->pc) {
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        default: break;
    }

    ctx->pc = 0x2552e0u;

label_2552e0:
    // 0x2552e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2552e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2552e4:
    // 0x2552e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2552e8:
    // 0x2552e8: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x2552e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16296)));
label_2552ec:
    // 0x2552ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2552ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2552f0:
    // 0x2552f0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_2552f4:
    // 0x2552f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2552f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2552f8:
    // 0x2552f8: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x2552f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_2552fc:
    // 0x2552fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255300:
    // 0x255300: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x255300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_255304:
    // 0x255304: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x255304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_255308:
    // 0x255308: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x255308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
label_25530c:
    // 0x25530c: 0x40f809  jalr        $v0
label_255310:
    if (ctx->pc == 0x255310u) {
        ctx->pc = 0x255310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25530Cu;
        // 0x255310: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255314u;
        goto label_255314;
    }
    ctx->pc = 0x25530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255314u);
        ctx->pc = 0x255310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25530Cu;
        // 0x255310: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25530Cu, 0x255314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255314u;
label_255314:
    // 0x255314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255318:
    // 0x255318: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_25531c:
    if (ctx->pc == 0x25531Cu) {
        ctx->pc = 0x25531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255318u;
        // 0x25531c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255320u;
        goto label_255320;
    }
    ctx->pc = 0x255318u;
    {
        const bool branch_taken_0x255318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255318u;
        // 0x25531c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255318) {
            ctx->pc = 0x255328u;
            goto label_255328;
        }
    }
    ctx->pc = 0x255320u;
label_255320:
    // 0x255320: 0x10000034  b           . + 4 + (0x34 << 2)
label_255324:
    if (ctx->pc == 0x255324u) {
        ctx->pc = 0x255324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255320u;
        // 0x255324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255328u;
        goto label_255328;
    }
    ctx->pc = 0x255320u;
    {
        const bool branch_taken_0x255320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255320u;
        // 0x255324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255320) {
            ctx->pc = 0x2553F4u;
            goto label_2553f4;
        }
    }
    ctx->pc = 0x255328u;
label_255328:
    // 0x255328: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x255328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_25532c:
    // 0x25532c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x25532cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_255330:
    // 0x255330: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x255330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_255334:
    // 0x255334: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x255334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_255338:
    // 0x255338: 0x24424470  addiu       $v0, $v0, 0x4470
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17520));
label_25533c:
    // 0x25533c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x25533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_255340:
    // 0x255340: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x255340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_255344:
    // 0x255344: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x255344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_255348:
    // 0x255348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25534c:
    // 0x25534c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x25534cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_255350:
    // 0x255350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255354:
    // 0x255354: 0xc0957f0  jal         func_255FC0
label_255358:
    if (ctx->pc == 0x255358u) {
        ctx->pc = 0x255358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255354u;
        // 0x255358: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25535Cu;
        goto label_25535c;
    }
    ctx->pc = 0x255354u;
    SET_GPR_U32(ctx, 31, 0x25535Cu);
    ctx->pc = 0x255358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255354u;
    // 0x255358: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x255354u, 0x25535Cu)) {
        return;
    }
    ctx->pc = 0x25535Cu;
label_25535c:
    // 0x25535c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_255360:
    // 0x255360: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x255360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_255364:
    // 0x255364: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x255364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_255368:
    // 0x255368: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x255368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_25536c:
    // 0x25536c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25536cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_255370:
    // 0x255370: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x255370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_255374:
    // 0x255374: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x255374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_255378:
    // 0x255378: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_25537c:
    // 0x25537c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x25537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_255380:
    // 0x255380: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x255380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_255384:
    // 0x255384: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x255384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
label_255388:
    // 0x255388: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25538c:
    if (ctx->pc == 0x25538Cu) {
        ctx->pc = 0x25538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255388u;
        // 0x25538c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255390u;
        goto label_255390;
    }
    ctx->pc = 0x255388u;
    {
        const bool branch_taken_0x255388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255388u;
        // 0x25538c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255388) {
            ctx->pc = 0x255398u;
            goto label_255398;
        }
    }
    ctx->pc = 0x255390u;
label_255390:
    // 0x255390: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x255390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_255394:
    // 0x255394: 0x0  nop
    ctx->pc = 0x255394u;
    // NOP
label_255398:
    // 0x255398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25539c:
    // 0x25539c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25539cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2553a0:
    // 0x2553a0: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x2553a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2553a4:
    // 0x2553a4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2553a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2553a8:
    // 0x2553a8: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2553a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_2553ac:
    // 0x2553ac: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x2553acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_2553b0:
    // 0x2553b0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2553b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_2553b4:
    // 0x2553b4: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x2553b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
label_2553b8:
    // 0x2553b8: 0x248411e0  addiu       $a0, $a0, 0x11E0
    ctx->pc = 0x2553b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
label_2553bc:
    // 0x2553bc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2553bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2553c0:
    // 0x2553c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2553c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2553c4:
    // 0x2553c4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2553c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2553c8:
    // 0x2553c8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2553c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2553cc:
    // 0x2553cc: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2553ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2553d0:
    // 0x2553d0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2553d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2553d4:
    // 0x2553d4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2553d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_2553d8:
    // 0x2553d8: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x2553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
label_2553dc:
    // 0x2553dc: 0xa6020062  sh          $v0, 0x62($s0)
    ctx->pc = 0x2553dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 2));
label_2553e0:
    // 0x2553e0: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2553e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2553e4:
    // 0x2553e4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2553e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_2553e8:
    // 0x2553e8: 0xc093958  jal         func_24E560
label_2553ec:
    if (ctx->pc == 0x2553ECu) {
        ctx->pc = 0x2553ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553E8u;
        // 0x2553ec: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553F0u;
        goto label_2553f0;
    }
    ctx->pc = 0x2553E8u;
    SET_GPR_U32(ctx, 31, 0x2553F0u);
    ctx->pc = 0x2553ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553E8u;
    // 0x2553ec: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x2553E8u, 0x2553F0u)) {
        return;
    }
    ctx->pc = 0x2553F0u;
label_2553f0:
    // 0x2553f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2553f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2553f4:
    // 0x2553f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2553f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2553f8:
    // 0x2553f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2553f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2553fc:
    // 0x2553fc: 0x3e00008  jr          $ra
label_255400:
    if (ctx->pc == 0x255400u) {
        ctx->pc = 0x255400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553FCu;
        // 0x255400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255404u;
        goto label_255404;
    }
    ctx->pc = 0x2553FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553FCu;
        // 0x255400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2553FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255404u;
label_255404:
    // 0x255404: 0x0  nop
    ctx->pc = 0x255404u;
    // NOP
    ctx->pc = 0x255408u;
}
