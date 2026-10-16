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

// Function: sub_001CE120
// Address: 0x1ce120 - 0x1ce2e0
void sub_001CE120_0x1ce120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE120_0x1ce120");
#endif

    switch (ctx->pc) {
        case 0x1ce14cu: goto label_1ce14c;
        case 0x1ce160u: goto label_1ce160;
        case 0x1ce174u: goto label_1ce174;
        case 0x1ce1acu: goto label_1ce1ac;
        case 0x1ce1e4u: goto label_1ce1e4;
        case 0x1ce218u: goto label_1ce218;
        case 0x1ce234u: goto label_1ce234;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce28cu: goto label_1ce28c;
        default: break;
    }

    ctx->pc = 0x1ce120u;

    // 0x1ce120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ce120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ce124: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ce124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ce128: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ce128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ce12c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce130: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ce130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ce134: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ce134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ce138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ce138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce13c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ce13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ce140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce144: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CE144u;
    SET_GPR_U32(ctx, 31, 0x1CE14Cu);
    ctx->pc = 0x1CE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE144u;
    // 0x1ce148: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CE144u, 0x1CE14Cu)) {
        return;
    }
    ctx->pc = 0x1CE14Cu;
label_1ce14c:
    // 0x1ce14c: 0x8e440260  lw          $a0, 0x260($s2)
    ctx->pc = 0x1ce14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1ce150: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE150u;
    {
        const bool branch_taken_0x1ce150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce150) {
            ctx->pc = 0x1CE154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE150u;
            // 0x1ce154: 0x8e440290  lw          $a0, 0x290($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE164u;
            goto label_1ce164;
        }
    }
    ctx->pc = 0x1CE158u;
    // 0x1ce158: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CE158u;
    SET_GPR_U32(ctx, 31, 0x1CE160u);
    ctx->pc = 0x1CE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE158u;
    // 0x1ce15c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CE158u, 0x1CE160u)) {
        return;
    }
    ctx->pc = 0x1CE160u;
label_1ce160:
    // 0x1ce160: 0x8e440290  lw          $a0, 0x290($s2)
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_1ce164:
    // 0x1ce164: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE164u;
    {
        const bool branch_taken_0x1ce164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce164) {
            ctx->pc = 0x1CE168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE164u;
            // 0x1ce168: 0x8e440298  lw          $a0, 0x298($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE19Cu;
            goto label_1ce19c;
        }
    }
    ctx->pc = 0x1CE16Cu;
    // 0x1ce16c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CE16Cu;
    SET_GPR_U32(ctx, 31, 0x1CE174u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CE16Cu, 0x1CE174u)) {
        return;
    }
    ctx->pc = 0x1CE174u;
label_1ce174:
    // 0x1ce174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce178: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE178u;
    {
        const bool branch_taken_0x1ce178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE178u;
        // 0x1ce17c: 0xae430294  sw          $v1, 0x294($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce178) {
            ctx->pc = 0x1CE198u;
            goto label_1ce198;
        }
    }
    ctx->pc = 0x1CE180u;
    // 0x1ce180: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE180u;
    {
        const bool branch_taken_0x1ce180 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE180u;
        // 0x1ce184: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce180) {
            ctx->pc = 0x1CE190u;
            goto label_1ce190;
        }
    }
    ctx->pc = 0x1CE188u;
    // 0x1ce188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE188u;
    {
        const bool branch_taken_0x1ce188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE188u;
        // 0x1ce18c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce188) {
            ctx->pc = 0x1CE194u;
            goto label_1ce194;
        }
    }
    ctx->pc = 0x1CE190u;
label_1ce190:
    // 0x1ce190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce194:
    // 0x1ce194: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ce194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ce198:
    // 0x1ce198: 0x8e440298  lw          $a0, 0x298($s2)
    ctx->pc = 0x1ce198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 664)));
