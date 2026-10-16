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

// Function: sub_001E7280
// Address: 0x1e7280 - 0x1e73b8
void sub_001E7280_0x1e7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7280_0x1e7280");
#endif

    switch (ctx->pc) {
        case 0x1e7368u: goto label_1e7368;
        case 0x1e7388u: goto label_1e7388;
        default: break;
    }

    ctx->pc = 0x1e7280u;

    // 0x1e7280: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e7284: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e7284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e7288: 0x8c47e76c  lw          $a3, -0x1894($v0)
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x33E76Cu));
    // 0x1e728c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1e728cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7294: 0x8cc2e774  lw          $v0, -0x188C($a2)
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E774u));
    // 0x1e7298: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e729c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e72a0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x1e72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e72a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e72a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e72a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72ac: 0x8ca3e778  lw          $v1, -0x1888($a1)
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961016)));
    // 0x1e72b0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e72b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e72b4: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1e72b8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1e72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e72bc: 0x8cc2e77c  lw          $v0, -0x1884($a2)
    ctx->pc = 0x1e72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961020)));
    // 0x1e72c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e72c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e72c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1e72c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72c8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1e72c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E72CCu;
    {
        const bool branch_taken_0x1e72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72CCu;
        // 0x1e72d0: 0x35102  srl         $t2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72cc) {
            ctx->pc = 0x1E72E4u;
            goto label_1e72e4;
        }
    }
    ctx->pc = 0x1E72D4u;
    // 0x1e72d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E72D4u;
    {
        const bool branch_taken_0x1e72d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72D4u;
        // 0x1e72d8: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72d4) {
            ctx->pc = 0x1E72E8u;
            goto label_1e72e8;
        }
    }
    ctx->pc = 0x1E72DCu;
    // 0x1e72dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e72e0: 0xac47e768  sw          $a3, -0x1898($v0)
    ctx->pc = 0x1e72e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x33E768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E768u, _value); } while (0);
label_1e72e4:
    // 0x1e72e4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1e72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e72e8:
    // 0x1e72e8: 0x8e25e774  lw          $a1, -0x188C($s1)
    ctx->pc = 0x1e72e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961012)));
    // 0x1e72ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e72f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e72f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e72f4: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x1e72f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x1e72f8: 0xad60e76c  sw          $zero, -0x1894($t3)
    ctx->pc = 0x1e72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294961004), GPR_U32(ctx, 0));
    // 0x1e72fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e72fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7300: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e7304: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1e7304u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1e7308: 0x8e23e774  lw          $v1, -0x188C($s1)
    ctx->pc = 0x1e7308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961012)));
    // 0x1e730c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1e730cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1e7310: 0x8d26e77c  lw          $a2, -0x1884($t1)
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961020)));
    // 0x1e7314: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7314u;
    {
        const bool branch_taken_0x1e7314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7314u;
        // 0x1e7318: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7314) {
            ctx->pc = 0x1E735Cu;
            goto label_1e735c;
        }
    }
    ctx->pc = 0x1E731Cu;
    // 0x1e731c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1e731cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1e7320: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x1e7320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1e7324: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x1e7324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1e7328: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1e7328u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1e732c: 0x8d23e77c  lw          $v1, -0x1884($t1)
    ctx->pc = 0x1e732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961020)));
    // 0x1e7330: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x1e7330u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x1e7334: 0x8d02e778  lw          $v0, -0x1888($t0)
    ctx->pc = 0x1e7334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961016)));
    // 0x1e7338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e7338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e733c: 0x8d03e778  lw          $v1, -0x1888($t0)
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961016)));
    // 0x1e7340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e7340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e7344: 0x8d02e778  lw          $v0, -0x1888($t0)
    ctx->pc = 0x1e7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961016)));
    // 0x1e7348: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e7348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e734c: 0x8d03e778  lw          $v1, -0x1888($t0)
    ctx->pc = 0x1e734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961016)));
    // 0x1e7350: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1e7350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1e7354: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7354u;
    {
        const bool branch_taken_0x1e7354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7354u;
        // 0x1e7358: 0xad20e77c  sw          $zero, -0x1884($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294961020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7354) {
            ctx->pc = 0x1E73A4u;
            goto label_1e73a4;
        }
    }
    ctx->pc = 0x1E735Cu;
label_1e735c:
    // 0x1e735c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1e735cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1e7360: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x1E7360u;
    SET_GPR_U32(ctx, 31, 0x1E7368u);
    ctx->pc = 0x1E7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7360u;
    // 0x1e7364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x1E7360u, 0x1E7368u)) {
        return;
    }
    ctx->pc = 0x1E7368u;
label_1e7368:
    // 0x1e7368: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7368u;
    {
        const bool branch_taken_0x1e7368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7368u;
        // 0x1e736c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7368) {
            ctx->pc = 0x1E73A4u;
            goto label_1e73a4;
        }
    }
    ctx->pc = 0x1E7370u;
    // 0x1e7370: 0x8e26e774  lw          $a2, -0x188C($s1)
    ctx->pc = 0x1e7370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961012)));
    // 0x1e7374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7378: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7378u;
    {
        const bool branch_taken_0x1e7378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7378u;
        // 0x1e737c: 0x8c43412c  lw          $v1, 0x412C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7378) {
            ctx->pc = 0x1E73A0u;
            goto label_1e73a0;
        }
    }
    ctx->pc = 0x1E7380u;
    // 0x1e7380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7384: 0x0  nop
    ctx->pc = 0x1e7384u;
    // NOP
label_1e7388:
    // 0x1e7388: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1e7388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e738c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e7390: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e7390u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1e7394: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1e7398: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7398u;
    {
        const bool branch_taken_0x1e7398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7398u;
        // 0x1e739c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7398) {
            ctx->pc = 0x1E7388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7388;
        }
    }
    ctx->pc = 0x1E73A0u;
label_1e73a0:
    // 0x1e73a0: 0xac83412c  sw          $v1, 0x412C($a0)
    ctx->pc = 0x1e73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16684), GPR_U32(ctx, 3));
label_1e73a4:
    // 0x1e73a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e73a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e73a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e73a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e73ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e73acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e73b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73B0u;
        // 0x1e73b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73B8u;
}
