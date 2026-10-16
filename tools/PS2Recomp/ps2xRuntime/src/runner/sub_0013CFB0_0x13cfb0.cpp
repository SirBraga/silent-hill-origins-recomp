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

// Function: sub_0013CFB0
// Address: 0x13cfb0 - 0x13d168
void sub_0013CFB0_0x13cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFB0_0x13cfb0");
#endif

    switch (ctx->pc) {
        case 0x13cfccu: goto label_13cfcc;
        case 0x13cfe0u: goto label_13cfe0;
        case 0x13cff8u: goto label_13cff8;
        case 0x13d044u: goto label_13d044;
        case 0x13d144u: goto label_13d144;
        default: break;
    }

    ctx->pc = 0x13cfb0u;

    // 0x13cfb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cfb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13cfb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13cfbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13cfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cfc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cfc4: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x13CFC4u;
    SET_GPR_U32(ctx, 31, 0x13CFCCu);
    ctx->pc = 0x13CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFC4u;
    // 0x13cfc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x13CFC4u, 0x13CFCCu)) {
        return;
    }
    ctx->pc = 0x13CFCCu;
label_13cfcc:
    // 0x13cfcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13cfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cfd4: 0x8c4647c0  lw          $a2, 0x47C0($v0)
    ctx->pc = 0x13cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B47C0u));
    // 0x13cfd8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13CFD8u;
    SET_GPR_U32(ctx, 31, 0x13CFE0u);
    ctx->pc = 0x13CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFD8u;
    // 0x13cfdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13CFD8u, 0x13CFE0u)) {
        return;
    }
    ctx->pc = 0x13CFE0u;
label_13cfe0:
    // 0x13cfe0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cfe8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x13CFE8u;
    {
        const bool branch_taken_0x13cfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFE8u;
        // 0x13cfec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfe8) {
            ctx->pc = 0x13D158u;
            goto label_13d158;
        }
    }
    ctx->pc = 0x13CFF0u;
    // 0x13cff0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cff4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13cff8:
    // 0x13cff8: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x13cff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x13cffc: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x13CFFCu;
    {
        const bool branch_taken_0x13cffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFFCu;
        // 0x13d000: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cffc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D004u;
    // 0x13d004: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13d008: 0x2442f7e0  addiu       $v0, $v0, -0x820
    ctx->pc = 0x13d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965216));
    // 0x13d00c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d014: 0x800008  jr          $a0
    ctx->pc = 0x13D014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D01Cu: goto label_13d01c;
            case 0x13D02Cu: goto label_13d02c;
            case 0x13D04Cu: goto label_13d04c;
            case 0x13D06Cu: goto label_13d06c;
            case 0x13D07Cu: goto label_13d07c;
            case 0x13D08Cu: goto label_13d08c;
            case 0x13D09Cu: goto label_13d09c;
            case 0x13D0ACu: goto label_13d0ac;
            case 0x13D0CCu: goto label_13d0cc;
            case 0x13D0ECu: goto label_13d0ec;
            case 0x13D10Cu: goto label_13d10c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D014u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13D01Cu;
label_13d01c:
    // 0x13d01c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13d01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d020: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13d024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D024u;
    {
        const bool branch_taken_0x13d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D024u;
        // 0x13d028: 0x262500d8  addiu       $a1, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d024) {
            ctx->pc = 0x13D038u;
            goto label_13d038;
        }
    }
    ctx->pc = 0x13D02Cu;
label_13d02c:
    // 0x13d02c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13d02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d030: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13d034: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x13d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_13d038:
    // 0x13d038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d03c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x13D03Cu;
    SET_GPR_U32(ctx, 31, 0x13D044u);
    ctx->pc = 0x13D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D03Cu;
    // 0x13d040: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x13D03Cu, 0x13D044u)) {
        return;
    }
    ctx->pc = 0x13D044u;
label_13d044:
    // 0x13d044: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x13D044u;
    {
        const bool branch_taken_0x13d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D044u;
        // 0x13d048: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d044) {
            ctx->pc = 0x13D12Cu;
            goto label_13d12c;
        }
    }
    ctx->pc = 0x13D04Cu;
