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

// Function: sub_00283170
// Address: 0x283170 - 0x283240
void sub_00283170_0x283170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283170_0x283170");
#endif

    switch (ctx->pc) {
        case 0x283194u: goto label_283194;
        case 0x2831a8u: goto label_2831a8;
        case 0x2831ccu: goto label_2831cc;
        case 0x2831dcu: goto label_2831dc;
        case 0x283200u: goto label_283200;
        case 0x283224u: goto label_283224;
        default: break;
    }

    ctx->pc = 0x283170u;

    // 0x283170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28317c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x283180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x283180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283184: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x283184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x283188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28318c: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x28318Cu;
    SET_GPR_U32(ctx, 31, 0x283194u);
    ctx->pc = 0x283190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28318Cu;
    // 0x283190: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x28318Cu, 0x283194u)) {
        return;
    }
    ctx->pc = 0x283194u;
label_283194:
    // 0x283194: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x283194u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283198: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x283198u;
    {
        const bool branch_taken_0x283198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283198) {
            ctx->pc = 0x28319Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283198u;
            // 0x28319c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2831BCu;
            goto label_2831bc;
        }
    }
    ctx->pc = 0x2831A0u;
    // 0x2831a0: 0xc0957e4  jal         func_255F90
    ctx->pc = 0x2831A0u;
    SET_GPR_U32(ctx, 31, 0x2831A8u);
    ctx->pc = 0x2831A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831A0u;
    // 0x2831a4: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F90u, 0x2831A0u, 0x2831A8u)) {
        return;
    }
    ctx->pc = 0x2831A8u;
label_2831a8:
    // 0x2831a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2831a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2831ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2831acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2831b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2831b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2831b4: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x2831b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
    // 0x2831b8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2831b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2831bc:
    // 0x2831bc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2831BCu;
    {
        const bool branch_taken_0x2831bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831BCu;
        // 0x2831c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831bc) {
            ctx->pc = 0x283228u;
            goto label_283228;
        }
    }
    ctx->pc = 0x2831C4u;
    // 0x2831c4: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x2831C4u;
    SET_GPR_U32(ctx, 31, 0x2831CCu);
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x2831C4u, 0x2831CCu)) {
        return;
    }
    ctx->pc = 0x2831CCu;
label_2831cc:
    // 0x2831cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2831CCu;
    {
        const bool branch_taken_0x2831cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831CCu;
        // 0x2831d0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831cc) {
            ctx->pc = 0x283224u;
            goto label_283224;
        }
    }
    ctx->pc = 0x2831D4u;
    // 0x2831d4: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x2831D4u;
    SET_GPR_U32(ctx, 31, 0x2831DCu);
    ctx->pc = 0x2831D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831D4u;
    // 0x2831d8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x2831D4u, 0x2831DCu)) {
        return;
    }
    ctx->pc = 0x2831DCu;
label_2831dc:
    // 0x2831dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2831dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2831e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2831E0u;
    {
        const bool branch_taken_0x2831e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2831E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831E0u;
        // 0x2831e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831e0) {
            ctx->pc = 0x2831F8u;
            goto label_2831f8;
        }
    }
    ctx->pc = 0x2831E8u;
    // 0x2831e8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2831E8u;
    {
        const bool branch_taken_0x2831e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2831e8) {
            ctx->pc = 0x2831F8u;
            goto label_2831f8;
        }
    }
    ctx->pc = 0x2831F0u;
    // 0x2831f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2831F0u;
    {
        const bool branch_taken_0x2831f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831F0u;
        // 0x2831f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831f0) {
            ctx->pc = 0x283218u;
            goto label_283218;
        }
    }
    ctx->pc = 0x2831F8u;
label_2831f8:
    // 0x2831f8: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x2831F8u;
    SET_GPR_U32(ctx, 31, 0x283200u);
    ctx->pc = 0x2831FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831F8u;
    // 0x2831fc: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x2831F8u, 0x283200u)) {
        return;
    }
    ctx->pc = 0x283200u;
label_283200:
    // 0x283200: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x283200u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283204u;
    {
        const bool branch_taken_0x283204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283204u;
        // 0x283208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283204) {
            ctx->pc = 0x28321Cu;
            goto label_28321c;
        }
    }
    ctx->pc = 0x28320Cu;
    // 0x28320c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283210: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x283210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x283214: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x283214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
label_283218:
    // 0x283218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28321c:
    // 0x28321c: 0xc0a0e6a  jal         func_2839A8
    ctx->pc = 0x28321Cu;
    SET_GPR_U32(ctx, 31, 0x283224u);
    ctx->pc = 0x283220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28321Cu;
    // 0x283220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2839A8u, 0x28321Cu, 0x283224u)) {
        return;
    }
    ctx->pc = 0x283224u;
label_283224:
    // 0x283224: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_283228:
    // 0x283228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28322c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28322cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283230: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x283230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283238: 0x3e00008  jr          $ra
    ctx->pc = 0x283238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283238u;
        // 0x28323c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283240u;
}
