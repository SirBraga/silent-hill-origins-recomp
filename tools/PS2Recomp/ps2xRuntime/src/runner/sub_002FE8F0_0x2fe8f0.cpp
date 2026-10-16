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

// Function: sub_002FE8F0
// Address: 0x2fe8f0 - 0x2fed78
void sub_002FE8F0_0x2fe8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE8F0_0x2fe8f0");
#endif

    ctx->pc = 0x2fe8f0u;

    // 0x2fe8f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fe8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fe8f4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x2fe8f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8f8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2fe8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2fe8fc: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x2fe8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x2fe900: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2fe900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2fe904: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2fe904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe908: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2fe908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2fe90c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x2fe90cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe910: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2fe910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2fe914: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fe914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe918: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2fe918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2fe91c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2fe91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe920: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2fe920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2fe924: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2fe924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe928: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2fe928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2fe92c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2fe92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2fe930: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2fe930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2fe934: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x2fe934u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x2fe938: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2fe938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2fe93c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2fe93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2fe940: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x2fe940u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fe944: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x2fe944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x2fe948: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x2fe948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x2fe94c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2fe94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2fe950: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x2fe950u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x2fe954: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2fe954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2fe958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fe958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fe95c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2fe95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2fe960: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x2fe960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x2fe964: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x2fe964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe968: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x2fe968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2fe96c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2fe96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fe970: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x2fe970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fe974: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x2fe974u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fe978: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x2fe978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2fe97c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x2fe97cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2fe980: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x2fe980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x2fe984: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2fe984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2fe988: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x2fe988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe98c: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE98Cu;
    {
        const bool branch_taken_0x2fe98c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE98Cu;
        // 0x2fe990: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe98c) {
            ctx->pc = 0x2FE9A4u;
            goto label_2fe9a4;
        }
    }
    ctx->pc = 0x2FE994u;
    // 0x2fe994: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x2fe998: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2fe998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2fe99c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE99Cu;
    {
        const bool branch_taken_0x2fe99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE99Cu;
        // 0x2fe9a0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe99c) {
            ctx->pc = 0x2FE9ACu;
            goto label_2fe9ac;
        }
    }
    ctx->pc = 0x2FE9A4u;
label_2fe9a4:
    // 0x2fe9a4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x2fe9a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x2fe9a8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2fe9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2fe9ac:
    // 0x2fe9ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fe9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fe9b0: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x2fe9b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe9b4: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x2fe9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fe9b8: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x2fe9b8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x2fe9bc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2fe9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe9c0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2fe9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe9c4: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x2fe9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fe9c8: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x2fe9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2fe9cc: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x2fe9ccu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x2fe9d0: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x2fe9d4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2fe9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2fe9d8: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2fe9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fe9dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe9e0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2fe9e4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2fe9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2fe9e8: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x2fe9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2fe9ec: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2fe9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fe9f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fe9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2fe9f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fe9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fe9f8: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x2fe9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2fe9fc: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x2fe9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2fea00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2fea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fea04: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x2fea04u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2fea08: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x2fea08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fea0c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x2fea0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2fea10: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2fea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fea14: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x2fea14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x2fea18: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2fea1c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2fea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fea20: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2fea24: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x2fea24u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2fea28: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2fea28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea2c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x2fea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x2fea30: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x2fea30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2fea34: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x2fea34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x2fea38: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2FEA38u;
    {
        const bool branch_taken_0x2fea38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA38u;
        // 0x2fea3c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea38) {
            ctx->pc = 0x2FEA78u;
            goto label_2fea78;
        }
    }
    ctx->pc = 0x2FEA40u;
    // 0x2fea40: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x2fea40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea44: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2fea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2fea48: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2fea48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fea4c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FEA4Cu;
    {
        const bool branch_taken_0x2fea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fea4c) {
            ctx->pc = 0x2FEA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEA4Cu;
            // 0x2fea50: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAACu;
            goto label_2feaac;
        }
    }
    ctx->pc = 0x2FEA54u;
    // 0x2fea54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2fea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fea58: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x2fea58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea5c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x2fea5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fea64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fea68: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x2fea68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2fea6c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x2fea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x2fea70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2FEA70u;
    {
        const bool branch_taken_0x2fea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA70u;
        // 0x2fea74: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea70) {
            ctx->pc = 0x2FEAB0u;
            goto label_2feab0;
        }
    }
    ctx->pc = 0x2FEA78u;
