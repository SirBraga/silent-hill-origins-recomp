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

// Function: sub_001EC0D8
// Address: 0x1ec0d8 - 0x1ec150
void sub_001EC0D8_0x1ec0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC0D8_0x1ec0d8");
#endif

    switch (ctx->pc) {
        case 0x1ec0d8u: goto label_1ec0d8;
        case 0x1ec0dcu: goto label_1ec0dc;
        case 0x1ec0e0u: goto label_1ec0e0;
        case 0x1ec0e4u: goto label_1ec0e4;
        case 0x1ec0e8u: goto label_1ec0e8;
        case 0x1ec0ecu: goto label_1ec0ec;
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec0f4u: goto label_1ec0f4;
        case 0x1ec0f8u: goto label_1ec0f8;
        case 0x1ec0fcu: goto label_1ec0fc;
        case 0x1ec100u: goto label_1ec100;
        case 0x1ec104u: goto label_1ec104;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec10cu: goto label_1ec10c;
        case 0x1ec110u: goto label_1ec110;
        case 0x1ec114u: goto label_1ec114;
        case 0x1ec118u: goto label_1ec118;
        case 0x1ec11cu: goto label_1ec11c;
        case 0x1ec120u: goto label_1ec120;
        case 0x1ec124u: goto label_1ec124;
        case 0x1ec128u: goto label_1ec128;
        case 0x1ec12cu: goto label_1ec12c;
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec134u: goto label_1ec134;
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec13cu: goto label_1ec13c;
        case 0x1ec140u: goto label_1ec140;
        case 0x1ec144u: goto label_1ec144;
        case 0x1ec148u: goto label_1ec148;
        case 0x1ec14cu: goto label_1ec14c;
        default: break;
    }

    ctx->pc = 0x1ec0d8u;

label_1ec0d8:
    // 0x1ec0d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec0dc:
    // 0x1ec0dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ec0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ec0e0:
    // 0x1ec0e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0e4:
    // 0x1ec0e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ec0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ec0e8:
    // 0x1ec0e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1ec0ec:
    // 0x1ec0ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ec0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ec0f0:
    // 0x1ec0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec0f4:
    // 0x1ec0f4: 0xc0932d4  jal         func_24CB50
label_1ec0f8:
    if (ctx->pc == 0x1EC0F8u) {
        ctx->pc = 0x1EC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0F4u;
        // 0x1ec0f8: 0x2451000c  addiu       $s1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC0FCu;
        goto label_1ec0fc;
    }
    ctx->pc = 0x1EC0F4u;
    SET_GPR_U32(ctx, 31, 0x1EC0FCu);
    ctx->pc = 0x1EC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0F4u;
    // 0x1ec0f8: 0x2451000c  addiu       $s1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC0F4u, 0x1EC0FCu)) {
        return;
    }
    ctx->pc = 0x1EC0FCu;
label_1ec0fc:
    // 0x1ec0fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec100:
    // 0x1ec100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec104:
    // 0x1ec104: 0x40f809  jalr        $v0
label_1ec108:
    if (ctx->pc == 0x1EC108u) {
        ctx->pc = 0x1EC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC104u;
        // 0x1ec108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC10Cu;
        goto label_1ec10c;
    }
    ctx->pc = 0x1EC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC10Cu);
        ctx->pc = 0x1EC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC104u;
        // 0x1ec108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC104u, 0x1EC10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC10Cu;
label_1ec10c:
    // 0x1ec10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec110:
    // 0x1ec110: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec114:
    if (ctx->pc == 0x1EC114u) {
        ctx->pc = 0x1EC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC110u;
        // 0x1ec114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC118u;
        goto label_1ec118;
    }
    ctx->pc = 0x1EC110u;
    {
        const bool branch_taken_0x1ec110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC110u;
        // 0x1ec114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec110) {
            ctx->pc = 0x1EC130u;
            goto label_1ec130;
        }
    }
    ctx->pc = 0x1EC118u;
label_1ec118:
    // 0x1ec118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec11c:
    // 0x1ec11c: 0xc0c493d  jal         func_3124F4
label_1ec120:
    if (ctx->pc == 0x1EC120u) {
        ctx->pc = 0x1EC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC11Cu;
        // 0x1ec120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC124u;
        goto label_1ec124;
    }
    ctx->pc = 0x1EC11Cu;
    SET_GPR_U32(ctx, 31, 0x1EC124u);
    ctx->pc = 0x1EC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC11Cu;
    // 0x1ec120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EC11Cu, 0x1EC124u)) {
        return;
    }
    ctx->pc = 0x1EC124u;
label_1ec124:
    // 0x1ec124: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ec128:
    // 0x1ec128: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1ec128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1ec12c:
    // 0x1ec12c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ec12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1ec130:
    // 0x1ec130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec134:
    // 0x1ec134: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec138:
    // 0x1ec138: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ec138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec13c:
    // 0x1ec13c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ec13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec140:
    // 0x1ec140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec144:
    // 0x1ec144: 0x3e00008  jr          $ra
label_1ec148:
    if (ctx->pc == 0x1EC148u) {
        ctx->pc = 0x1EC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC144u;
        // 0x1ec148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC14Cu;
        goto label_1ec14c;
    }
    ctx->pc = 0x1EC144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC144u;
        // 0x1ec148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC14Cu;
label_1ec14c:
    // 0x1ec14c: 0x0  nop
    ctx->pc = 0x1ec14cu;
    // NOP
    ctx->pc = 0x1ec150u;
}
