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

// Function: sub_002D70E8
// Address: 0x2d70e8 - 0x2d71c0
void sub_002D70E8_0x2d70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D70E8_0x2d70e8");
#endif

    switch (ctx->pc) {
        case 0x2d70e8u: goto label_2d70e8;
        case 0x2d70ecu: goto label_2d70ec;
        case 0x2d70f0u: goto label_2d70f0;
        case 0x2d70f4u: goto label_2d70f4;
        case 0x2d70f8u: goto label_2d70f8;
        case 0x2d70fcu: goto label_2d70fc;
        case 0x2d7100u: goto label_2d7100;
        case 0x2d7104u: goto label_2d7104;
        case 0x2d7108u: goto label_2d7108;
        case 0x2d710cu: goto label_2d710c;
        case 0x2d7110u: goto label_2d7110;
        case 0x2d7114u: goto label_2d7114;
        case 0x2d7118u: goto label_2d7118;
        case 0x2d711cu: goto label_2d711c;
        case 0x2d7120u: goto label_2d7120;
        case 0x2d7124u: goto label_2d7124;
        case 0x2d7128u: goto label_2d7128;
        case 0x2d712cu: goto label_2d712c;
        case 0x2d7130u: goto label_2d7130;
        case 0x2d7134u: goto label_2d7134;
        case 0x2d7138u: goto label_2d7138;
        case 0x2d713cu: goto label_2d713c;
        case 0x2d7140u: goto label_2d7140;
        case 0x2d7144u: goto label_2d7144;
        case 0x2d7148u: goto label_2d7148;
        case 0x2d714cu: goto label_2d714c;
        case 0x2d7150u: goto label_2d7150;
        case 0x2d7154u: goto label_2d7154;
        case 0x2d7158u: goto label_2d7158;
        case 0x2d715cu: goto label_2d715c;
        case 0x2d7160u: goto label_2d7160;
        case 0x2d7164u: goto label_2d7164;
        case 0x2d7168u: goto label_2d7168;
        case 0x2d716cu: goto label_2d716c;
        case 0x2d7170u: goto label_2d7170;
        case 0x2d7174u: goto label_2d7174;
        case 0x2d7178u: goto label_2d7178;
        case 0x2d717cu: goto label_2d717c;
        case 0x2d7180u: goto label_2d7180;
        case 0x2d7184u: goto label_2d7184;
        case 0x2d7188u: goto label_2d7188;
        case 0x2d718cu: goto label_2d718c;
        case 0x2d7190u: goto label_2d7190;
        case 0x2d7194u: goto label_2d7194;
        case 0x2d7198u: goto label_2d7198;
        case 0x2d719cu: goto label_2d719c;
        case 0x2d71a0u: goto label_2d71a0;
        case 0x2d71a4u: goto label_2d71a4;
        case 0x2d71a8u: goto label_2d71a8;
        case 0x2d71acu: goto label_2d71ac;
        case 0x2d71b0u: goto label_2d71b0;
        case 0x2d71b4u: goto label_2d71b4;
        case 0x2d71b8u: goto label_2d71b8;
        case 0x2d71bcu: goto label_2d71bc;
        default: break;
    }

    ctx->pc = 0x2d70e8u;

label_2d70e8:
    // 0x2d70e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d70ec:
    // 0x2d70ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d70f0:
    // 0x2d70f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d70f4:
    // 0x2d70f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d70f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d70f8:
    // 0x2d70f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d70f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d70fc:
    // 0x2d70fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d70fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d7100:
    // 0x2d7100: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d7104:
    // 0x2d7104: 0xc09270a  jal         func_249C28
label_2d7108:
    if (ctx->pc == 0x2D7108u) {
        ctx->pc = 0x2D7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7104u;
        // 0x2d7108: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D710Cu;
        goto label_2d710c;
    }
    ctx->pc = 0x2D7104u;
    SET_GPR_U32(ctx, 31, 0x2D710Cu);
    ctx->pc = 0x2D7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7104u;
    // 0x2d7108: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2D7104u, 0x2D710Cu)) {
        return;
    }
    ctx->pc = 0x2D710Cu;