label_2fea78:
    // 0x2fea78: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x2fea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea7c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2fea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2fea80: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2fea80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fea84: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEA84u;
    {
        const bool branch_taken_0x2fea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fea84) {
            ctx->pc = 0x2FEA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEA84u;
            // 0x2fea88: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAACu;
            goto label_2feaac;
        }
    }
    ctx->pc = 0x2FEA8Cu;
    // 0x2fea8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2fea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fea90: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x2fea90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea94: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x2fea94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fea98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fea9c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x2fea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2feaa0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x2feaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x2feaa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FEAA4u;
    {
        const bool branch_taken_0x2feaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAA4u;
        // 0x2feaa8: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feaa4) {
            ctx->pc = 0x2FEAB0u;
            goto label_2feab0;
        }
    }
    ctx->pc = 0x2FEAACu;
label_2feaac:
    // 0x2feaac: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x2feaacu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_2feab0:
    // 0x2feab0: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x2feab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x2feab4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FEAB4u;
    {
        const bool branch_taken_0x2feab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAB4u;
        // 0x2feab8: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feab4) {
            ctx->pc = 0x2FEAF8u;
            goto label_2feaf8;
        }
    }
    ctx->pc = 0x2FEABCu;
    // 0x2feabc: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x2feabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x2feac0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2feac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2feac4: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x2feac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2feac8: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x2feac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2feacc: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x2feaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fead0: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x2fead0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fead4: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x2fead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2fead8: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x2fead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x2feadc: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x2feadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x2feae0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2feae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2feae4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2feae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2feae8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2feae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2feaec: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x2feaecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x2feaf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEAF0u;
    {
        const bool branch_taken_0x2feaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAF0u;
        // 0x2feaf4: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feaf0) {
            ctx->pc = 0x2FEB0Cu;
            goto label_2feb0c;
        }
    }
    ctx->pc = 0x2FEAF8u;
label_2feaf8:
    // 0x2feaf8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2feaf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feafc: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x2feafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2feb00: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2feb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2feb04: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x2feb04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x2feb08: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x2feb08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_2feb0c:
    // 0x2feb0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2feb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2feb10: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2feb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2feb14: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x2feb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x2feb18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2feb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2feb1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2feb20: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2feb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2feb24: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2feb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2feb28: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x2feb28u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2feb2c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x2feb30: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x2feb30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x2feb34: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2feb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2feb38: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x2feb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2feb3c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2feb3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2feb40: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x2feb40u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2feb44: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2feb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2feb48: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x2feb4c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x2feb4cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x2feb50: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2feb54: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2feb58: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x2feb58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x2feb5c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2feb5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2feb60: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEB60u;
    {
        const bool branch_taken_0x2feb60 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB60u;
        // 0x2feb64: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb60) {
            ctx->pc = 0x2FEB84u;
            goto label_2feb84;
        }
    }
    ctx->pc = 0x2FEB68u;
    // 0x2feb68: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x2feb68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x2feb6c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x2feb6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2feb70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2feb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2feb74: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x2feb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2feb78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2feb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2feb7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEB7Cu;
    {
        const bool branch_taken_0x2feb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB7Cu;
        // 0x2feb80: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb7c) {
            ctx->pc = 0x2FEB98u;
            goto label_2feb98;
        }
    }
    ctx->pc = 0x2FEB84u;
label_2feb84:
    // 0x2feb84: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x2feb84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x2feb88: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x2feb88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2feb8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2feb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2feb90: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x2feb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2feb94: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x2feb94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2feb98:
    // 0x2feb98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2feb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2feb9c: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x2feb9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x2feba0: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x2feba0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x2feba4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2feba8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2febac: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x2febacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2febb0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2febb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2febb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2febb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2febb8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2febb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2febbc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2febbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2febc0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2febc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2febc4: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x2febc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2febc8: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x2febc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x2febcc: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x2febccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2febd0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2febd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2febd4: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2FEBD4u;
    {
        const bool branch_taken_0x2febd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBD4u;
        // 0x2febd8: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febd4) {
            ctx->pc = 0x2FEC14u;
            goto label_2fec14;
        }
    }
    ctx->pc = 0x2FEBDCu;
    // 0x2febdc: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x2febdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x2febe0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2febe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2febe4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2febe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2febe8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FEBE8u;
    {
        const bool branch_taken_0x2febe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2febe8) {
            ctx->pc = 0x2FEBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEBE8u;
            // 0x2febec: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEC48u;
            goto label_2fec48;
        }
    }
    ctx->pc = 0x2FEBF0u;
    // 0x2febf0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2febf4: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x2febf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x2febf8: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x2febf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2febfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fec00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fec04: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x2fec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2fec08: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2fec08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2fec0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2FEC0Cu;
    {
        const bool branch_taken_0x2fec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC0Cu;
        // 0x2fec10: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec0c) {
            ctx->pc = 0x2FEC4Cu;
            goto label_2fec4c;
        }
    }
    ctx->pc = 0x2FEC14u;
