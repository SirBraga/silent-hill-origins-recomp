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

// Function: sub_0014A000
// Address: 0x14a000 - 0x14a140
void sub_0014A000_0x14a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A000_0x14a000");
#endif

    switch (ctx->pc) {
        case 0x14a01cu: goto label_14a01c;
        case 0x14a030u: goto label_14a030;
        case 0x14a048u: goto label_14a048;
        case 0x14a0a4u: goto label_14a0a4;
        case 0x14a0c0u: goto label_14a0c0;
        case 0x14a11cu: goto label_14a11c;
        default: break;
    }

    ctx->pc = 0x14a000u;

    // 0x14a000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a004: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14a008: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a00c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14a00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a014: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x14A014u;
    SET_GPR_U32(ctx, 31, 0x14A01Cu);
    ctx->pc = 0x14A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A014u;
    // 0x14a018: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x14A014u, 0x14A01Cu)) {
        return;
    }
    ctx->pc = 0x14A01Cu;
label_14a01c:
    // 0x14a01c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a024: 0x8c46eec0  lw          $a2, -0x1140($v0)
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEEC0u));
    // 0x14a028: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14A028u;
    SET_GPR_U32(ctx, 31, 0x14A030u);
    ctx->pc = 0x14A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A028u;
    // 0x14a02c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14A028u, 0x14A030u)) {
        return;
    }
    ctx->pc = 0x14A030u;
label_14a030:
    // 0x14a030: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a038: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14A038u;
    {
        const bool branch_taken_0x14a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A038u;
        // 0x14a03c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a038) {
            ctx->pc = 0x14A130u;
            goto label_14a130;
        }
    }
    ctx->pc = 0x14A040u;
    // 0x14a040: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a044: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a048:
    // 0x14a048: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x14a048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14a04c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14A04Cu;
    {
        const bool branch_taken_0x14a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A04Cu;
        // 0x14a050: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a04c) {
            ctx->pc = 0x14A100u;
            goto label_14a100;
        }
    }
    ctx->pc = 0x14A054u;
    // 0x14a054: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14a058: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x14a05c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a060: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a064: 0x800008  jr          $a0
    ctx->pc = 0x14A064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A06Cu: goto label_14a06c;
            case 0x14A07Cu: goto label_14a07c;
            case 0x14A08Cu: goto label_14a08c;
            case 0x14A0ACu: goto label_14a0ac;
            case 0x14A0C8u: goto label_14a0c8;
            case 0x14A0DCu: goto label_14a0dc;
            case 0x14A0F0u: goto label_14a0f0;
            case 0x14A100u: goto label_14a100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14A06Cu;
label_14a06c:
    // 0x14a06c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a070: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14a074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A074u;
    {
        const bool branch_taken_0x14a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A074u;
        // 0x14a078: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a074) {
            ctx->pc = 0x14A098u;
            goto label_14a098;
        }
    }
    ctx->pc = 0x14A07Cu;
label_14a07c:
    // 0x14a07c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a080: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14a084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A084u;
    {
        const bool branch_taken_0x14a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A084u;
        // 0x14a088: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a084) {
            ctx->pc = 0x14A098u;
            goto label_14a098;
        }
    }
    ctx->pc = 0x14A08Cu;
label_14a08c:
    // 0x14a08c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a090: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x14a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14a094: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_14a098:
    // 0x14a098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14a098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a09c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x14A09Cu;
    SET_GPR_U32(ctx, 31, 0x14A0A4u);
    ctx->pc = 0x14A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A09Cu;
    // 0x14a0a0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x14A09Cu, 0x14A0A4u)) {
        return;
    }
    ctx->pc = 0x14A0A4u;
label_14a0a4:
    // 0x14a0a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14A0A4u;
    {
        const bool branch_taken_0x14a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0A4u;
        // 0x14a0a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0a4) {
            ctx->pc = 0x14A104u;
            goto label_14a104;
        }
    }
    ctx->pc = 0x14A0ACu;
label_14a0ac:
    // 0x14a0ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0b0: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x14a0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0b8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x14A0B8u;
    SET_GPR_U32(ctx, 31, 0x14A0C0u);
    ctx->pc = 0x14A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0B8u;
    // 0x14a0bc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x14A0B8u, 0x14A0C0u)) {
        return;
    }
    ctx->pc = 0x14A0C0u;
label_14a0c0:
    // 0x14a0c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14A0C0u;
    {
        const bool branch_taken_0x14a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C0u;
        // 0x14a0c4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c0) {
            ctx->pc = 0x14A104u;
            goto label_14a104;
        }
    }
    ctx->pc = 0x14A0C8u;
label_14a0c8:
    // 0x14a0c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x14a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14a0d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14a0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14a0d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14A0D4u;
    {
        const bool branch_taken_0x14a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D4u;
        // 0x14a0d8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0d4) {
            ctx->pc = 0x14A100u;
            goto label_14a100;
        }
    }
    ctx->pc = 0x14A0DCu;
label_14a0dc:
    // 0x14a0dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14a0e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14a0e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A0E8u;
    {
        const bool branch_taken_0x14a0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0E8u;
        // 0x14a0ec: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0e8) {
            ctx->pc = 0x14A100u;
            goto label_14a100;
        }
    }
    ctx->pc = 0x14A0F0u;
label_14a0f0:
    // 0x14a0f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x14a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14a0f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14a0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14a0fc: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x14a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_14a100:
    // 0x14a100: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14a104:
    // 0x14a104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a108: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a10c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a114: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x14A114u;
    SET_GPR_U32(ctx, 31, 0x14A11Cu);
    ctx->pc = 0x14A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A114u;
    // 0x14a118: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x14A114u, 0x14A11Cu)) {
        return;
    }
    ctx->pc = 0x14A11Cu;
label_14a11c:
    // 0x14a11c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a124: 0x5460ffc8  bnel        $v1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14A124u;
    {
        const bool branch_taken_0x14a124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a124) {
            ctx->pc = 0x14A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A124u;
            // 0x14a128: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a048;
        }
    }
    ctx->pc = 0x14A12Cu;
    // 0x14a12c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14a12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14a130:
    // 0x14a130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14a130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a138: 0x3e00008  jr          $ra
    ctx->pc = 0x14A138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A138u;
        // 0x14a13c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A140u;
}
