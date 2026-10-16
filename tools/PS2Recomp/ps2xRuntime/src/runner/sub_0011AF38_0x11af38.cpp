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

// Function: sub_0011AF38
// Address: 0x11af38 - 0x11b0b8
void sub_0011AF38_0x11af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AF38_0x11af38");
#endif

    switch (ctx->pc) {
        case 0x11af54u: goto label_11af54;
        case 0x11af68u: goto label_11af68;
        case 0x11af80u: goto label_11af80;
        case 0x11afd0u: goto label_11afd0;
        case 0x11b090u: goto label_11b090;
        default: break;
    }

    ctx->pc = 0x11af38u;

    // 0x11af38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11af3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11af40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11af44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11af44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11af4c: 0xc04459c  jal         func_111670
    ctx->pc = 0x11AF4Cu;
    SET_GPR_U32(ctx, 31, 0x11AF54u);
    ctx->pc = 0x11AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF4Cu;
    // 0x11af50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x11AF4Cu, 0x11AF54u)) {
        return;
    }
    ctx->pc = 0x11AF54u;
label_11af54:
    // 0x11af54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11af58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af5c: 0x8c464554  lw          $a2, 0x4554($v0)
    ctx->pc = 0x11af5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4554u));
    // 0x11af60: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11AF60u;
    SET_GPR_U32(ctx, 31, 0x11AF68u);
    ctx->pc = 0x11AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF60u;
    // 0x11af64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11AF60u, 0x11AF68u)) {
        return;
    }
    ctx->pc = 0x11AF68u;
label_11af68:
    // 0x11af68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11af70: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x11AF70u;
    {
        const bool branch_taken_0x11af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF70u;
        // 0x11af74: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af70) {
            ctx->pc = 0x11B0A4u;
            goto label_11b0a4;
        }
    }
    ctx->pc = 0x11AF78u;
    // 0x11af78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11af80:
    // 0x11af80: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x11af80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x11af84: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x11AF84u;
    {
        const bool branch_taken_0x11af84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF84u;
        // 0x11af88: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af84) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11AF8Cu;
    // 0x11af8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11af90: 0x2442afe0  addiu       $v0, $v0, -0x5020
    ctx->pc = 0x11af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946784));
    // 0x11af94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11af98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11af9c: 0x800008  jr          $a0
    ctx->pc = 0x11AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AFA4u: goto label_11afa4;
            case 0x11AFB8u: goto label_11afb8;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11AFE8u: goto label_11afe8;
            case 0x11AFF8u: goto label_11aff8;
            case 0x11B008u: goto label_11b008;
            case 0x11B018u: goto label_11b018;
            case 0x11B028u: goto label_11b028;
            case 0x11B038u: goto label_11b038;
            case 0x11B048u: goto label_11b048;
            case 0x11B068u: goto label_11b068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11AFA4u;
label_11afa4:
    // 0x11afa4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11afa8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11afac: 0x24c6afa0  addiu       $a2, $a2, -0x5060
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946720));
    // 0x11afb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AFB0u;
    {
        const bool branch_taken_0x11afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFB0u;
        // 0x11afb4: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afb0) {
            ctx->pc = 0x11AFC8u;
            goto label_11afc8;
        }
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11afbc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11afc0: 0x24c6afb0  addiu       $a2, $a2, -0x5050
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946736));
    // 0x11afc4: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_11afc8:
    // 0x11afc8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x11AFC8u;
    SET_GPR_U32(ctx, 31, 0x11AFD0u);
    ctx->pc = 0x11AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFC8u;
    // 0x11afcc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x11AFC8u, 0x11AFD0u)) {
        return;
    }
    ctx->pc = 0x11AFD0u;
label_11afd0:
    // 0x11afd0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11AFD0u;
    {
        const bool branch_taken_0x11afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFD0u;
        // 0x11afd4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afd0) {
            ctx->pc = 0x11B078u;
            goto label_11b078;
        }
    }
    ctx->pc = 0x11AFD8u;
label_11afd8:
    // 0x11afd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11afdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11afe0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11AFE0u;
    {
        const bool branch_taken_0x11afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE0u;
        // 0x11afe4: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afe0) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11AFE8u;
label_11afe8:
    // 0x11afe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11afec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11aff0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11AFF0u;
    {
        const bool branch_taken_0x11aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFF0u;
        // 0x11aff4: 0xae230094  sw          $v1, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aff0) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11AFF8u;
label_11aff8:
    // 0x11aff8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11affc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11b000: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11B000u;
    {
        const bool branch_taken_0x11b000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B000u;
        // 0x11b004: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b000) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B008u;
label_11b008:
    // 0x11b008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b00c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11b010: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11B010u;
    {
        const bool branch_taken_0x11b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B010u;
        // 0x11b014: 0xae230110  sw          $v1, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b010) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B018u;
label_11b018:
    // 0x11b018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b01c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b020: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11B020u;
    {
        const bool branch_taken_0x11b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B020u;
        // 0x11b024: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b020) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B028u;
label_11b028:
    // 0x11b028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b02c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b030: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11B030u;
    {
        const bool branch_taken_0x11b030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B030u;
        // 0x11b034: 0xe6200118  swc1        $f0, 0x118($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b030) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B038u;
label_11b038:
    // 0x11b038: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b03c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b040: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B040u;
    {
        const bool branch_taken_0x11b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B040u;
        // 0x11b044: 0xe620011c  swc1        $f0, 0x11C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b040) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B048u;
label_11b048:
    // 0x11b048: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b04c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11b050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B050u;
    {
        const bool branch_taken_0x11b050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B050u;
        // 0x11b054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b050) {
            ctx->pc = 0x11B060u;
            goto label_11b060;
        }
    }
    ctx->pc = 0x11B058u;
    // 0x11b058: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11B058u;
    {
        const bool branch_taken_0x11b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B058u;
        // 0x11b05c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b058) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B060u;
label_11b060:
    // 0x11b060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B060u;
    {
        const bool branch_taken_0x11b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B060u;
        // 0x11b064: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b060) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B068u;
label_11b068:
    // 0x11b068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b06c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b070: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x11b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_11b074:
    // 0x11b074: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11b078:
    // 0x11b078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b088: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11B088u;
    SET_GPR_U32(ctx, 31, 0x11B090u);
    ctx->pc = 0x11B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B088u;
    // 0x11b08c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11B088u, 0x11B090u)) {
        return;
    }
    ctx->pc = 0x11B090u;
label_11b090:
    // 0x11b090: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b098: 0x5460ffb9  bnel        $v1, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x11B098u;
    {
        const bool branch_taken_0x11b098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b098) {
            ctx->pc = 0x11B09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B098u;
            // 0x11b09c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af80;
        }
    }
    ctx->pc = 0x11B0A0u;
    // 0x11b0a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b0a4:
    // 0x11b0a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0ACu;
        // 0x11b0b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0B4u;
    // 0x11b0b4: 0x0  nop
    ctx->pc = 0x11b0b4u;
    // NOP
    ctx->pc = 0x11b0b8u;
}
