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

// Function: sub_0022FC60
// Address: 0x22fc60 - 0x22fd98
void sub_0022FC60_0x22fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FC60_0x22fc60");
#endif

    switch (ctx->pc) {
        case 0x22fc90u: goto label_22fc90;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fcfcu: goto label_22fcfc;
        case 0x22fd08u: goto label_22fd08;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd68u: goto label_22fd68;
        case 0x22fd78u: goto label_22fd78;
        default: break;
    }

    ctx->pc = 0x22fc60u;

    // 0x22fc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22fc64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fc68: 0x24423f14  addiu       $v0, $v0, 0x3F14
    ctx->pc = 0x22fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16148));
    // 0x22fc6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22fc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22fc70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22fc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fc78: 0xac5c0000  sw          $gp, 0x0($v0)
    ctx->pc = 0x22fc78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 28)); ps2TraceGuestWrite(rdram, 0x6B3F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F14u, _value); } while (0);
    // 0x22fc7c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x22fc80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fc84: 0x24a5da28  addiu       $a1, $a1, -0x25D8
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957608));
    // 0x22fc88: 0xc0c8400  jal         func_321000
    ctx->pc = 0x22FC88u;
    SET_GPR_U32(ctx, 31, 0x22FC90u);
    ctx->pc = 0x22FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC88u;
    // 0x22fc8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321000u, 0x22FC88u, 0x22FC90u)) {
        return;
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x22fc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fc94: 0x10510039  beq         $v0, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x22FC94u;
    {
        const bool branch_taken_0x22fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x22FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC94u;
        // 0x22fc98: 0xaf828410  sw          $v0, -0x7BF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc94) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FC9Cu;
    // 0x22fc9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x22fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x22fca0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fca4: 0x2450d460  addiu       $s0, $v0, -0x2BA0
    ctx->pc = 0x22fca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956128));
    // 0x22fca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcac: 0xc0c840c  jal         func_321030
    ctx->pc = 0x22FCACu;
    SET_GPR_U32(ctx, 31, 0x22FCB4u);
    ctx->pc = 0x22FCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCACu;
    // 0x22fcb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321030u, 0x22FCACu, 0x22FCB4u)) {
        return;
    }
    ctx->pc = 0x22FCB4u;
label_22fcb4:
    // 0x22fcb4: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FCB4u;
    {
        const bool branch_taken_0x22fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x22FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCB4u;
        // 0x22fcb8: 0xaf828414  sw          $v0, -0x7BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcb4) {
            ctx->pc = 0x22FCD0u;
            goto label_22fcd0;
        }
    }
    ctx->pc = 0x22FCBCu;
    // 0x22fcbc: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x22fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x22fcc0: 0xc0c8408  jal         func_321020
    ctx->pc = 0x22FCC0u;
    SET_GPR_U32(ctx, 31, 0x22FCC8u);
    ctx->pc = 0x22FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCC0u;
    // 0x22fcc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321020u, 0x22FCC0u, 0x22FCC8u)) {
        return;
    }
    ctx->pc = 0x22FCC8u;
label_22fcc8:
    // 0x22fcc8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22FCC8u;
    {
        const bool branch_taken_0x22fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCC8u;
        // 0x22fccc: 0xaf918410  sw          $s1, -0x7BF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcc8) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FCD0u;
label_22fcd0:
    // 0x22fcd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fcd8: 0xc0c840c  jal         func_321030
    ctx->pc = 0x22FCD8u;
    SET_GPR_U32(ctx, 31, 0x22FCE0u);
    ctx->pc = 0x22FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCD8u;
    // 0x22fcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321030u, 0x22FCD8u, 0x22FCE0u)) {
        return;
    }
    ctx->pc = 0x22FCE0u;
