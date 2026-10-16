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

// Function: sub_0017B0A8
// Address: 0x17b0a8 - 0x17b138
void sub_0017B0A8_0x17b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B0A8_0x17b0a8");
#endif

    switch (ctx->pc) {
        case 0x17b0a8u: goto label_17b0a8;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0b0u: goto label_17b0b0;
        case 0x17b0b4u: goto label_17b0b4;
        case 0x17b0b8u: goto label_17b0b8;
        case 0x17b0bcu: goto label_17b0bc;
        case 0x17b0c0u: goto label_17b0c0;
        case 0x17b0c4u: goto label_17b0c4;
        case 0x17b0c8u: goto label_17b0c8;
        case 0x17b0ccu: goto label_17b0cc;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0d4u: goto label_17b0d4;
        case 0x17b0d8u: goto label_17b0d8;
        case 0x17b0dcu: goto label_17b0dc;
        case 0x17b0e0u: goto label_17b0e0;
        case 0x17b0e4u: goto label_17b0e4;
        case 0x17b0e8u: goto label_17b0e8;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b0f0u: goto label_17b0f0;
        case 0x17b0f4u: goto label_17b0f4;
        case 0x17b0f8u: goto label_17b0f8;
        case 0x17b0fcu: goto label_17b0fc;
        case 0x17b100u: goto label_17b100;
        case 0x17b104u: goto label_17b104;
        case 0x17b108u: goto label_17b108;
        case 0x17b10cu: goto label_17b10c;
        case 0x17b110u: goto label_17b110;
        case 0x17b114u: goto label_17b114;
        case 0x17b118u: goto label_17b118;
        case 0x17b11cu: goto label_17b11c;
        case 0x17b120u: goto label_17b120;
        case 0x17b124u: goto label_17b124;
        case 0x17b128u: goto label_17b128;
        case 0x17b12cu: goto label_17b12c;
        case 0x17b130u: goto label_17b130;
        case 0x17b134u: goto label_17b134;
        default: break;
    }

    ctx->pc = 0x17b0a8u;

label_17b0a8:
    // 0x17b0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17b0ac:
    // 0x17b0ac: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_17b0b0:
    // 0x17b0b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_17b0b4:
    // 0x17b0b4: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x17b0b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_17b0b8:
    // 0x17b0b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17b0bc:
    // 0x17b0bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b0c0:
    // 0x17b0c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_17b0c4:
    // 0x17b0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b0c8:
    // 0x17b0c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17b0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17b0cc:
    // 0x17b0cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17b0d0:
    // 0x17b0d0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17b0d4:
    // 0x17b0d4: 0xc05e258  jal         func_178960
label_17b0d8:
    if (ctx->pc == 0x17B0D8u) {
        ctx->pc = 0x17B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0D4u;
        // 0x17b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0DCu;
        goto label_17b0dc;
    }
    ctx->pc = 0x17B0D4u;
    SET_GPR_U32(ctx, 31, 0x17B0DCu);
    ctx->pc = 0x17B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0D4u;
    // 0x17b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178960u, 0x17B0D4u, 0x17B0DCu)) {
        return;
    }
    ctx->pc = 0x17B0DCu;
label_17b0dc:
    // 0x17b0dc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_17b0e0:
    // 0x17b0e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b0e4:
    // 0x17b0e4: 0x2472108c  addiu       $s2, $v1, 0x108C
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4236));
label_17b0e8:
    // 0x17b0e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17b0ec:
    // 0x17b0ec: 0x40f809  jalr        $v0
label_17b0f0:
    if (ctx->pc == 0x17B0F0u) {
        ctx->pc = 0x17B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0ECu;
        // 0x17b0f0: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0F4u;
        goto label_17b0f4;
    }
    ctx->pc = 0x17B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B0F4u);
        ctx->pc = 0x17B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0ECu;
        // 0x17b0f0: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B0ECu, 0x17B0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B0F4u;
label_17b0f4:
    // 0x17b0f4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x17b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_17b0f8:
    // 0x17b0f8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_17b0fc:
    if (ctx->pc == 0x17B0FCu) {
        ctx->pc = 0x17B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0F8u;
        // 0x17b0fc: 0xae25007c  sw          $a1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B100u;
        goto label_17b100;
    }
    ctx->pc = 0x17B0F8u;
    {
        const bool branch_taken_0x17b0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0F8u;
        // 0x17b0fc: 0xae25007c  sw          $a1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0f8) {
            ctx->pc = 0x17B114u;
            goto label_17b114;
        }
    }
    ctx->pc = 0x17B100u;
label_17b100:
    // 0x17b100: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_17b104:
    // 0x17b104: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17b108:
    // 0x17b108: 0x40f809  jalr        $v0
label_17b10c:
    if (ctx->pc == 0x17B10Cu) {
        ctx->pc = 0x17B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B108u;
        // 0x17b10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B110u;
        goto label_17b110;
    }
    ctx->pc = 0x17B108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B110u);
        ctx->pc = 0x17B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B108u;
        // 0x17b10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B108u, 0x17B110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B110u;
label_17b110:
    // 0x17b110: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x17b110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
label_17b114:
    // 0x17b114: 0xae3300c0  sw          $s3, 0xC0($s1)
    ctx->pc = 0x17b114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 19));
label_17b118:
    // 0x17b118: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17b118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b11c:
    // 0x17b11c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17b11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b120:
    // 0x17b120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b124:
    // 0x17b124: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17b124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b128:
    // 0x17b128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b12c:
    // 0x17b12c: 0x3e00008  jr          $ra
label_17b130:
    if (ctx->pc == 0x17B130u) {
        ctx->pc = 0x17B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B12Cu;
        // 0x17b130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B134u;
        goto label_17b134;
    }
    ctx->pc = 0x17B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B12Cu;
        // 0x17b130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B134u;
label_17b134:
    // 0x17b134: 0x0  nop
    ctx->pc = 0x17b134u;
    // NOP
    ctx->pc = 0x17b138u;
}
