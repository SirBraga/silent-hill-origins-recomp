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

// Function: sub_0019D138
// Address: 0x19d138 - 0x19d260
void sub_0019D138_0x19d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D138_0x19d138");
#endif

    switch (ctx->pc) {
        case 0x19d178u: goto label_19d178;
        case 0x19d188u: goto label_19d188;
        case 0x19d1acu: goto label_19d1ac;
        case 0x19d1c0u: goto label_19d1c0;
        case 0x19d1e4u: goto label_19d1e4;
        case 0x19d208u: goto label_19d208;
        case 0x19d22cu: goto label_19d22c;
        default: break;
    }

    ctx->pc = 0x19d138u;

    // 0x19d138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d13c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19d140: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19d144: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x19d148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d14c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19d150: 0x8e049080  lw          $a0, -0x6F80($s0)
    ctx->pc = 0x19d150u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339080u));
    // 0x19d154: 0x26129080  addiu       $s2, $s0, -0x6F80
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938752));
    // 0x19d158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d15c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x19d160: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x19d160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d164: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19d168: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x19d168u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x19d16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d170: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19D170u;
    SET_GPR_U32(ctx, 31, 0x19D178u);
    ctx->pc = 0x19D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D170u;
    // 0x19d174: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19D170u, 0x19D178u)) {
        return;
    }
    ctx->pc = 0x19D178u;
label_19d178:
    // 0x19d178: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x19D178u;
    {
        const bool branch_taken_0x19d178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D178u;
        // 0x19d17c: 0xae009080  sw          $zero, -0x6F80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d178) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D180u;
    // 0x19d180: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x19D180u;
    SET_GPR_U32(ctx, 31, 0x19D188u);
    ctx->pc = 0x19D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D180u;
    // 0x19d184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x19D180u, 0x19D188u)) {
        return;
    }
    ctx->pc = 0x19D188u;
label_19d188:
    // 0x19d188: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x19D188u;
    {
        const bool branch_taken_0x19d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d188) {
            ctx->pc = 0x19D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D188u;
            // 0x19d18c: 0x8e84907c  lw          $a0, -0x6F84($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938748)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D210u;
            goto label_19d210;
        }
    }
    ctx->pc = 0x19D190u;
    // 0x19d190: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d194: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19D194u;
    {
        const bool branch_taken_0x19d194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D194u;
        // 0x19d198: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d194) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D19Cu;
    // 0x19d19c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D19Cu;
    {
        const bool branch_taken_0x19d19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D19Cu;
        // 0x19d1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d19c) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D1A4u;
    // 0x19d1a4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x19D1A4u;
    SET_GPR_U32(ctx, 31, 0x19D1ACu);
    ctx->pc = 0x19D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1A4u;
    // 0x19d1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x19D1A4u, 0x19D1ACu)) {
        return;
    }
    ctx->pc = 0x19D1ACu;
label_19d1ac:
    // 0x19d1ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19d1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1b4: 0x2471a4e0  addiu       $s1, $v1, -0x5B20
    ctx->pc = 0x19d1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943968));
    // 0x19d1b8: 0xae629080  sw          $v0, -0x6F80($s3)
    ctx->pc = 0x19d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294938752), GPR_U32(ctx, 2));
    // 0x19d1bc: 0x0  nop
    ctx->pc = 0x19d1bcu;
    // NOP
label_19d1c0:
    // 0x19d1c0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d1c4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D1C4u;
    {
        const bool branch_taken_0x19d1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1C4u;
        // 0x19d1c8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1c4) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D1CCu;
    // 0x19d1cc: 0x0  nop
    ctx->pc = 0x19d1ccu;
    // NOP
    // 0x19d1d0: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19D1D0u;
    {
        const bool branch_taken_0x19d1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d1d0) {
            ctx->pc = 0x19D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1D0u;
            // 0x19d1d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1c0;
        }
    }
    ctx->pc = 0x19D1D8u;
    // 0x19d1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1dc: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x19D1DCu;
    SET_GPR_U32(ctx, 31, 0x19D1E4u);
    ctx->pc = 0x19D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1DCu;
    // 0x19d1e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x19D1DCu, 0x19D1E4u)) {
        return;
    }
    ctx->pc = 0x19D1E4u;
label_19d1e4:
    // 0x19d1e4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D1E4u;
    {
        const bool branch_taken_0x19d1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1e4) {
            ctx->pc = 0x19D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1E4u;
            // 0x19d1e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1c0;
        }
    }
    ctx->pc = 0x19D1ECu;
    // 0x19d1ec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x19d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d1f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19d1f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d1f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D1F8u;
    {
        const bool branch_taken_0x19d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1f8) {
            ctx->pc = 0x19D1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1F8u;
            // 0x19d1fc: 0x8e84907c  lw          $a0, -0x6F84($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938748)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D210u;
            goto label_19d210;
        }
    }
    ctx->pc = 0x19D200u;
    // 0x19d200: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19D200u;
    SET_GPR_U32(ctx, 31, 0x19D208u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19D200u, 0x19D208u)) {
        return;
    }
    ctx->pc = 0x19D208u;
label_19d208:
    // 0x19d208: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19d208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_19d20c:
    // 0x19d20c: 0x8e84907c  lw          $a0, -0x6F84($s4)
    ctx->pc = 0x19d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938748)));
label_19d210:
    // 0x19d210: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D210u;
    {
        const bool branch_taken_0x19d210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D210u;
        // 0x19d214: 0xaea09084  sw          $zero, -0x6F7C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294938756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d210) {
            ctx->pc = 0x19D238u;
            goto label_19d238;
        }
    }
    ctx->pc = 0x19D218u;
    // 0x19d218: 0x8e659080  lw          $a1, -0x6F80($s3)
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938752)));
    // 0x19d21c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D21Cu;
    {
        const bool branch_taken_0x19d21c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D21Cu;
        // 0x19d220: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d21c) {
            ctx->pc = 0x19D23Cu;
            goto label_19d23c;
        }
    }
    ctx->pc = 0x19D224u;
    // 0x19d224: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x19D224u;
    SET_GPR_U32(ctx, 31, 0x19D22Cu);
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x19D224u, 0x19D22Cu)) {
        return;
    }
    ctx->pc = 0x19D22Cu;
label_19d22c:
    // 0x19d22c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D22Cu;
    {
        const bool branch_taken_0x19d22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D22Cu;
        // 0x19d230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d22c) {
            ctx->pc = 0x19D238u;
            goto label_19d238;
        }
    }
    ctx->pc = 0x19D234u;
    // 0x19d234: 0xaea29084  sw          $v0, -0x6F7C($s5)
    ctx->pc = 0x19d234u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294938756), GPR_U32(ctx, 2));
label_19d238:
    // 0x19d238: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19d238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19d23c:
    // 0x19d23c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19d23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d240: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19d240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d248: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19d248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d24c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19d24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d254: 0x3e00008  jr          $ra
    ctx->pc = 0x19D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D254u;
        // 0x19d258: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D25Cu;
    // 0x19d25c: 0x0  nop
    ctx->pc = 0x19d25cu;
    // NOP
    ctx->pc = 0x19d260u;
}
