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

// Function: sub_00173048
// Address: 0x173048 - 0x173208
void sub_00173048_0x173048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173048_0x173048");
#endif

    switch (ctx->pc) {
        case 0x173064u: goto label_173064;
        case 0x173078u: goto label_173078;
        case 0x173090u: goto label_173090;
        case 0x1730c4u: goto label_1730c4;
        case 0x1730dcu: goto label_1730dc;
        case 0x1730f4u: goto label_1730f4;
        case 0x173114u: goto label_173114;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731e0u: goto label_1731e0;
        default: break;
    }

    ctx->pc = 0x173048u;

    // 0x173048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17304c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x173050: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173054: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17305c: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x17305Cu;
    SET_GPR_U32(ctx, 31, 0x173064u);
    ctx->pc = 0x173060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17305Cu;
    // 0x173060: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x17305Cu, 0x173064u)) {
        return;
    }
    ctx->pc = 0x173064u;
label_173064:
    // 0x173064: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x173068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17306c: 0x8c46f7a0  lw          $a2, -0x860($v0)
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF7A0u));
    // 0x173070: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x173070u;
    SET_GPR_U32(ctx, 31, 0x173078u);
    ctx->pc = 0x173074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173070u;
    // 0x173074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x173070u, 0x173078u)) {
        return;
    }
    ctx->pc = 0x173078u;
label_173078:
    // 0x173078: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17307c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173080: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x173080u;
    {
        const bool branch_taken_0x173080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173080u;
        // 0x173084: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173080) {
            ctx->pc = 0x1731F4u;
            goto label_1731f4;
        }
    }
    ctx->pc = 0x173088u;
    // 0x173088: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17308c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_173090:
    // 0x173090: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x173090u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x173094: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x173094u;
    {
        const bool branch_taken_0x173094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173094u;
        // 0x173098: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173094) {
            ctx->pc = 0x1731C4u;
            goto label_1731c4;
        }
    }
    ctx->pc = 0x17309Cu;
    // 0x17309c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1730a0: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x1730a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1730a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1730a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1730a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1730ac: 0x800008  jr          $a0
    ctx->pc = 0x1730ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1730B4u: goto label_1730b4;
            case 0x1730CCu: goto label_1730cc;
            case 0x1730E4u: goto label_1730e4;
            case 0x1730FCu: goto label_1730fc;
            case 0x17311Cu: goto label_17311c;
            case 0x173128u: goto label_173128;
            case 0x173134u: goto label_173134;
            case 0x173140u: goto label_173140;
            case 0x17314Cu: goto label_17314c;
            case 0x173158u: goto label_173158;
            case 0x173164u: goto label_173164;
            case 0x173170u: goto label_173170;
            case 0x17317Cu: goto label_17317c;
            case 0x173188u: goto label_173188;
            case 0x173194u: goto label_173194;
            case 0x1731B0u: goto label_1731b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1730ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1730B4u;
label_1730b4:
    // 0x1730b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1730b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1730b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730bc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1730BCu;
    SET_GPR_U32(ctx, 31, 0x1730C4u);
    ctx->pc = 0x1730C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730BCu;
    // 0x1730c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1730BCu, 0x1730C4u)) {
        return;
    }
    ctx->pc = 0x1730C4u;
label_1730c4:
    // 0x1730c4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1730C4u;
    {
        const bool branch_taken_0x1730c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730C4u;
        // 0x1730c8: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730c4) {
            ctx->pc = 0x1731C4u;
            goto label_1731c4;
        }
    }
    ctx->pc = 0x1730CCu;
label_1730cc:
    // 0x1730cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1730d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730d4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1730D4u;
    SET_GPR_U32(ctx, 31, 0x1730DCu);
    ctx->pc = 0x1730D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730D4u;
    // 0x1730d8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1730D4u, 0x1730DCu)) {
        return;
    }
    ctx->pc = 0x1730DCu;
label_1730dc:
    // 0x1730dc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1730DCu;
    {
        const bool branch_taken_0x1730dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730DCu;
        // 0x1730e0: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730dc) {
            ctx->pc = 0x1731C4u;
            goto label_1731c4;
        }
    }
    ctx->pc = 0x1730E4u;
label_1730e4:
    // 0x1730e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1730e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730ec: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1730ECu;
    SET_GPR_U32(ctx, 31, 0x1730F4u);
    ctx->pc = 0x1730F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730ECu;
    // 0x1730f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1730ECu, 0x1730F4u)) {
        return;
    }
    ctx->pc = 0x1730F4u;
