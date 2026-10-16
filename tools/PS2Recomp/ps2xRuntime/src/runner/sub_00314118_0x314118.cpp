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

// Function: sub_00314118
// Address: 0x314118 - 0x314180
void sub_00314118_0x314118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314118_0x314118");
#endif

    switch (ctx->pc) {
        case 0x314140u: goto label_314140;
        default: break;
    }

    ctx->pc = 0x314118u;

    // 0x314118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31411c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31411cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314124: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x314124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31412c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31412cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314130: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x314130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314134: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x314134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x314138: 0xc0c7d86  jal         func_31F618
    ctx->pc = 0x314138u;
    SET_GPR_U32(ctx, 31, 0x314140u);
    ctx->pc = 0x31413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314138u;
    // 0x31413c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F618u, 0x314138u, 0x314140u)) {
        return;
    }
    ctx->pc = 0x314140u;
label_314140:
    // 0x314140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314144: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x314144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x314148: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314148u;
    {
        const bool branch_taken_0x314148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314148u;
        // 0x31414c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314148) {
            ctx->pc = 0x314158u;
            goto label_314158;
        }
    }
    ctx->pc = 0x314150u;
    // 0x314150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x314150u;
    {
        const bool branch_taken_0x314150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314150u;
        // 0x314154: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314150) {
            ctx->pc = 0x314168u;
            goto label_314168;
        }
    }
    ctx->pc = 0x314158u;
label_314158:
    // 0x314158: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x314158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31415c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31415cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x314160: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x314160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x314164: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x314164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_314168:
    // 0x314168: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x314168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x31416c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31416cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314170: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x314170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314178: 0x3e00008  jr          $ra
    ctx->pc = 0x314178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314178u;
        // 0x31417c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314180u;
}