label_2fec14:
    // 0x2fec14: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x2fec14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fec18: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2fec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2fec1c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2fec1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2fec20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEC20u;
    {
        const bool branch_taken_0x2fec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fec20) {
            ctx->pc = 0x2FEC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEC20u;
            // 0x2fec24: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEC48u;
            goto label_2fec48;
        }
    }
    ctx->pc = 0x2FEC28u;
    // 0x2fec28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2fec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fec2c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x2fec2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fec30: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x2fec30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fec34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fec34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fec38: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x2fec38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2fec3c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2fec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2fec40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FEC40u;
    {
        const bool branch_taken_0x2fec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC40u;
        // 0x2fec44: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec40) {
            ctx->pc = 0x2FEC4Cu;
            goto label_2fec4c;
        }
    }
    ctx->pc = 0x2FEC48u;
label_2fec48:
    // 0x2fec48: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2fec48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_2fec4c:
    // 0x2fec4c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x2fec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x2fec50: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x2fec50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2fec54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fec54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fec58: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x2fec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fec5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fec60: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x2fec60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x2fec64: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2fec64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fec68: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEC68u;
    {
        const bool branch_taken_0x2fec68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC68u;
        // 0x2fec6c: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec68) {
            ctx->pc = 0x2FEC90u;
            goto label_2fec90;
        }
    }
    ctx->pc = 0x2FEC70u;
    // 0x2fec70: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2fec70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2fec74: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x2fec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2fec78: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2fec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2fec7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fec80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fec84: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x2fec84u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x2fec88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FEC88u;
    {
        const bool branch_taken_0x2fec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC88u;
        // 0x2fec8c: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec88) {
            ctx->pc = 0x2FECD0u;
            goto label_2fecd0;
        }
    }
    ctx->pc = 0x2FEC90u;
label_2fec90:
    // 0x2fec90: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x2fec90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2fec94: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x2fec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2fec98: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2fec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fec9c: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x2fec9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x2feca0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FECA0u;
    {
        const bool branch_taken_0x2feca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECA0u;
        // 0x2feca4: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feca0) {
            ctx->pc = 0x2FECB4u;
            goto label_2fecb4;
        }
    }
    ctx->pc = 0x2FECA8u;
    // 0x2feca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2feca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fecac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FECACu;
    {
        const bool branch_taken_0x2fecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECACu;
        // 0x2fecb0: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecac) {
            ctx->pc = 0x2FECC0u;
            goto label_2fecc0;
        }
    }
    ctx->pc = 0x2FECB4u;
label_2fecb4:
    // 0x2fecb4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fecb8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2fecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fecbc: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2fecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2fecc0:
    // 0x2fecc0: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x2fecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x2fecc4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2fecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2fecc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2feccc: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x2fecccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_2fecd0:
    // 0x2fecd0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2fecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fecd4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2fecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2fecd8: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2fecdc: 0x24846788  addiu       $a0, $a0, 0x6788
    ctx->pc = 0x2fecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26504));
    // 0x2fece0: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x2fece0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x2fece4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fece4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2fece8: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2fece8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2fecec: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2fececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fecf0: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x2fecf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2fecf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fecf8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2fecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fecfc: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x2fecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x2fed00: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x2fed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2fed04: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x2fed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x2fed08: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2fed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2fed0c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2fed0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fed10: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x2fed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
    // 0x2fed14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fed14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fed18: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fed1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fed20: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2fed20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fed24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2fed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fed28: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2fed28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fed2c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2fed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fed30: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2fed30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fed34: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2fed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2fed38: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2fed38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fed3c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x2fed3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x2fed40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fed44: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x2fed44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x2fed48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2fed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fed50: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2fed50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fed54: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2fed54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fed58: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2fed58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fed5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2fed5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fed60: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2fed60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fed64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fed64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fed68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fed68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2fed6c: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x2fed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x2fed70: 0x3e00008  jr          $ra
    ctx->pc = 0x2FED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED70u;
        // 0x2fed74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FED78u;
}