label_1ce19c:
    // 0x1ce19c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE19Cu;
    {
        const bool branch_taken_0x1ce19c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce19c) {
            ctx->pc = 0x1CE1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE19Cu;
            // 0x1ce1a0: 0x8e4402f8  lw          $a0, 0x2F8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE1D4u;
            goto label_1ce1d4;
        }
    }
    ctx->pc = 0x1CE1A4u;
    // 0x1ce1a4: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CE1A4u;
    SET_GPR_U32(ctx, 31, 0x1CE1ACu);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CE1A4u, 0x1CE1ACu)) {
        return;
    }
    ctx->pc = 0x1CE1ACu;
label_1ce1ac:
    // 0x1ce1ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce1acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1B0u;
    {
        const bool branch_taken_0x1ce1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1B0u;
        // 0x1ce1b4: 0xae43029c  sw          $v1, 0x29C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1b0) {
            ctx->pc = 0x1CE1D0u;
            goto label_1ce1d0;
        }
    }
    ctx->pc = 0x1CE1B8u;
    // 0x1ce1b8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE1B8u;
    {
        const bool branch_taken_0x1ce1b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1B8u;
        // 0x1ce1bc: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1b8) {
            ctx->pc = 0x1CE1C8u;
            goto label_1ce1c8;
        }
    }
    ctx->pc = 0x1CE1C0u;
    // 0x1ce1c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE1C0u;
    {
        const bool branch_taken_0x1ce1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1C0u;
        // 0x1ce1c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1c0) {
            ctx->pc = 0x1CE1CCu;
            goto label_1ce1cc;
        }
    }
    ctx->pc = 0x1CE1C8u;
label_1ce1c8:
    // 0x1ce1c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce1cc:
    // 0x1ce1cc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ce1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ce1d0:
    // 0x1ce1d0: 0x8e4402f8  lw          $a0, 0x2F8($s2)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_1ce1d4:
    // 0x1ce1d4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE1D4u;
    {
        const bool branch_taken_0x1ce1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1D4u;
        // 0x1ce1d8: 0x265502c8  addiu       $s5, $s2, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1d4) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE1DCu;
    // 0x1ce1dc: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CE1DCu;
    SET_GPR_U32(ctx, 31, 0x1CE1E4u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CE1DCu, 0x1CE1E4u)) {
        return;
    }
    ctx->pc = 0x1CE1E4u;
label_1ce1e4:
    // 0x1ce1e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce1e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE1E8u;
    {
        const bool branch_taken_0x1ce1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1E8u;
        // 0x1ce1ec: 0xae4302fc  sw          $v1, 0x2FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1e8) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE1F0u;
    // 0x1ce1f0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE1F0u;
    {
        const bool branch_taken_0x1ce1f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F0u;
        // 0x1ce1f4: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1f0) {
            ctx->pc = 0x1CE200u;
            goto label_1ce200;
        }
    }
    ctx->pc = 0x1CE1F8u;
    // 0x1ce1f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE1F8u;
    {
        const bool branch_taken_0x1ce1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F8u;
        // 0x1ce1fc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1f8) {
            ctx->pc = 0x1CE204u;
            goto label_1ce204;
        }
    }
    ctx->pc = 0x1CE200u;
label_1ce200:
    // 0x1ce200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce204:
    // 0x1ce204: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ce204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1ce208: 0x265502c8  addiu       $s5, $s2, 0x2C8
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
label_1ce20c:
    // 0x1ce20c: 0x265102b4  addiu       $s1, $s2, 0x2B4
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 692));
    // 0x1ce210: 0x265002a0  addiu       $s0, $s2, 0x2A0
    ctx->pc = 0x1ce210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    // 0x1ce214: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ce218:
    // 0x1ce218: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce21c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ce220: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ce224: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE224u;
        // 0x1ce228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE258u;
            goto label_1ce258;
        }
    }
    ctx->pc = 0x1CE22Cu;
    // 0x1ce22c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CE22Cu;
    SET_GPR_U32(ctx, 31, 0x1CE234u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CE22Cu, 0x1CE234u)) {
        return;
    }
    ctx->pc = 0x1CE234u;
