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

// Function: sub_002B80A0
// Address: 0x2b80a0 - 0x2b81f0
void sub_002B80A0_0x2b80a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B80A0_0x2b80a0");
#endif

    switch (ctx->pc) {
        case 0x2b8140u: goto label_2b8140;
        case 0x2b81b0u: goto label_2b81b0;
        default: break;
    }

    ctx->pc = 0x2b80a0u;

    // 0x2b80a0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2b80a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80a4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b80a8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2b80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2b80ac: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x2b80acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b80b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b80b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b80b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b80bc: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x2b80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2b80c0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2b80c4: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x2b80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x2b80c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b80cc: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x2b80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x2b80d0: 0x1120002b  beqz        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B80D0u;
    {
        const bool branch_taken_0x2b80d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80D0u;
        // 0x2b80d4: 0xad460004  sw          $a2, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80d0) {
            ctx->pc = 0x2B8180u;
            goto label_2b8180;
        }
    }
    ctx->pc = 0x2B80D8u;
    // 0x2b80d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b80d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80dc: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B80DCu;
    {
        const bool branch_taken_0x2b80dc = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2B80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80DCu;
        // 0x2b80e0: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80dc) {
            ctx->pc = 0x2B8120u;
            goto label_2b8120;
        }
    }
    ctx->pc = 0x2B80E4u;
    // 0x2b80e4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B80E4u;
    {
        const bool branch_taken_0x2b80e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80E4u;
        // 0x2b80e8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80e4) {
            ctx->pc = 0x2B813Cu;
            goto label_2b813c;
        }
    }
    ctx->pc = 0x2B80ECu;
    // 0x2b80ec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B80ECu;
    {
        const bool branch_taken_0x2b80ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b80ec) {
            ctx->pc = 0x2B80F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80ECu;
            // 0x2b80f0: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8124u;
            goto label_2b8124;
        }
    }
    ctx->pc = 0x2B80F4u;
    // 0x2b80f4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b80f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b80f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B80F8u;
    {
        const bool branch_taken_0x2b80f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b80f8) {
            ctx->pc = 0x2B80FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80F8u;
            // 0x2b80fc: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8114u;
            goto label_2b8114;
        }
    }
    ctx->pc = 0x2B8100u;
    // 0x2b8100: 0xa5400010  sh          $zero, 0x10($t2)
    ctx->pc = 0x2b8100u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b8104: 0x25430018  addiu       $v1, $t2, 0x18
    ctx->pc = 0x2b8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x2b8108: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x2b8108u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b810c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8110: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2b8110u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_2b8114:
    // 0x2b8114: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x2b8114u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8118: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b8118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b811c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b811cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2b8120:
    // 0x2b8120: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2b8120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_2b8124:
    // 0x2b8124: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x2b8124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8128: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b8128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b812c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x2b812cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2b8130: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B8130u;
    {
        const bool branch_taken_0x2b8130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8130u;
        // 0x2b8134: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8130) {
            ctx->pc = 0x2B8180u;
            goto label_2b8180;
        }
    }
    ctx->pc = 0x2B8138u;
    // 0x2b8138: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b8138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b813c:
    // 0x2b813c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b813cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8140:
    // 0x2b8140: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x2b8140u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8144: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b8148: 0xa4a70002  sh          $a3, 0x2($a1)
    ctx->pc = 0x2b8148u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b814c: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x2b814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2b8150: 0xa5020008  sh          $v0, 0x8($t0)
    ctx->pc = 0x2b8150u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8154: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x2b8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2b8158: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x2b8158u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b815c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b815cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8160: 0xa5030010  sh          $v1, 0x10($t0)
    ctx->pc = 0x2b8160u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8164: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x2b8164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2b8168: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x2b8168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b816c: 0xa5040018  sh          $a0, 0x18($t0)
    ctx->pc = 0x2b816cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8170: 0xa4a4001a  sh          $a0, 0x1A($a1)
    ctx->pc = 0x2b8170u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8174: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2b8174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2b8178: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B8178u;
    {
        const bool branch_taken_0x2b8178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8178u;
        // 0x2b817c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8178) {
            ctx->pc = 0x2B8140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8140;
        }
    }
    ctx->pc = 0x2B8180u;
label_2b8180:
    // 0x2b8180: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b8180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b8184: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2b8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2b8188: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2b8188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b818c: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x2b818cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b8190: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8190u;
    {
        const bool branch_taken_0x2b8190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8190u;
        // 0x2b8194: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8190) {
            ctx->pc = 0x2B81CCu;
            goto label_2b81cc;
        }
    }
    ctx->pc = 0x2B8198u;
    // 0x2b8198: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2b8198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2b819c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2b81a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b81a4: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2b81a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b81ac: 0x0  nop
    ctx->pc = 0x2b81acu;
    // NOP
label_2b81b0:
    // 0x2b81b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b81b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81b4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2b81b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b81b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b81b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b81c0: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2b81c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b81c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B81C4u;
    {
        const bool branch_taken_0x2b81c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81C4u;
        // 0x2b81c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81c4) {
            ctx->pc = 0x2B81B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b81b0;
        }
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2b81d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2b81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b81d4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2b81d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b81d8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2b81d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b81e0: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x2b81e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b81e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B81E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81E4u;
        // 0x2b81e8: 0xa549000c  sh          $t1, 0xC($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B81E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B81ECu;
    // 0x2b81ec: 0x0  nop
    ctx->pc = 0x2b81ecu;
    // NOP
    ctx->pc = 0x2b81f0u;
}