label_13d04c:
    // 0x13d04c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d050: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d054: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D054u;
    {
        const bool branch_taken_0x13d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D054u;
        // 0x13d058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d054) {
            ctx->pc = 0x13D064u;
            goto label_13d064;
        }
    }
    ctx->pc = 0x13D05Cu;
    // 0x13d05c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x13D05Cu;
    {
        const bool branch_taken_0x13d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D05Cu;
        // 0x13d060: 0xae2200ec  sw          $v0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d05c) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D064u;
label_13d064:
    // 0x13d064: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13D064u;
    {
        const bool branch_taken_0x13d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D064u;
        // 0x13d068: 0xae2000ec  sw          $zero, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d064) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D06Cu;
label_13d06c:
    // 0x13d06c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d070: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d074: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13D074u;
    {
        const bool branch_taken_0x13d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D074u;
        // 0x13d078: 0xae230140  sw          $v1, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d074) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D07Cu;
label_13d07c:
    // 0x13d07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d080: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d084: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13D084u;
    {
        const bool branch_taken_0x13d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D084u;
        // 0x13d088: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d084) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D08Cu;
label_13d08c:
    // 0x13d08c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d090: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d094: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x13D094u;
    {
        const bool branch_taken_0x13d094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D094u;
        // 0x13d098: 0xe6200170  swc1        $f0, 0x170($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d094) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D09Cu;
label_13d09c:
    // 0x13d09c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d0a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13D0A4u;
    {
        const bool branch_taken_0x13d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0A4u;
        // 0x13d0a8: 0xe6200174  swc1        $f0, 0x174($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0a4) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0ACu;
label_13d0ac:
    // 0x13d0ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d0b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D0B4u;
    {
        const bool branch_taken_0x13d0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0B4u;
        // 0x13d0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0b4) {
            ctx->pc = 0x13D0C4u;
            goto label_13d0c4;
        }
    }
    ctx->pc = 0x13D0BCu;
    // 0x13d0bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13D0BCu;
    {
        const bool branch_taken_0x13d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0BCu;
        // 0x13d0c0: 0xae220178  sw          $v0, 0x178($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0bc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0C4u;
label_13d0c4:
    // 0x13d0c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D0C4u;
    {
        const bool branch_taken_0x13d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0C4u;
        // 0x13d0c8: 0xae200178  sw          $zero, 0x178($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0c4) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0CCu;
label_13d0cc:
    // 0x13d0cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d0d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D0D4u;
    {
        const bool branch_taken_0x13d0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0D4u;
        // 0x13d0d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0d4) {
            ctx->pc = 0x13D0E4u;
            goto label_13d0e4;
        }
    }
    ctx->pc = 0x13D0DCu;
    // 0x13d0dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13D0DCu;
    {
        const bool branch_taken_0x13d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0DCu;
        // 0x13d0e0: 0xae22017c  sw          $v0, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0dc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0E4u;
label_13d0e4:
    // 0x13d0e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13D0E4u;
    {
        const bool branch_taken_0x13d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0E4u;
        // 0x13d0e8: 0xae20017c  sw          $zero, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0e4) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0ECu;
label_13d0ec:
    // 0x13d0ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d0f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D0F4u;
    {
        const bool branch_taken_0x13d0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0F4u;
        // 0x13d0f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0f4) {
            ctx->pc = 0x13D104u;
            goto label_13d104;
        }
    }
    ctx->pc = 0x13D0FCu;
    // 0x13d0fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13D0FCu;
    {
        const bool branch_taken_0x13d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0FCu;
        // 0x13d100: 0xae220180  sw          $v0, 0x180($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0fc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D104u;
label_13d104:
    // 0x13d104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D104u;
    {
        const bool branch_taken_0x13d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D104u;
        // 0x13d108: 0xae200180  sw          $zero, 0x180($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d104) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D10Cu;
label_13d10c:
    // 0x13d10c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d110: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d114: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D114u;
    {
        const bool branch_taken_0x13d114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D114u;
        // 0x13d118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d114) {
            ctx->pc = 0x13D124u;
            goto label_13d124;
        }
    }
    ctx->pc = 0x13D11Cu;
    // 0x13d11c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13D11Cu;
    {
        const bool branch_taken_0x13d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D11Cu;
        // 0x13d120: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d11c) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D124u;
label_13d124:
    // 0x13d124: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x13d124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
label_13d128:
    // 0x13d128: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13d12c:
    // 0x13d12c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d134: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d13c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13D13Cu;
    SET_GPR_U32(ctx, 31, 0x13D144u);
    ctx->pc = 0x13D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D13Cu;
    // 0x13d140: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13D13Cu, 0x13D144u)) {
        return;
    }
    ctx->pc = 0x13D144u;
label_13d144:
    // 0x13d144: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d14c: 0x5460ffaa  bnel        $v1, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x13D14Cu;
    {
        const bool branch_taken_0x13d14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d14c) {
            ctx->pc = 0x13D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D14Cu;
            // 0x13d150: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cff8;
        }
    }
    ctx->pc = 0x13D154u;
    // 0x13d154: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13d154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13d158:
    // 0x13d158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13d158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d160: 0x3e00008  jr          $ra
    ctx->pc = 0x13D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D160u;
        // 0x13d164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D168u;
}