label_22fce0:
    // 0x22fce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fce4: 0x1211001d  beq         $s0, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22FCE4u;
    {
        const bool branch_taken_0x22fce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x22FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCE4u;
        // 0x22fce8: 0xaf908418  sw          $s0, -0x7BE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935576), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fce4) {
            ctx->pc = 0x22FD5Cu;
            goto label_22fd5c;
        }
    }
    ctx->pc = 0x22FCECu;
    // 0x22fcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fcf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fcf4: 0xc0c8770  jal         func_321DC0
    ctx->pc = 0x22FCF4u;
    SET_GPR_U32(ctx, 31, 0x22FCFCu);
    ctx->pc = 0x22FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCF4u;
    // 0x22fcf8: 0xa3828e99  sb          $v0, -0x7167($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938265), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321DC0u, 0x22FCF4u, 0x22FCFCu)) {
        return;
    }
    ctx->pc = 0x22FCFCu;
label_22fcfc:
    // 0x22fcfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd00: 0xc0c87a4  jal         func_321E90
    ctx->pc = 0x22FD00u;
    SET_GPR_U32(ctx, 31, 0x22FD08u);
    ctx->pc = 0x22FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD00u;
    // 0x22fd04: 0xa382841c  sb          $v0, -0x7BE4($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935580), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E90u, 0x22FD00u, 0x22FD08u)) {
        return;
    }
    ctx->pc = 0x22FD08u;
label_22fd08:
    // 0x22fd08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fd0c: 0xc0c87a4  jal         func_321E90
    ctx->pc = 0x22FD0Cu;
    SET_GPR_U32(ctx, 31, 0x22FD14u);
    ctx->pc = 0x22FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD0Cu;
    // 0x22fd10: 0xa382841d  sb          $v0, -0x7BE3($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935581), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E90u, 0x22FD0Cu, 0x22FD14u)) {
        return;
    }
    ctx->pc = 0x22FD14u;
label_22fd14:
    // 0x22fd14: 0xa382841e  sb          $v0, -0x7BE2($gp)
    ctx->pc = 0x22fd14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935582), (uint8_t)GPR_U32(ctx, 2));
    // 0x22fd18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22fd1c: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x22fd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x22fd20: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x22fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x22fd24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003820u)); // MMIO: 0x10003820
    // 0x22fd28: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x22fd28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x22fd2c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x22fd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd34: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x22fd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x22fd38: 0x34a5f8fd  ori         $a1, $a1, 0xF8FD
    ctx->pc = 0x22fd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63741);
    // 0x22fd3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22fd3cu;
    runtime->Store32(rdram, ctx, 0x10003820u, GPR_U32(ctx, 4)); // MMIO: 0x10003820
    // 0x22fd40: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x22fd44: 0xac243c20  sw          $a0, 0x3C20($at)
    ctx->pc = 0x22fd44u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 4)); // MMIO: 0x10003c20
    // 0x22fd48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u)); // MMIO: 0x1000e000
    // 0x22fd4c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x22fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22fd50: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x22fd54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22FD54u;
    {
        const bool branch_taken_0x22fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD54u;
        // 0x22fd58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd54) {
            ctx->pc = 0x22FD84u;
            goto label_22fd84;
        }
    }
    ctx->pc = 0x22FD5Cu;
label_22fd5c:
    // 0x22fd5c: 0x8f858414  lw          $a1, -0x7BEC($gp)
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
    // 0x22fd60: 0xc0c8414  jal         func_321050
    ctx->pc = 0x22FD60u;
    SET_GPR_U32(ctx, 31, 0x22FD68u);
    ctx->pc = 0x22FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD60u;
    // 0x22fd64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321050u, 0x22FD60u, 0x22FD68u)) {
        return;
    }
    ctx->pc = 0x22FD68u;
label_22fd68:
    // 0x22fd68: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x22fd6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fd70: 0xc0c8408  jal         func_321020
    ctx->pc = 0x22FD70u;
    SET_GPR_U32(ctx, 31, 0x22FD78u);
    ctx->pc = 0x22FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD70u;
    // 0x22fd74: 0xaf908414  sw          $s0, -0x7BEC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321020u, 0x22FD70u, 0x22FD78u)) {
        return;
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0xaf908410  sw          $s0, -0x7BF0($gp)
    ctx->pc = 0x22fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 16));
label_22fd7c:
    // 0x22fd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22fd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22fd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22fd84:
    // 0x22fd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD8Cu;
        // 0x22fd90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FD94u;
    // 0x22fd94: 0x0  nop
    ctx->pc = 0x22fd94u;
    // NOP
    ctx->pc = 0x22fd98u;
}