label_2d710c:
    // 0x2d710c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2d7110:
    if (ctx->pc == 0x2D7110u) {
        ctx->pc = 0x2D7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D710Cu;
        // 0x2d7110: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7114u;
        goto label_2d7114;
    }
    ctx->pc = 0x2D710Cu;
    {
        const bool branch_taken_0x2d710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D710Cu;
        // 0x2d7110: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d710c) {
            ctx->pc = 0x2D7190u;
            goto label_2d7190;
        }
    }
    ctx->pc = 0x2D7114u;
label_2d7114:
    // 0x2d7114: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_2d7118:
    // 0x2d7118: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2d7118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_2d711c:
    // 0x2d711c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d7120:
    // 0x2d7120: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x2d7120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_2d7124:
    // 0x2d7124: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2d7128:
    if (ctx->pc == 0x2D7128u) {
        ctx->pc = 0x2D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7124u;
        // 0x2d7128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D712Cu;
        goto label_2d712c;
    }
    ctx->pc = 0x2D7124u;
    {
        const bool branch_taken_0x2d7124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7124u;
        // 0x2d7128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7124) {
            ctx->pc = 0x2D7190u;
            goto label_2d7190;
        }
    }
    ctx->pc = 0x2D712Cu;
label_2d712c:
    // 0x2d712c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d7130:
    // 0x2d7130: 0xc0c3418  jal         func_30D060
label_2d7134:
    if (ctx->pc == 0x2D7134u) {
        ctx->pc = 0x2D7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7130u;
        // 0x2d7134: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7138u;
        goto label_2d7138;
    }
    ctx->pc = 0x2D7130u;
    SET_GPR_U32(ctx, 31, 0x2D7138u);
    ctx->pc = 0x2D7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7130u;
    // 0x2d7134: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D060u, 0x2D7130u, 0x2D7138u)) {
        return;
    }
    ctx->pc = 0x2D7138u;
label_2d7138:
    // 0x2d7138: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d7138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d713c:
    // 0x2d713c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d713cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d7140:
    // 0x2d7140: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d7144:
    // 0x2d7144: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2d7144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2d7148:
    // 0x2d7148: 0x40f809  jalr        $v0
label_2d714c:
    if (ctx->pc == 0x2D714Cu) {
        ctx->pc = 0x2D714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7148u;
        // 0x2d714c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7150u;
        goto label_2d7150;
    }
    ctx->pc = 0x2D7148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7150u);
        ctx->pc = 0x2D714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7148u;
        // 0x2d714c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7148u, 0x2D7150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7150u;
label_2d7150:
    // 0x2d7150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7154:
    // 0x2d7154: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d7158:
    if (ctx->pc == 0x2D7158u) {
        ctx->pc = 0x2D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7154u;
        // 0x2d7158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D715Cu;
        goto label_2d715c;
    }
    ctx->pc = 0x2D7154u;
    {
        const bool branch_taken_0x2d7154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7154u;
        // 0x2d7158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7154) {
            ctx->pc = 0x2D717Cu;
            goto label_2d717c;
        }
    }
    ctx->pc = 0x2D715Cu;
label_2d715c:
    // 0x2d715c: 0xc0b5c12  jal         func_2D7048
label_2d7160:
    if (ctx->pc == 0x2D7160u) {
        ctx->pc = 0x2D7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D715Cu;
        // 0x2d7160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7164u;
        goto label_2d7164;
    }
    ctx->pc = 0x2D715Cu;
    SET_GPR_U32(ctx, 31, 0x2D7164u);
    ctx->pc = 0x2D7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D715Cu;
    // 0x2d7160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7048u, 0x2D715Cu, 0x2D7164u)) {
        return;
    }
    ctx->pc = 0x2D7164u;
