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

// Function: sub_00304120
// Address: 0x304120 - 0x304258
void sub_00304120_0x304120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304120_0x304120");
#endif

    switch (ctx->pc) {
        case 0x30413cu: goto label_30413c;
        case 0x304188u: goto label_304188;
        case 0x3041d0u: goto label_3041d0;
        case 0x3041e8u: goto label_3041e8;
        case 0x304210u: goto label_304210;
        case 0x30421cu: goto label_30421c;
        default: break;
    }

    ctx->pc = 0x304120u;

    // 0x304120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x304124: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x304124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x304128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30412c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304130: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x304130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x304134: 0xc0c0f18  jal         func_303C60
    ctx->pc = 0x304134u;
    SET_GPR_U32(ctx, 31, 0x30413Cu);
    ctx->pc = 0x304138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304134u;
    // 0x304138: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303C60u, 0x304134u, 0x30413Cu)) {
        return;
    }
    ctx->pc = 0x30413Cu;
label_30413c:
    // 0x30413c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x30413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x304140: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x304140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x304144: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x304144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x304148: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x304148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30414c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304150: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x304154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x304154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304158: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304158u;
    {
        const bool branch_taken_0x304158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304158u;
        // 0x30415c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304158) {
            ctx->pc = 0x304170u;
            goto label_304170;
        }
    }
    ctx->pc = 0x304160u;
    // 0x304160: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x304160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x304164: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x304164u;
    {
        const bool branch_taken_0x304164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304164u;
        // 0x304168: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304164) {
            ctx->pc = 0x304208u;
            goto label_304208;
        }
    }
    ctx->pc = 0x30416Cu;
    // 0x30416c: 0x0  nop
    ctx->pc = 0x30416cu;
    // NOP
label_304170:
    // 0x304170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x304170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304178: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x304178u;
    {
        const bool branch_taken_0x304178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304178u;
        // 0x30417c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304178) {
            ctx->pc = 0x3041C4u;
            goto label_3041c4;
        }
    }
    ctx->pc = 0x304180u;
    // 0x304180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304188:
    // 0x304188: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x304188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30418c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30418Cu;
    {
        const bool branch_taken_0x30418c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x304190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30418Cu;
        // 0x304190: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30418c) {
            ctx->pc = 0x3041B8u;
            goto label_3041b8;
        }
    }
    ctx->pc = 0x304194u;
    // 0x304194: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x304198: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30419c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x30419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3041a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3041a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3041a4: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3041A4u;
    {
        const bool branch_taken_0x3041a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3041a4) {
            ctx->pc = 0x3041A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3041A4u;
            // 0x3041a8: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3041BCu;
            goto label_3041bc;
        }
    }
    ctx->pc = 0x3041ACu;
    // 0x3041ac: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x3041acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x3041b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3041B0u;
    {
        const bool branch_taken_0x3041b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041B0u;
        // 0x3041b4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041b0) {
            ctx->pc = 0x304208u;
            goto label_304208;
        }
    }
    ctx->pc = 0x3041B8u;
label_3041b8:
    // 0x3041b8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3041b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3041bc:
    // 0x3041bc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3041BCu;
    {
        const bool branch_taken_0x3041bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041BCu;
        // 0x3041c0: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041bc) {
            ctx->pc = 0x304188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304188;
        }
    }
    ctx->pc = 0x3041C4u;
label_3041c4:
    // 0x3041c4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x3041c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3041c8: 0xc0c0f4c  jal         func_303D30
    ctx->pc = 0x3041C8u;
    SET_GPR_U32(ctx, 31, 0x3041D0u);
    ctx->pc = 0x3041CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041C8u;
    // 0x3041cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303D30u, 0x3041C8u, 0x3041D0u)) {
        return;
    }
    ctx->pc = 0x3041D0u;
label_3041d0:
    // 0x3041d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3041d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3041d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3041D4u;
    {
        const bool branch_taken_0x3041d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041D4u;
        // 0x3041d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041d4) {
            ctx->pc = 0x304238u;
            goto label_304238;
        }
    }
    ctx->pc = 0x3041DCu;
    // 0x3041dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3041dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3041e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3041e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3041e4: 0x0  nop
    ctx->pc = 0x3041e4u;
    // NOP
label_3041e8:
    // 0x3041e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3041ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3041ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3041f0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3041f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3041f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3041f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3041f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3041f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3041fc: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3041FCu;
    {
        const bool branch_taken_0x3041fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x304200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041FCu;
        // 0x304200: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041fc) {
            ctx->pc = 0x304224u;
            goto label_304224;
        }
    }
    ctx->pc = 0x304204u;
    // 0x304204: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x304204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_304208:
    // 0x304208: 0xc092848  jal         func_24A120
    ctx->pc = 0x304208u;
    SET_GPR_U32(ctx, 31, 0x304210u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x304208u, 0x304210u)) {
        return;
    }
    ctx->pc = 0x304210u;
label_304210:
    // 0x304210: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304214: 0xc09281a  jal         func_24A068
    ctx->pc = 0x304214u;
    SET_GPR_U32(ctx, 31, 0x30421Cu);
    ctx->pc = 0x304218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304214u;
    // 0x304218: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304214u, 0x30421Cu)) {
        return;
    }
    ctx->pc = 0x30421Cu;
label_30421c:
    // 0x30421c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30421Cu;
    {
        const bool branch_taken_0x30421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30421Cu;
        // 0x304220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30421c) {
            ctx->pc = 0x304240u;
            goto label_304240;
        }
    }
    ctx->pc = 0x304224u;
label_304224:
    // 0x304224: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x304224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304228: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x304228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30422c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30422cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304230: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x304230u;
    {
        const bool branch_taken_0x304230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304230u;
        // 0x304234: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304230) {
            ctx->pc = 0x3041E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3041e8;
        }
    }
    ctx->pc = 0x304238u;
label_304238:
    // 0x304238: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x304238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x30423c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30423cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304240:
    // 0x304240: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304248: 0x3e00008  jr          $ra
    ctx->pc = 0x304248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304248u;
        // 0x30424c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304250u;
    // 0x304250: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x304250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x304254: 0x0  nop
    ctx->pc = 0x304254u;
    // NOP
    ctx->pc = 0x304258u;
}
