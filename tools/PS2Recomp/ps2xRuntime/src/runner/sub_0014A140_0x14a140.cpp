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

// Function: sub_0014A140
// Address: 0x14a140 - 0x14a208
void sub_0014A140_0x14a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A140_0x14a140");
#endif

    switch (ctx->pc) {
        case 0x14a168u: goto label_14a168;
        case 0x14a180u: goto label_14a180;
        case 0x14a1b4u: goto label_14a1b4;
        case 0x14a1f0u: goto label_14a1f0;
        default: break;
    }

    ctx->pc = 0x14a140u;

    // 0x14a140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a144: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14a148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a154: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x14a154u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x14a158: 0x8e24870c  lw          $a0, -0x78F4($s1)
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14a15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a160: 0xc05ec4e  jal         func_17B138
    ctx->pc = 0x14A160u;
    SET_GPR_U32(ctx, 31, 0x14A168u);
    ctx->pc = 0x14A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A160u;
    // 0x14a164: 0x8e060074  lw          $a2, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B138u, 0x14A160u, 0x14A168u)) {
        return;
    }
    ctx->pc = 0x14A168u;
label_14a168:
    // 0x14a168: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x14a16c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A16Cu;
    {
        const bool branch_taken_0x14a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A16Cu;
        // 0x14a170: 0x8e24870c  lw          $a0, -0x78F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a16c) {
            ctx->pc = 0x14A180u;
            goto label_14a180;
        }
    }
    ctx->pc = 0x14A174u;
    // 0x14a174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a178: 0xc05ec2a  jal         func_17B0A8
    ctx->pc = 0x14A178u;
    SET_GPR_U32(ctx, 31, 0x14A180u);
    ctx->pc = 0x14A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A178u;
    // 0x14a17c: 0x8e060074  lw          $a2, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B0A8u, 0x14A178u, 0x14A180u)) {
        return;
    }
    ctx->pc = 0x14A180u;
label_14a180:
    // 0x14a180: 0x86020062  lh          $v0, 0x62($s0)
    ctx->pc = 0x14a180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x14a184: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A184u;
    {
        const bool branch_taken_0x14a184 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A184u;
        // 0x14a188: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a184) {
            ctx->pc = 0x14A1B4u;
            goto label_14a1b4;
        }
    }
    ctx->pc = 0x14A18Cu;
    // 0x14a18c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x14a190: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x14a194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14a198: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A198u;
    {
        const bool branch_taken_0x14a198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A198u;
        // 0x14a19c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a198) {
            ctx->pc = 0x14A1B4u;
            goto label_14a1b4;
        }
    }
    ctx->pc = 0x14A1A0u;
    // 0x14a1a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a1a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A1A4u;
    {
        const bool branch_taken_0x14a1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1A4u;
        // 0x14a1a8: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1a4) {
            ctx->pc = 0x14A1B8u;
            goto label_14a1b8;
        }
    }
    ctx->pc = 0x14A1ACu;
    // 0x14a1ac: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14A1ACu;
    SET_GPR_U32(ctx, 31, 0x14A1B4u);
    ctx->pc = 0x14A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1ACu;
    // 0x14a1b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14A1ACu, 0x14A1B4u)) {
        return;
    }
    ctx->pc = 0x14A1B4u;
label_14a1b4:
    // 0x14a1b4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14a1b8:
    // 0x14a1b8: 0x2482eeb0  addiu       $v0, $a0, -0x1150
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    // 0x14a1bc: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x14a1c0: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14A1C0u;
    {
        const bool branch_taken_0x14a1c0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x14A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1C0u;
        // 0x14a1c4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1c0) {
            ctx->pc = 0x14A1F0u;
            goto label_14a1f0;
        }
    }
    ctx->pc = 0x14A1C8u;
    // 0x14a1c8: 0x8c84eeb0  lw          $a0, -0x1150($a0)
    ctx->pc = 0x14a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962864)));
    // 0x14a1cc: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x14a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x14a1d0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x14a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x14a1d4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A1D4u;
    {
        const bool branch_taken_0x14a1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1D4u;
        // 0x14a1d8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1d4) {
            ctx->pc = 0x14A1F0u;
            goto label_14a1f0;
        }
    }
    ctx->pc = 0x14A1DCu;
    // 0x14a1dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A1E0u;
    {
        const bool branch_taken_0x14a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1E0u;
        // 0x14a1e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1e0) {
            ctx->pc = 0x14A1F4u;
            goto label_14a1f4;
        }
    }
    ctx->pc = 0x14A1E8u;
    // 0x14a1e8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14A1E8u;
    SET_GPR_U32(ctx, 31, 0x14A1F0u);
    ctx->pc = 0x14A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1E8u;
    // 0x14a1ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14A1E8u, 0x14A1F0u)) {
        return;
    }
    ctx->pc = 0x14A1F0u;
label_14a1f0:
    // 0x14a1f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14a1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14a1f4:
    // 0x14a1f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14a1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1FCu;
        // 0x14a200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A204u;
    // 0x14a204: 0x0  nop
    ctx->pc = 0x14a204u;
    // NOP
    ctx->pc = 0x14a208u;
}
