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

// Function: sub_002C0880
// Address: 0x2c0880 - 0x2c0eb0
void sub_002C0880_0x2c0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0880_0x2c0880");
#endif

    ctx->pc = 0x2c0880u;

    // 0x2c0880: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x2c0880u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0884: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x2c0884u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0888: 0x30c001a  div         $zero, $t8, $t4
    ctx->pc = 0x2c0888u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c088c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c088cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c0890: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c0890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2c0894: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x2c0894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x2c0898: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x2c0898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c089c: 0x25e2000f  addiu       $v0, $t7, 0xF
    ctx->pc = 0x2c089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 15));
    // 0x2c08a0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2c08a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2c08a4: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2c08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2c08a8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2c08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2c08ac: 0x27030003  addiu       $v1, $t8, 0x3
    ctx->pc = 0x2c08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x2c08b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c08b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c08b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2c08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2c08b8: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2c08b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2c08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2c08c0: 0x95140  sll         $t2, $t1, 5
    ctx->pc = 0x2c08c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2c08c4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2c08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2c08c8: 0x15c980  sll         $t9, $s5, 6
    ctx->pc = 0x2c08c8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2c08cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c08d0: 0x2729000f  addiu       $t1, $t9, 0xF
    ctx->pc = 0x2c08d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 15));
    // 0x2c08d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2c08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2c08d8: 0x131c824  and         $t9, $t1, $s1
    ctx->pc = 0x2c08d8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 9) & GPR_U64(ctx, 17));
    // 0x2c08dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2c08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2c08e0: 0x2548000f  addiu       $t0, $t2, 0xF
    ctx->pc = 0x2c08e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2c08e4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2c08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2c08e8: 0x1115024  and         $t2, $t0, $s1
    ctx->pc = 0x2c08e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x2c08ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c08f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c08f4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x2c08f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c08f8: 0x58102a  slt         $v0, $v0, $t8
    ctx->pc = 0x2c08f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x2c08fc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c08fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2c0900: 0x302180b  movn        $v1, $t8, $v0
    ctx->pc = 0x2c0900u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24));
    // 0x2c0904: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x2c0904u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0908: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c090c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2c0910: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2c0910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2c0914: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2c0914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0918: 0x15f080  sll         $fp, $s5, 2
    ctx->pc = 0x2c0918u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2c091c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2c091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c0920: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x2c0920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x2c0924: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2c0924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2c0928: 0x27c8000f  addiu       $t0, $fp, 0xF
    ctx->pc = 0x2c0928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
    // 0x2c092c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c0930: 0x111f024  and         $fp, $t0, $s1
    ctx->pc = 0x2c0930u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x2c0934: 0x13b080  sll         $s6, $s3, 2
    ctx->pc = 0x2c0934u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c0938: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2c093c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2c093cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0940: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2c0940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2c0944: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c0944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2c0948: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2c094c: 0x18a180  sll         $s4, $t8, 6
    ctx->pc = 0x2c094cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
    // 0x2c0950: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2c0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2c0954: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x2c0954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x2c0958: 0x6812  mflo        $t5
    ctx->pc = 0x2c0958u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x2c095c: 0x1235818  mult        $t3, $t1, $v1
    ctx->pc = 0x2c095cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2c0960: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x2c0960u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2c0964: 0x3603000f  ori         $v1, $s0, 0xF
    ctx->pc = 0x2c0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15);
    // 0x2c0968: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c0968u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c096c: 0x718024  and         $s0, $v1, $s1
    ctx->pc = 0x2c096cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c0970: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2c0970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2c0974: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x2c0974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c0978: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c097c: 0x719024  and         $s2, $v1, $s1
    ctx->pc = 0x2c097cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c0980: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c0984: 0x2563000f  addiu       $v1, $t3, 0xF
    ctx->pc = 0x2c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x2c0988: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c098c: 0x715824  and         $t3, $v1, $s1
    ctx->pc = 0x2c098cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c0990: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c0994: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c0994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c0998: 0x2683000f  addiu       $v1, $s4, 0xF
    ctx->pc = 0x2c0998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x2c099c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c09a0: 0x71a024  and         $s4, $v1, $s1
    ctx->pc = 0x2c09a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c09a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c09a8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2c09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2c09ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c09acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c09b0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2c09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2c09b4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09b8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c09bc: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09c0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x2c09c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c09c4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09c8: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2c09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2c09cc: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09d0: 0x25a3000f  addiu       $v1, $t5, 0xF
    ctx->pc = 0x2c09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 15));
    // 0x2c09d4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09d8: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C09D8u;
    {
        const bool branch_taken_0x2c09d8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09d8) {
            ctx->pc = 0x2C09DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C09D8u;
            // 0x2c09dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C09E0u;
            goto label_2c09e0;
        }
    }
    ctx->pc = 0x2C09E0u;
