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

// Function: sub_0031FFD8
// Address: 0x31ffd8 - 0x320110
void sub_0031FFD8_0x31ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FFD8_0x31ffd8");
#endif

    switch (ctx->pc) {
        case 0x320038u: goto label_320038;
        case 0x32005cu: goto label_32005c;
        case 0x320080u: goto label_320080;
        case 0x320098u: goto label_320098;
        case 0x3200c0u: goto label_3200c0;
        case 0x3200dcu: goto label_3200dc;
        default: break;
    }

    ctx->pc = 0x31ffd8u;

    // 0x31ffd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31ffdc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x31ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x31ffe0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x31ffe4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31ffe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffe8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31ffec: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x31ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x31fff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31fff4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31fff4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31fff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31fffc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x320000: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x320000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320004: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x320004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x320008: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x320008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32000c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x320010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320014: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x320014u;
    {
        const bool branch_taken_0x320014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320014) {
            ctx->pc = 0x320018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320014u;
            // 0x320018: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32001Cu;
            goto label_32001c;
        }
    }
    ctx->pc = 0x32001Cu;
label_32001c:
    // 0x32001c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32001cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320020: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x320020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320024: 0x1812  mflo        $v1
    ctx->pc = 0x320024u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x320028: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x320028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32002c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32002Cu;
    {
        const bool branch_taken_0x32002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32002Cu;
        // 0x320030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32002c) {
            ctx->pc = 0x320050u;
            goto label_320050;
        }
    }
    ctx->pc = 0x320034u;
    // 0x320034: 0x0  nop
    ctx->pc = 0x320034u;
    // NOP
label_320038:
    // 0x320038: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x320038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x32003c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x32003cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x320040: 0x0  nop
    ctx->pc = 0x320040u;
    // NOP
    // 0x320044: 0x0  nop
    ctx->pc = 0x320044u;
    // NOP
    // 0x320048: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320048u;
    {
        const bool branch_taken_0x320048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320048u;
        // 0x32004c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320048) {
            ctx->pc = 0x320038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320038;
        }
    }
    ctx->pc = 0x320050u;
label_320050:
    // 0x320050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320054: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x320054u;
    SET_GPR_U32(ctx, 31, 0x32005Cu);
    ctx->pc = 0x320058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320054u;
    // 0x320058: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x320054u, 0x32005Cu)) {
        return;
    }
    ctx->pc = 0x32005Cu;
label_32005c:
    // 0x32005c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32005cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320064: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x320064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x320068: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x320068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x32006c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32006Cu;
    {
        const bool branch_taken_0x32006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32006Cu;
        // 0x320070: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32006c) {
            ctx->pc = 0x3200B0u;
            goto label_3200b0;
        }
    }
    ctx->pc = 0x320074u;
    // 0x320074: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x320074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x320078: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x320078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32007c: 0x0  nop
    ctx->pc = 0x32007cu;
    // NOP
label_320080:
    // 0x320080: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320084: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x320084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x320088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32008c: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x32008cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x320090: 0xc0c7fb4  jal         func_31FED0
    ctx->pc = 0x320090u;
    SET_GPR_U32(ctx, 31, 0x320098u);
    ctx->pc = 0x320094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320090u;
    // 0x320094: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FED0u, 0x320090u, 0x320098u)) {
        return;
    }
    ctx->pc = 0x320098u;
label_320098:
    // 0x320098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32009c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x32009cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3200a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3200A0u;
    {
        const bool branch_taken_0x3200a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3200a0) {
            ctx->pc = 0x3200A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3200A0u;
            // 0x3200a4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320080;
        }
    }
    ctx->pc = 0x3200A8u;
    // 0x3200a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3200A8u;
    {
        const bool branch_taken_0x3200a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200A8u;
        // 0x3200ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200a8) {
            ctx->pc = 0x3200B4u;
            goto label_3200b4;
        }
    }
    ctx->pc = 0x3200B0u;
label_3200b0:
    // 0x3200b0: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_3200b4:
    // 0x3200b4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3200b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3200b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3200B8u;
    {
        const bool branch_taken_0x3200b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200B8u;
        // 0x3200bc: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200b8) {
            ctx->pc = 0x3200E4u;
            goto label_3200e4;
        }
    }
    ctx->pc = 0x3200C0u;
label_3200c0:
    // 0x3200c0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x3200c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3200c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3200c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3200c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3200c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3200cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3200d0: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x3200d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3200d4: 0xc0c7fb4  jal         func_31FED0
    ctx->pc = 0x3200D4u;
    SET_GPR_U32(ctx, 31, 0x3200DCu);
    ctx->pc = 0x3200D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200D4u;
    // 0x3200d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FED0u, 0x3200D4u, 0x3200DCu)) {
        return;
    }
    ctx->pc = 0x3200DCu;
label_3200dc:
    // 0x3200dc: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3200DCu;
    {
        const bool branch_taken_0x3200dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3200E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200DCu;
        // 0x3200e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200dc) {
            ctx->pc = 0x3200C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3200c0;
        }
    }
    ctx->pc = 0x3200E4u;
label_3200e4:
    // 0x3200e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3200e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3200e8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3200e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3200ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3200ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3200f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3200f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3200f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3200f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3200f8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3200f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3200fc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3200fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320104: 0x3e00008  jr          $ra
    ctx->pc = 0x320104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320104u;
        // 0x320108: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32010Cu;
    // 0x32010c: 0x0  nop
    ctx->pc = 0x32010cu;
    // NOP
    ctx->pc = 0x320110u;
}
