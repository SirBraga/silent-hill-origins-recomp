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

// Function: sub_0029FB18
// Address: 0x29fb18 - 0x29fc50
void sub_0029FB18_0x29fb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FB18_0x29fb18");
#endif

    switch (ctx->pc) {
        case 0x29fb78u: goto label_29fb78;
        case 0x29fba8u: goto label_29fba8;
        case 0x29fbc8u: goto label_29fbc8;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fc08u: goto label_29fc08;
        case 0x29fc20u: goto label_29fc20;
        default: break;
    }

    ctx->pc = 0x29fb18u;

    // 0x29fb18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29fb1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29fb20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29fb24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29fb2c: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x29fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x29fb30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29fb34: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29fb34u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29fb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fb3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29fb40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29fb48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29fb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29fb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29fb50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29fb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb54: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29FB54u;
    {
        const bool branch_taken_0x29fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb54) {
            ctx->pc = 0x29FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FB54u;
            // 0x29fb58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FB5Cu;
            goto label_29fb5c;
        }
    }
    ctx->pc = 0x29FB5Cu;
label_29fb5c:
    // 0x29fb5c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29fb5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb60: 0x1812  mflo        $v1
    ctx->pc = 0x29fb60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x29fb64: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x29fb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fb68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29FB68u;
    {
        const bool branch_taken_0x29fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB68u;
        // 0x29fb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb68) {
            ctx->pc = 0x29FB9Cu;
            goto label_29fb9c;
        }
    }
    ctx->pc = 0x29FB70u;
    // 0x29fb70: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x29fb70u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29fb74: 0x0  nop
    ctx->pc = 0x29fb74u;
    // NOP
label_29fb78:
    // 0x29fb78: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x29fb78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x29fb7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fb80: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x29fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fb84: 0x0  nop
    ctx->pc = 0x29fb84u;
    // NOP
    // 0x29fb88: 0x0  nop
    ctx->pc = 0x29fb88u;
    // NOP
    // 0x29fb8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29FB8Cu;
    {
        const bool branch_taken_0x29fb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fb8c) {
            ctx->pc = 0x29FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fb78;
        }
    }
    ctx->pc = 0x29FB94u;
    // 0x29fb94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29FB94u;
    {
        const bool branch_taken_0x29fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb94) {
            ctx->pc = 0x29FBA0u;
            goto label_29fba0;
        }
    }
    ctx->pc = 0x29FB9Cu;
label_29fb9c:
    // 0x29fb9c: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x29fb9cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_29fba0:
    // 0x29fba0: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x29FBA0u;
    SET_GPR_U32(ctx, 31, 0x29FBA8u);
    ctx->pc = 0x29FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBA0u;
    // 0x29fba4: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x29FBA0u, 0x29FBA8u)) {
        return;
    }
    ctx->pc = 0x29FBA8u;
label_29fba8:
    // 0x29fba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fbb0: 0xac950014  sw          $s5, 0x14($a0)
    ctx->pc = 0x29fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    // 0x29fbb4: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x29FBB4u;
    {
        const bool branch_taken_0x29fbb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBB4u;
        // 0x29fbb8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbb4) {
            ctx->pc = 0x29FBF4u;
            goto label_29fbf4;
        }
    }
    ctx->pc = 0x29FBBCu;
    // 0x29fbbc: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x29fbc0: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fbc4: 0x0  nop
    ctx->pc = 0x29fbc4u;
    // NOP
label_29fbc8:
    // 0x29fbc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x29fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29fbcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29fbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29fbd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29fbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29fbd4: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x29FBD4u;
    SET_GPR_U32(ctx, 31, 0x29FBDCu);
    ctx->pc = 0x29FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBD4u;
    // 0x29fbd8: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x29FBD4u, 0x29FBDCu)) {
        return;
    }
    ctx->pc = 0x29FBDCu;
label_29fbdc:
    // 0x29fbdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbe0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x29fbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29fbe4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29FBE4u;
    {
        const bool branch_taken_0x29fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fbe4) {
            ctx->pc = 0x29FBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FBE4u;
            // 0x29fbe8: 0x82060000  lb          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fbc8;
        }
    }
    ctx->pc = 0x29FBECu;
    // 0x29fbec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29FBECu;
    {
        const bool branch_taken_0x29fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBECu;
        // 0x29fbf0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbec) {
            ctx->pc = 0x29FBF8u;
            goto label_29fbf8;
        }
    }
    ctx->pc = 0x29FBF4u;
label_29fbf4:
    // 0x29fbf4: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x29fbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_29fbf8:
    // 0x29fbf8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x29fbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fbfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29FBFCu;
    {
        const bool branch_taken_0x29fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBFCu;
        // 0x29fc00: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbfc) {
            ctx->pc = 0x29FC28u;
            goto label_29fc28;
        }
    }
    ctx->pc = 0x29FC04u;
    // 0x29fc04: 0x0  nop
    ctx->pc = 0x29fc04u;
    // NOP
label_29fc08:
    // 0x29fc08: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fc0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x29fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29fc10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29fc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29fc14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29fc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x29fc18: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x29FC18u;
    SET_GPR_U32(ctx, 31, 0x29FC20u);
    ctx->pc = 0x29FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC18u;
    // 0x29fc1c: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x29FC18u, 0x29FC20u)) {
        return;
    }
    ctx->pc = 0x29FC20u;
label_29fc20:
    // 0x29fc20: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29FC20u;
    {
        const bool branch_taken_0x29fc20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC20u;
        // 0x29fc24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc20) {
            ctx->pc = 0x29FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc08;
        }
    }
    ctx->pc = 0x29FC28u;
label_29fc28:
    // 0x29fc28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29fc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fc2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29fc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29fc30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fc34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29fc34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fc38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29fc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fc3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29fc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fc40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29fc40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fc44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x29FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC48u;
        // 0x29fc4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FC50u;
}