label_2c09e0:
    // 0x2c09e0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09e4: 0x716824  and         $t5, $v1, $s1
    ctx->pc = 0x2c09e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2c09e8: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2c09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2c09f0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09f4: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c09f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c09f8: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c09fc: 0x111b824  and         $s7, $t0, $s1
    ctx->pc = 0x2c09fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x2c0a00: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c0a04: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2c0a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c0a08: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c0a0c: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x2c0a0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a10: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c0a14: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c0a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c0a18: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2c0a1c: 0x1097024  and         $t6, $t0, $t1
    ctx->pc = 0x2c0a1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2c0a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0a24: 0xacee0000  sw          $t6, 0x0($a3)
    ctx->pc = 0x2c0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
    // 0x2c0a28: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2c0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2c0a2c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x2c0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x2c0a30: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2c0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c0a34: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c0a38: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2c0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c0a3c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x2c0a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x2c0a40: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2c0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c0a44: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2c0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2c0a48: 0x576021  addu        $t4, $v0, $s7
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c0a4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c0a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a50: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x2c0a54: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c0a58: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2c0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c0a5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c0a60: 0x18a102a  slt         $v0, $t4, $t2
    ctx->pc = 0x2c0a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2c0a64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A64u;
    {
        const bool branch_taken_0x2c0a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A64u;
        // 0x2c0a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a64) {
            ctx->pc = 0x2C0A74u;
            goto label_2c0a74;
        }
    }
    ctx->pc = 0x2C0A6Cu;
    // 0x2c0a6c: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x2c0a6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a70: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c0a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a74:
    // 0x2c0a74: 0x994821  addu        $t1, $a0, $t9
    ctx->pc = 0x2c0a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x2c0a78: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2c0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2c0a7c: 0x189102a  slt         $v0, $t4, $t1
    ctx->pc = 0x2c0a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c0a80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A80u;
    {
        const bool branch_taken_0x2c0a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A80u;
        // 0x2c0a84: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a80) {
            ctx->pc = 0x2C0A90u;
            goto label_2c0a90;
        }
    }
    ctx->pc = 0x2C0A88u;
    // 0x2c0a88: 0x1c4c821  addu        $t9, $t6, $a0
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0a8c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2c0a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a90:
    // 0x2c0a90: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x2c0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2c0a94: 0xacb90048  sw          $t9, 0x48($a1)
    ctx->pc = 0x2c0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 25));
    // 0x2c0a98: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A9Cu;
    {
        const bool branch_taken_0x2c0a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A9Cu;
        // 0x2c0aa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a9c) {
            ctx->pc = 0x2C0AACu;
            goto label_2c0aac;
        }
    }
    ctx->pc = 0x2C0AA4u;
    // 0x2c0aa4: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0aa8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0aac:
    // 0x2c0aac: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2c0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c0ab0: 0xaca9003c  sw          $t1, 0x3C($a1)
    ctx->pc = 0x2c0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 9));
    // 0x2c0ab4: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0ab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0AB8u;
    {
        const bool branch_taken_0x2c0ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AB8u;
        // 0x2c0abc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ab8) {
            ctx->pc = 0x2C0ACCu;
            goto label_2c0acc;
        }
    }
    ctx->pc = 0x2C0AC0u;
    // 0x2c0ac0: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0ac4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ac8: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2c0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2c0acc:
    // 0x2c0acc: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x2c0accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x2c0ad0: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0ad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0AD4u;
    {
        const bool branch_taken_0x2c0ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD4u;
        // 0x2c0ad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ad4) {
            ctx->pc = 0x2C0AE4u;
            goto label_2c0ae4;
        }
    }
    ctx->pc = 0x2C0ADCu;
    // 0x2c0adc: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0ae0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ae4:
    // 0x2c0ae4: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x2c0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2c0ae8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x2c0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x2c0aec: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0af0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0AF0u;
    {
        const bool branch_taken_0x2c0af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF0u;
        // 0x2c0af4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af0) {
            ctx->pc = 0x2C0B04u;
            goto label_2c0b04;
        }
    }
    ctx->pc = 0x2C0AF8u;
    // 0x2c0af8: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0afc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b00: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x2c0b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2c0b04:
    // 0x2c0b04: 0xaca90054  sw          $t1, 0x54($a1)
    ctx->pc = 0x2c0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 9));
    // 0x2c0b08: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B0Cu;
    {
        const bool branch_taken_0x2c0b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B0Cu;
        // 0x2c0b10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b0c) {
            ctx->pc = 0x2C0B1Cu;
            goto label_2c0b1c;
        }
    }
    ctx->pc = 0x2C0B14u;
    // 0x2c0b14: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0b18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b1c:
    // 0x2c0b1c: 0x2702000f  addiu       $v0, $t8, 0xF
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 15));
    // 0x2c0b20: 0xaca90060  sw          $t1, 0x60($a1)
    ctx->pc = 0x2c0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 9));
    // 0x2c0b24: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2c0b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2c0b28: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x2c0b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x2c0b2c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2c0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2c0b30: 0x8b8021  addu        $s0, $a0, $t3
    ctx->pc = 0x2c0b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2c0b34: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2c0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2c0b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c0b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b3c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x2c0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2c0b40: 0x190182a  slt         $v1, $t4, $s0
    ctx->pc = 0x2c0b40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c0b44: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2c0b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0b48: 0xacb50050  sw          $s5, 0x50($a1)
    ctx->pc = 0x2c0b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 21));
    // 0x2c0b4c: 0xaca80038  sw          $t0, 0x38($a1)
    ctx->pc = 0x2c0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 8));
    // 0x2c0b50: 0xacb50044  sw          $s5, 0x44($a1)
    ctx->pc = 0x2c0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 21));
    // 0x2c0b54: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x2c0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x2c0b58: 0xacb3005c  sw          $s3, 0x5C($a1)
    ctx->pc = 0x2c0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 19));
    // 0x2c0b5c: 0xacb30068  sw          $s3, 0x68($a1)
    ctx->pc = 0x2c0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 19));
    // 0x2c0b60: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2c0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x2c0b64: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2c0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2c0b68: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x2c0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x2c0b6c: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x2c0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x2c0b70: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x2c0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x2c0b74: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2c0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2c0b78: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c0b7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B7Cu;
    {
        const bool branch_taken_0x2c0b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B7Cu;
        // 0x2c0b80: 0xaca00058  sw          $zero, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b7c) {
            ctx->pc = 0x2C0B8Cu;
            goto label_2c0b8c;
        }
    }
    ctx->pc = 0x2C0B84u;
    // 0x2c0b84: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b8c:
    // 0x2c0b8c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x2c0b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2c0b90: 0xacc90118  sw          $t1, 0x118($a2)
    ctx->pc = 0x2c0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 280), GPR_U32(ctx, 9));
    // 0x2c0b94: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x2c0b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B98u;
    {
        const bool branch_taken_0x2c0b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B98u;
        // 0x2c0b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b98) {
            ctx->pc = 0x2C0BA8u;
            goto label_2c0ba8;
        }
    }
    ctx->pc = 0x2C0BA0u;
    // 0x2c0ba0: 0x1c42821  addu        $a1, $t6, $a0
    ctx->pc = 0x2c0ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0ba4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2c0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ba8:
    // 0x2c0ba8: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2c0ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2c0bac: 0xacc5010c  sw          $a1, 0x10C($a2)
    ctx->pc = 0x2c0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 268), GPR_U32(ctx, 5));
    // 0x2c0bb0: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0BB4u;
    {
        const bool branch_taken_0x2c0bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BB4u;
        // 0x2c0bb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bb4) {
            ctx->pc = 0x2C0BC4u;
            goto label_2c0bc4;
        }
    }
    ctx->pc = 0x2C0BBCu;
    // 0x2c0bbc: 0x1c44821  addu        $t1, $t6, $a0
    ctx->pc = 0x2c0bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2c0bc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0bc4:
    // 0x2c0bc4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c0bc8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2c0bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2c0bcc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2c0bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0bd0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0bd4: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0bd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0BD8u;
    {
        const bool branch_taken_0x2c0bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BD8u;
        // 0x2c0bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bd8) {
            ctx->pc = 0x2C0BE8u;
            goto label_2c0be8;
        }
    }
    ctx->pc = 0x2C0BE0u;
    // 0x2c0be0: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0be4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0be8:
    // 0x2c0be8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c0bec: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x2c0becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x2c0bf0: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x2c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0bf4: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0bf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0BF8u;
    {
        const bool branch_taken_0x2c0bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BF8u;
        // 0x2c0bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bf8) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0C00u;
    // 0x2c0c00: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c08:
    // 0x2c0c08: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c0c: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x2c0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
    // 0x2c0c10: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2c0c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0c14: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C18u;
    {
        const bool branch_taken_0x2c0c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C18u;
        // 0x2c0c1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c18) {
            ctx->pc = 0x2C0C28u;
            goto label_2c0c28;
        }
    }
    ctx->pc = 0x2C0C20u;
    // 0x2c0c20: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c28:
    // 0x2c0c28: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x2c0c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c0c2c: 0xacc90028  sw          $t1, 0x28($a2)
    ctx->pc = 0x2c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 9));
    // 0x2c0c30: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0c34: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0c38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C38u;
    {
        const bool branch_taken_0x2c0c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C38u;
        // 0x2c0c3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c38) {
            ctx->pc = 0x2C0C48u;
            goto label_2c0c48;
        }
    }
    ctx->pc = 0x2C0C40u;
    // 0x2c0c40: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c48:
    // 0x2c0c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0c4c: 0xacc90034  sw          $t1, 0x34($a2)
    ctx->pc = 0x2c0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 9));
    // 0x2c0c50: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0c54: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C58u;
    {
        const bool branch_taken_0x2c0c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C58u;
        // 0x2c0c5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c58) {
            ctx->pc = 0x2C0C68u;
            goto label_2c0c68;
        }
    }
    ctx->pc = 0x2C0C60u;
    // 0x2c0c60: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c68:
    // 0x2c0c68: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x2c0c68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2c0c6c: 0xacc90040  sw          $t1, 0x40($a2)
    ctx->pc = 0x2c0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 9));
    // 0x2c0c70: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x2c0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0c74: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C78u;
    {
        const bool branch_taken_0x2c0c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C78u;
        // 0x2c0c7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c78) {
            ctx->pc = 0x2C0C88u;
            goto label_2c0c88;
        }
    }
    ctx->pc = 0x2C0C80u;
    // 0x2c0c80: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c88:
    // 0x2c0c88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0c8c: 0xacc9004c  sw          $t1, 0x4C($a2)
    ctx->pc = 0x2c0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 9));
    // 0x2c0c90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2c0c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0c94: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0c98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C98u;
    {
        const bool branch_taken_0x2c0c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C98u;
        // 0x2c0c9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c98) {
            ctx->pc = 0x2C0CA8u;
            goto label_2c0ca8;
        }
    }
    ctx->pc = 0x2C0CA0u;
    // 0x2c0ca0: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0ca4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ca8:
    // 0x2c0ca8: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x2c0ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2c0cac: 0xacc90058  sw          $t1, 0x58($a2)
    ctx->pc = 0x2c0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 9));
    // 0x2c0cb0: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x2c0cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0cb4: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0CB8u;
    {
        const bool branch_taken_0x2c0cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CB8u;
        // 0x2c0cbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cb8) {
            ctx->pc = 0x2C0CC8u;
            goto label_2c0cc8;
        }
    }
    ctx->pc = 0x2C0CC0u;
    // 0x2c0cc0: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0cc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cc8:
    // 0x2c0cc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0ccc: 0xacc90088  sw          $t1, 0x88($a2)
    ctx->pc = 0x2c0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 9));
    // 0x2c0cd0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2c0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0cd4: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0cd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0CD8u;
    {
        const bool branch_taken_0x2c0cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CD8u;
        // 0x2c0cdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cd8) {
            ctx->pc = 0x2C0CE8u;
            goto label_2c0ce8;
        }
    }
    ctx->pc = 0x2C0CE0u;
    // 0x2c0ce0: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0ce4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ce8:
    // 0x2c0ce8: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x2c0ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c0cec: 0xacc90064  sw          $t1, 0x64($a2)
    ctx->pc = 0x2c0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 9));
    // 0x2c0cf0: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x2c0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0cf4: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x2c0cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0cf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0CF8u;
    {
        const bool branch_taken_0x2c0cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CF8u;
        // 0x2c0cfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cf8) {
            ctx->pc = 0x2C0D08u;
            goto label_2c0d08;
        }
    }
    ctx->pc = 0x2C0D00u;
    // 0x2c0d00: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2c0d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0d04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d08:
    // 0x2c0d08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c0d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d10: 0xacc90070  sw          $t1, 0x70($a2)
    ctx->pc = 0x2c0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 9));
    // 0x2c0d14: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2c0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0d18: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D1Cu;
    {
        const bool branch_taken_0x2c0d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D1Cu;
        // 0x2c0d20: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d1c) {
            ctx->pc = 0x2C0D2Cu;
            goto label_2c0d2c;
        }
    }
    ctx->pc = 0x2C0D24u;
    // 0x2c0d24: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0d28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d2c:
    // 0x2c0d2c: 0x8f1821  addu        $v1, $a0, $t7
    ctx->pc = 0x2c0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2c0d30: 0xacc5007c  sw          $a1, 0x7C($a2)
    ctx->pc = 0x2c0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 5));
    // 0x2c0d34: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D38u;
    {
        const bool branch_taken_0x2c0d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D38u;
        // 0x2c0d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d38) {
            ctx->pc = 0x2C0D48u;
            goto label_2c0d48;
        }
    }
    ctx->pc = 0x2C0D40u;
    // 0x2c0d40: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0d44: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d48:
    // 0x2c0d48: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x2c0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2c0d4c: 0xacc50094  sw          $a1, 0x94($a2)
    ctx->pc = 0x2c0d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 5));
    // 0x2c0d50: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0d54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D54u;
    {
        const bool branch_taken_0x2c0d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D54u;
        // 0x2c0d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d54) {
            ctx->pc = 0x2C0D64u;
            goto label_2c0d64;
        }
    }
    ctx->pc = 0x2C0D5Cu;
    // 0x2c0d5c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0d60: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d64:
    // 0x2c0d64: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x2c0d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2c0d68: 0xacc500a0  sw          $a1, 0xA0($a2)
    ctx->pc = 0x2c0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 5));
    // 0x2c0d6c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2c0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c0d70: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0d74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D74u;
    {
        const bool branch_taken_0x2c0d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D74u;
        // 0x2c0d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d74) {
            ctx->pc = 0x2C0D84u;
            goto label_2c0d84;
        }
    }
    ctx->pc = 0x2C0D7Cu;
    // 0x2c0d7c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0d80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d84:
    // 0x2c0d84: 0x9e4021  addu        $t0, $a0, $fp
    ctx->pc = 0x2c0d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2c0d88: 0xacc500ac  sw          $a1, 0xAC($a2)
    ctx->pc = 0x2c0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 5));
    // 0x2c0d8c: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x2c0d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0d90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D90u;
    {
        const bool branch_taken_0x2c0d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D90u;
        // 0x2c0d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d90) {
            ctx->pc = 0x2C0DA0u;
            goto label_2c0da0;
        }
    }
    ctx->pc = 0x2C0D98u;
    // 0x2c0d98: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0d9c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2c0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c0da0:
    // 0x2c0da0: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x2c0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2c0da4: 0xacc500b8  sw          $a1, 0xB8($a2)
    ctx->pc = 0x2c0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 5));
    // 0x2c0da8: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0dac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0DACu;
    {
        const bool branch_taken_0x2c0dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DACu;
        // 0x2c0db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dac) {
            ctx->pc = 0x2C0DC0u;
            goto label_2c0dc0;
        }
    }
    ctx->pc = 0x2C0DB4u;
    // 0x2c0db4: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0db8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dbc: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x2c0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_2c0dc0:
    // 0x2c0dc0: 0xacc500c4  sw          $a1, 0xC4($a2)
    ctx->pc = 0x2c0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 5));
    // 0x2c0dc4: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x2c0dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0DC8u;
    {
        const bool branch_taken_0x2c0dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DC8u;
        // 0x2c0dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dc8) {
            ctx->pc = 0x2C0DD8u;
            goto label_2c0dd8;
        }
    }
    ctx->pc = 0x2C0DD0u;
    // 0x2c0dd0: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2c0dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0dd4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0dd8:
    // 0x2c0dd8: 0x964021  addu        $t0, $a0, $s6
    ctx->pc = 0x2c0dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2c0ddc: 0xacc500d0  sw          $a1, 0xD0($a2)
    ctx->pc = 0x2c0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 5));
    // 0x2c0de0: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x2c0de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0de4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0DE4u;
    {
        const bool branch_taken_0x2c0de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DE4u;
        // 0x2c0de8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0de4) {
            ctx->pc = 0x2C0DF4u;
            goto label_2c0df4;
        }
    }
    ctx->pc = 0x2C0DECu;
    // 0x2c0dec: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2c0decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c0df0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2c0df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c0df4:
    // 0x2c0df4: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x2c0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2c0df8: 0xacc300dc  sw          $v1, 0xDC($a2)
    ctx->pc = 0x2c0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 3));
    // 0x2c0dfc: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x2c0dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0e00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0E00u;
    {
        const bool branch_taken_0x2c0e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E00u;
        // 0x2c0e04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e00) {
            ctx->pc = 0x2C0E0Cu;
            goto label_2c0e0c;
        }
    }
    ctx->pc = 0x2C0E08u;
    // 0x2c0e08: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2c0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2c0e0c:
    // 0x2c0e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0e10: 0xacc300e8  sw          $v1, 0xE8($a2)
    ctx->pc = 0x2c0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 3));
    // 0x2c0e14: 0x302001a  div         $zero, $t8, $v0
    ctx->pc = 0x2c0e14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c0e18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2c0e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0e1c: 0xacd8000c  sw          $t8, 0xC($a2)
    ctx->pc = 0x2c0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 24));
    // 0x2c0e20: 0xacc40114  sw          $a0, 0x114($a2)
    ctx->pc = 0x2c0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 276), GPR_U32(ctx, 4));
    // 0x2c0e24: 0xacc40120  sw          $a0, 0x120($a2)
    ctx->pc = 0x2c0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 4));
    // 0x2c0e28: 0xacd80018  sw          $t8, 0x18($a2)
    ctx->pc = 0x2c0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 24));
    // 0x2c0e2c: 0xacd80024  sw          $t8, 0x24($a2)
    ctx->pc = 0x2c0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 24));
    // 0x2c0e30: 0xacd80030  sw          $t8, 0x30($a2)
    ctx->pc = 0x2c0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 24));
    // 0x2c0e34: 0xacd8003c  sw          $t8, 0x3C($a2)
    ctx->pc = 0x2c0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 24));
    // 0x2c0e38: 0xacd80048  sw          $t8, 0x48($a2)
    ctx->pc = 0x2c0e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 24));
    // 0x2c0e3c: 0xacd80054  sw          $t8, 0x54($a2)
    ctx->pc = 0x2c0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 24));
    // 0x2c0e40: 0xacd80060  sw          $t8, 0x60($a2)
    ctx->pc = 0x2c0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 24));
    // 0x2c0e44: 0xacd80090  sw          $t8, 0x90($a2)
    ctx->pc = 0x2c0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 24));
    // 0x2c0e48: 0xacd8006c  sw          $t8, 0x6C($a2)
    ctx->pc = 0x2c0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 24));
    // 0x2c0e4c: 0xacd80078  sw          $t8, 0x78($a2)
    ctx->pc = 0x2c0e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 24));
    // 0x2c0e50: 0xacd80084  sw          $t8, 0x84($a2)
    ctx->pc = 0x2c0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 24));
    // 0x2c0e54: 0xacd8009c  sw          $t8, 0x9C($a2)
    ctx->pc = 0x2c0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 24));
    // 0x2c0e58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C0E58u;
    {
        const bool branch_taken_0x2c0e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e58) {
            ctx->pc = 0x2C0E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0E58u;
            // 0x2c0e5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0E60u;
            goto label_2c0e60;
        }
    }
    ctx->pc = 0x2C0E60u;
