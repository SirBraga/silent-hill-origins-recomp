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

// Function: sub_001A7118
// Address: 0x1a7118 - 0x1a71f8
void sub_001A7118_0x1a7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7118_0x1a7118");
#endif

    switch (ctx->pc) {
        case 0x1a7150u: goto label_1a7150;
        case 0x1a71c4u: goto label_1a71c4;
        default: break;
    }

    ctx->pc = 0x1a7118u;

    // 0x1a7118: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a711c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a7120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7128: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a7128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a712c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7130: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a7134: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a7138: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A7138u;
    {
        const bool branch_taken_0x1a7138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7138u;
        // 0x1a713c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7138) {
            ctx->pc = 0x1A71CCu;
            goto label_1a71cc;
        }
    }
    ctx->pc = 0x1A7140u;
    // 0x1a7140: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a7144: 0x245281b0  addiu       $s2, $v0, -0x7E50
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1a7148: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1a7148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a714c: 0x0  nop
    ctx->pc = 0x1a714cu;
    // NOP
label_1a7150:
    // 0x1a7150: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7150u;
    {
        const bool branch_taken_0x1a7150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7150u;
        // 0x1a7154: 0x96030020  lhu         $v1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7150) {
            ctx->pc = 0x1A7168u;
            goto label_1a7168;
        }
    }
    ctx->pc = 0x1A7158u;
    // 0x1a7158: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a7158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a715c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a715cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a7160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7160u;
    {
        const bool branch_taken_0x1a7160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7160u;
        // 0x1a7164: 0x731018  mult        $v0, $v1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7160) {
            ctx->pc = 0x1A7170u;
            goto label_1a7170;
        }
    }
    ctx->pc = 0x1A7168u;
label_1a7168:
    // 0x1a7168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7168u;
    {
        const bool branch_taken_0x1a7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7168u;
        // 0x1a716c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7168) {
            ctx->pc = 0x1A7174u;
            goto label_1a7174;
        }
    }
    ctx->pc = 0x1A7170u;
label_1a7170:
    // 0x1a7170: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a7174:
    // 0x1a7174: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7174u;
    {
        const bool branch_taken_0x1a7174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7174u;
        // 0x1a7178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7174) {
            ctx->pc = 0x1A71B8u;
            goto label_1a71b8;
        }
    }
    ctx->pc = 0x1A717Cu;
    // 0x1a717c: 0x94c3002e  lhu         $v1, 0x2E($a2)
    ctx->pc = 0x1a717cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x1a7180: 0x9625001c  lhu         $a1, 0x1C($s1)
    ctx->pc = 0x1a7180u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a7184: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1a7184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1a7188: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a7188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a718c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1a718cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a7190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7190u;
    {
        const bool branch_taken_0x1a7190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7190u;
        // 0x1a7194: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7190) {
            ctx->pc = 0x1A71A0u;
            goto label_1a71a0;
        }
    }
    ctx->pc = 0x1A7198u;
    // 0x1a7198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7198u;
    {
        const bool branch_taken_0x1a7198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7198u;
        // 0x1a719c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7198) {
            ctx->pc = 0x1A71A8u;
            goto label_1a71a8;
        }
    }
    ctx->pc = 0x1A71A0u;
label_1a71a0:
    // 0x1a71a0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1a71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a71a4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a71a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a71a8:
    // 0x1a71a8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1a71a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1a71ac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a71b0: 0xa4c2002e  sh          $v0, 0x2E($a2)
    ctx->pc = 0x1a71b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a71b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a71b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a71b8:
    // 0x1a71b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a71bc: 0xc069528  jal         func_1A54A0
    ctx->pc = 0x1A71BCu;
    SET_GPR_U32(ctx, 31, 0x1A71C4u);
    ctx->pc = 0x1A71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71BCu;
    // 0x1a71c0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A54A0u, 0x1A71BCu, 0x1A71C4u)) {
        return;
    }
    ctx->pc = 0x1A71C4u;
label_1a71c4:
    // 0x1a71c4: 0x5600ffe2  bnel        $s0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A71C4u;
    {
        const bool branch_taken_0x1a71c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a71c4) {
            ctx->pc = 0x1A71C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71C4u;
            // 0x1a71c8: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7150;
        }
    }
    ctx->pc = 0x1A71CCu;
label_1a71cc:
    // 0x1a71cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1a71d0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1a71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1a71d4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1a71d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a71d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a71dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a71dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a71e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a71e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a71e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a71e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a71e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71ECu;
        // 0x1a71f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71F4u;
    // 0x1a71f4: 0x0  nop
    ctx->pc = 0x1a71f4u;
    // NOP
    ctx->pc = 0x1a71f8u;
}