label_2d7164:
    // 0x2d7164: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2d7168:
    if (ctx->pc == 0x2D7168u) {
        ctx->pc = 0x2D7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7164u;
        // 0x2d7168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D716Cu;
        goto label_2d716c;
    }
    ctx->pc = 0x2D7164u;
    {
        const bool branch_taken_0x2d7164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7164u;
        // 0x2d7168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7164) {
            ctx->pc = 0x2D717Cu;
            goto label_2d717c;
        }
    }
    ctx->pc = 0x2D716Cu;
label_2d716c:
    // 0x2d716c: 0xc0c302a  jal         func_30C0A8
label_2d7170:
    if (ctx->pc == 0x2D7170u) {
        ctx->pc = 0x2D7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D716Cu;
        // 0x2d7170: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7174u;
        goto label_2d7174;
    }
    ctx->pc = 0x2D716Cu;
    SET_GPR_U32(ctx, 31, 0x2D7174u);
    ctx->pc = 0x2D7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D716Cu;
    // 0x2d7170: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C0A8u, 0x2D716Cu, 0x2D7174u)) {
        return;
    }
    ctx->pc = 0x2D7174u;
label_2d7174:
    // 0x2d7174: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2d7178:
    if (ctx->pc == 0x2D7178u) {
        ctx->pc = 0x2D7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7174u;
        // 0x2d7178: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D717Cu;
        goto label_2d717c;
    }
    ctx->pc = 0x2D7174u;
    {
        const bool branch_taken_0x2d7174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7174) {
            ctx->pc = 0x2D7178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7174u;
            // 0x2d7178: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7184u;
            goto label_2d7184;
        }
    }
    ctx->pc = 0x2D717Cu;
label_2d717c:
    // 0x2d717c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d7180:
    if (ctx->pc == 0x2D7180u) {
        ctx->pc = 0x2D7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D717Cu;
        // 0x2d7180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7184u;
        goto label_2d7184;
    }
    ctx->pc = 0x2D717Cu;
    {
        const bool branch_taken_0x2d717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D717Cu;
        // 0x2d7180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d717c) {
            ctx->pc = 0x2D7188u;
            goto label_2d7188;
        }
    }
    ctx->pc = 0x2D7184u;
label_2d7184:
    // 0x2d7184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7188:
    // 0x2d7188: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2d718c:
    if (ctx->pc == 0x2D718Cu) {
        ctx->pc = 0x2D718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7188u;
        // 0x2d718c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7190u;
        goto label_2d7190;
    }
    ctx->pc = 0x2D7188u;
    {
        const bool branch_taken_0x2d7188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7188u;
        // 0x2d718c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7188) {
            ctx->pc = 0x2D7194u;
            goto label_2d7194;
        }
    }
    ctx->pc = 0x2D7190u;
label_2d7190:
    // 0x2d7190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7194:
    // 0x2d7194: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d7194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d7198:
    // 0x2d7198: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d7198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d719c:
    // 0x2d719c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d719cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d71a0:
    // 0x2d71a0: 0x3e00008  jr          $ra
label_2d71a4:
    if (ctx->pc == 0x2D71A4u) {
        ctx->pc = 0x2D71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71A0u;
        // 0x2d71a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D71A8u;
        goto label_2d71a8;
    }
    ctx->pc = 0x2D71A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71A0u;
        // 0x2d71a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D71A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D71A8u;
label_2d71a8:
    // 0x2d71a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d71ac:
    // 0x2d71ac: 0x0  nop
    ctx->pc = 0x2d71acu;
    // NOP
label_2d71b0:
    // 0x2d71b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d71b4:
    // 0x2d71b4: 0x0  nop
    ctx->pc = 0x2d71b4u;
    // NOP
label_2d71b8:
    // 0x2d71b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d71b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d71bc:
    // 0x2d71bc: 0x0  nop
    ctx->pc = 0x2d71bcu;
    // NOP
    ctx->pc = 0x2d71c0u;
}