label_2c0e60:
    // 0x2c0e60: 0xacd300f0  sw          $s3, 0xF0($a2)
    ctx->pc = 0x2c0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 19));
    // 0x2c0e64: 0xacd500c0  sw          $s5, 0xC0($a2)
    ctx->pc = 0x2c0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 21));
    // 0x2c0e68: 0xacd500b4  sw          $s5, 0xB4($a2)
    ctx->pc = 0x2c0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 21));
    // 0x2c0e6c: 0xacd300cc  sw          $s3, 0xCC($a2)
    ctx->pc = 0x2c0e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 19));
    // 0x2c0e70: 0xacd300d8  sw          $s3, 0xD8($a2)
    ctx->pc = 0x2c0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 19));
    // 0x2c0e74: 0xacd300e4  sw          $s3, 0xE4($a2)
    ctx->pc = 0x2c0e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 228), GPR_U32(ctx, 19));
    // 0x2c0e78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c0e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0e7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c0e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c0e80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c0e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0e84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c0e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0e88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c0e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0e8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c0e8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0e90: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2c0e90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0e94: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2c0e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0e98: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2c0e98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0e9c: 0x1812  mflo        $v1
    ctx->pc = 0x2c0e9cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2c0ea0: 0xacc300a8  sw          $v1, 0xA8($a2)
    ctx->pc = 0x2c0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 3));
    // 0x2c0ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EA4u;
        // 0x2c0ea8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0EACu;
    // 0x2c0eac: 0x0  nop
    ctx->pc = 0x2c0eacu;
    // NOP
    ctx->pc = 0x2c0eb0u;
}