label_1730f4:
    // 0x1730f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1730F4u;
    {
        const bool branch_taken_0x1730f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730F4u;
        // 0x1730f8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730f4) {
            ctx->pc = 0x1731C4u;
            goto label_1731c4;
        }
    }
    ctx->pc = 0x1730FCu;
label_1730fc:
    // 0x1730fc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1730fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173100: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x173104: 0x26250068  addiu       $a1, $s1, 0x68
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x173108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17310c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x17310Cu;
    SET_GPR_U32(ctx, 31, 0x173114u);
    ctx->pc = 0x173110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17310Cu;
    // 0x173110: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x17310Cu, 0x173114u)) {
        return;
    }
    ctx->pc = 0x173114u;
label_173114:
    // 0x173114: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x173114u;
    {
        const bool branch_taken_0x173114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173114u;
        // 0x173118: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173114) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x17311Cu;
label_17311c:
    // 0x17311c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173120: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x173120u;
    {
        const bool branch_taken_0x173120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173120u;
        // 0x173124: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173120) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173128u;
label_173128:
    // 0x173128: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17312c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17312Cu;
    {
        const bool branch_taken_0x17312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17312Cu;
        // 0x173130: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17312c) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173134u;
label_173134:
    // 0x173134: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173138: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x173138u;
    {
        const bool branch_taken_0x173138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173138u;
        // 0x17313c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173138) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173140u;
label_173140:
    // 0x173140: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173144: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x173144u;
    {
        const bool branch_taken_0x173144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173144u;
        // 0x173148: 0x26240088  addiu       $a0, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173144) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x17314Cu;
label_17314c:
    // 0x17314c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173150: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x173150u;
    {
        const bool branch_taken_0x173150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173150u;
        // 0x173154: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173150) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173158u;
label_173158:
    // 0x173158: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17315c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17315Cu;
    {
        const bool branch_taken_0x17315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17315Cu;
        // 0x173160: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17315c) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173164u;
label_173164:
    // 0x173164: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173168: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173168u;
    {
        const bool branch_taken_0x173168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173168u;
        // 0x17316c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173168) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173170u;
label_173170:
    // 0x173170: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173174: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173174u;
    {
        const bool branch_taken_0x173174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173174u;
        // 0x173178: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173174) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x17317Cu;
label_17317c:
    // 0x17317c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17317cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173180u;
    {
        const bool branch_taken_0x173180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173180u;
        // 0x173184: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173180) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173188u;
label_173188:
    // 0x173188: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17318c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17318Cu;
    {
        const bool branch_taken_0x17318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17318Cu;
        // 0x173190: 0x262400b8  addiu       $a0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17318c) {
            ctx->pc = 0x17319Cu;
            goto label_17319c;
        }
    }
    ctx->pc = 0x173194u;
label_173194:
    // 0x173194: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173198: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_17319c:
    // 0x17319c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17319cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731a0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1731A0u;
    SET_GPR_U32(ctx, 31, 0x1731A8u);
    ctx->pc = 0x1731A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731A0u;
    // 0x1731a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1731A0u, 0x1731A8u)) {
        return;
    }
    ctx->pc = 0x1731A8u;
label_1731a8:
    // 0x1731a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1731A8u;
    {
        const bool branch_taken_0x1731a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731A8u;
        // 0x1731ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731a8) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x1731B0u;
label_1731b0:
    // 0x1731b0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1731b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731b4: 0x262400c8  addiu       $a0, $s1, 0xC8
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x1731b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1731b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731bc: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1731BCu;
    SET_GPR_U32(ctx, 31, 0x1731C4u);
    ctx->pc = 0x1731C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731BCu;
    // 0x1731c0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1731BCu, 0x1731C4u)) {
        return;
    }
    ctx->pc = 0x1731C4u;
label_1731c4:
    // 0x1731c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1731c8:
    // 0x1731c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1731d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1731d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1731d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1731d8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1731D8u;
    SET_GPR_U32(ctx, 31, 0x1731E0u);
    ctx->pc = 0x1731DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731D8u;
    // 0x1731dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1731D8u, 0x1731E0u)) {
        return;
    }
    ctx->pc = 0x1731E0u;
label_1731e0:
    // 0x1731e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1731e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1731e8: 0x5460ffa9  bnel        $v1, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1731E8u;
    {
        const bool branch_taken_0x1731e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1731e8) {
            ctx->pc = 0x1731ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1731E8u;
            // 0x1731ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173090;
        }
    }
    ctx->pc = 0x1731F0u;
    // 0x1731f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1731f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1731f4:
    // 0x1731f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1731f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1731f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1731f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1731FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731FCu;
        // 0x173200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1731FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173204u;
    // 0x173204: 0x0  nop
    ctx->pc = 0x173204u;
    // NOP
    ctx->pc = 0x173208u;
}