label_1ce234:
    // 0x1ce234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE238u;
    {
        const bool branch_taken_0x1ce238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE238u;
        // 0x1ce23c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce238) {
            ctx->pc = 0x1CE258u;
            goto label_1ce258;
        }
    }
    ctx->pc = 0x1CE240u;
    // 0x1ce240: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE240u;
    {
        const bool branch_taken_0x1ce240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE240u;
        // 0x1ce244: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce240) {
            ctx->pc = 0x1CE250u;
            goto label_1ce250;
        }
    }
    ctx->pc = 0x1CE248u;
    // 0x1ce248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE248u;
    {
        const bool branch_taken_0x1ce248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE248u;
        // 0x1ce24c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce248) {
            ctx->pc = 0x1CE254u;
            goto label_1ce254;
        }
    }
    ctx->pc = 0x1CE250u;
label_1ce250:
    // 0x1ce250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce254:
    // 0x1ce254: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ce254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ce258:
    // 0x1ce258: 0x661ffef  bgez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CE258u;
    {
        const bool branch_taken_0x1ce258 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1CE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE258u;
        // 0x1ce25c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce258) {
            ctx->pc = 0x1CE218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce218;
        }
    }
    ctx->pc = 0x1CE260u;
    // 0x1ce260: 0x265102d8  addiu       $s1, $s2, 0x2D8
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 728));
    // 0x1ce264: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1ce264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce268: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce26c: 0x0  nop
    ctx->pc = 0x1ce26cu;
    // NOP
label_1ce270:
    // 0x1ce270: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce274: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ce274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ce278: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ce27c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE27Cu;
    {
        const bool branch_taken_0x1ce27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE27Cu;
        // 0x1ce280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce27c) {
            ctx->pc = 0x1CE2B0u;
            goto label_1ce2b0;
        }
    }
    ctx->pc = 0x1CE284u;
    // 0x1ce284: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CE284u;
    SET_GPR_U32(ctx, 31, 0x1CE28Cu);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CE284u, 0x1CE28Cu)) {
        return;
    }
    ctx->pc = 0x1CE28Cu;
label_1ce28c:
    // 0x1ce28c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce28cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce290: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE290u;
    {
        const bool branch_taken_0x1ce290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE290u;
        // 0x1ce294: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce290) {
            ctx->pc = 0x1CE2B0u;
            goto label_1ce2b0;
        }
    }
    ctx->pc = 0x1CE298u;
    // 0x1ce298: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE298u;
    {
        const bool branch_taken_0x1ce298 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE298u;
        // 0x1ce29c: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce298) {
            ctx->pc = 0x1CE2A8u;
            goto label_1ce2a8;
        }
    }
    ctx->pc = 0x1CE2A0u;
    // 0x1ce2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE2A0u;
    {
        const bool branch_taken_0x1ce2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A0u;
        // 0x1ce2a4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2a0) {
            ctx->pc = 0x1CE2ACu;
            goto label_1ce2ac;
        }
    }
    ctx->pc = 0x1CE2A8u;
label_1ce2a8:
    // 0x1ce2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce2ac:
    // 0x1ce2ac: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ce2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ce2b0:
    // 0x1ce2b0: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CE2B0u;
    {
        const bool branch_taken_0x1ce2b0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1CE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2B0u;
        // 0x1ce2b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2b0) {
            ctx->pc = 0x1CE270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce270;
        }
    }
    ctx->pc = 0x1CE2B8u;
    // 0x1ce2b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ce2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce2bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ce2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce2c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce2c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce2c8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2cc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ce2ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2D4u;
        // 0x1ce2d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE2DCu;
    // 0x1ce2dc: 0x0  nop
    ctx->pc = 0x1ce2dcu;
    // NOP
    ctx->pc = 0x1ce2e0u;
}
